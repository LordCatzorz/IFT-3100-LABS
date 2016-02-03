#include "renderer.h"

Renderer::Renderer(std::string _user)
{
	imageAlbums.resize(imageCount);
	this->user = utility::conversions::to_string_t(_user);
}

void Renderer::setup()
{
	ofSetFrameRate(0);
	offsetHorizontalImagePercentage = 0.1;
	offsetVerticalImagePercentage = 0.1;

	getLastFMContent(this->user);
	std::list<std::string> artistDone;
	int i = 0;
	for (std::list<std::pair<std::string, std::string>>::iterator it = this->topAlbums.begin(); it != this->topAlbums.end() && i < this->imageCount; it++)
	{
		if (std::find(artistDone.begin(), artistDone.end(), it->first) == artistDone.end())
		{
			artistDone.push_back(it->first);
			ofImage* albumCover = nullptr;
			imageImport(it->second, albumCover);
			imageAlbums[i] = albumCover;
			i++;
		}
	}
}

void Renderer::draw()
{
	ofClear(ofColor(80));

	float offset = offsetHorizontalImagePercentage*imageOriginalSize*0.25;

	float bigImageWidth = imageOriginalSize - offset;
	float smallImageWidth = (imageOriginalSize*0.5) - offset;
	float tinyImageWidth = (imageOriginalSize*0.25) - offset;

	std::vector<float> columns(7);
	columns[0] = offset;
	columns[1] = columns[0] + tinyImageWidth + offset;
	columns[2] = columns[1] + tinyImageWidth + offset;
	columns[3] = columns[2] + tinyImageWidth + offset;
	columns[4] = columns[3] + tinyImageWidth + offset;
	columns[5] = columns[4] + tinyImageWidth + offset;
	columns[6] = columns[5] + tinyImageWidth + offset;

	float bigImageHeight = imageOriginalSize - offset;
	float smallImageHeight = (imageOriginalSize*0.5) - offset;
	float tinyImageHeight = (imageOriginalSize*0.25) - offset;
	std::vector<float> rows(7);
	rows[0] = offset;
	rows[1] = rows[0] + tinyImageHeight + offset;
	rows[2] = rows[1] + tinyImageHeight + offset;
	rows[3] = rows[2] + tinyImageHeight + offset;
	rows[4] = rows[3] + tinyImageHeight + offset;
	rows[5] = rows[4] + tinyImageHeight + offset;
	rows[6] = rows[5] + tinyImageHeight + offset;

	//resize windows to fit
	ofSetWindowShape(columns[6] + tinyImageWidth + offset, rows[6] + tinyImageHeight + offset);

	imageAlbums[0]->draw(columns[0], rows[0], bigImageWidth, bigImageHeight);

	imageAlbums[1]->draw(columns[4], rows[0], smallImageWidth, smallImageHeight);
	imageAlbums[2]->draw(columns[4], rows[2], smallImageWidth, smallImageHeight);
	imageAlbums[3]->draw(columns[4], rows[4], smallImageWidth, smallImageHeight);
	imageAlbums[4]->draw(columns[2], rows[4], smallImageWidth, smallImageHeight);
	imageAlbums[5]->draw(columns[0], rows[4], smallImageWidth, smallImageHeight);

	imageAlbums[6]->draw(columns[6], rows[0], tinyImageWidth, tinyImageHeight);
	imageAlbums[7]->draw(columns[6], rows[1], tinyImageWidth, tinyImageHeight);
	imageAlbums[8]->draw(columns[6], rows[2], tinyImageWidth, tinyImageHeight);
	imageAlbums[9]->draw(columns[6], rows[3], tinyImageWidth, tinyImageHeight);
	imageAlbums[10]->draw(columns[6], rows[4], tinyImageWidth, tinyImageHeight);
	imageAlbums[11]->draw(columns[6], rows[5], tinyImageWidth, tinyImageHeight);
	imageAlbums[12]->draw(columns[6], rows[6], tinyImageWidth, tinyImageHeight);
	imageAlbums[13]->draw(columns[5], rows[6], tinyImageWidth, tinyImageHeight);
	imageAlbums[14]->draw(columns[4], rows[6], tinyImageWidth, tinyImageHeight);
	imageAlbums[15]->draw(columns[3], rows[6], tinyImageWidth, tinyImageHeight);
	imageAlbums[16]->draw(columns[2], rows[6], tinyImageWidth, tinyImageHeight);
	imageAlbums[17]->draw(columns[1], rows[6], tinyImageWidth, tinyImageHeight);
	imageAlbums[18]->draw(columns[0], rows[6], tinyImageWidth, tinyImageHeight);

}

Renderer::~Renderer()
{
	for each (ofImage* ofi in imageAlbums)
	{
		delete ofi;
	}
	imageAlbums.clear();

}

void Renderer::imageImport(const string URL, ofImage *& imageDestination)
{
	if (imageDestination != nullptr)
	{
		ofLog() << "<delete image: " << imageDestination << ">";
		delete imageDestination;
	}

	imageDestination = new ofImage();

	imageDestination->load(URL);

	ofLog() << "<import image: " << URL << " into: " << imageDestination << ">";
}

void Renderer::exportImage(const string path, const string extension)
{
	ofImage imageTemp;

	string timestamp = ofGetTimestampString("%y%m%d-%H%M%S-%i");

	string fileName = path + timestamp + "." + extension;

	imageTemp.grabScreen(0, 0, ofGetWindowWidth(), ofGetWindowHeight());

	imageTemp.save(fileName);

	ofLog() << "<export image: " << fileName << ">";
}

std::string Renderer::
extractStringBetween(std::string *& searchedString, std::string searchedA, std::string searchedB)
{
	int flagA = searchedString->find(searchedA);
	searchedString->erase(0, flagA + searchedA.length());
	int flagB = searchedString->find(searchedB);
	return searchedString->substr(0, flagB);
}

void Renderer::getLastFMContent(utility::string_t _user)
{
	http_client client(U("https://ws.audioscrobbler.com/2.0/"));
	// Build request URI and start the request.
	uri_builder builder(U("/"));
	builder.append_query(U("method"), U("user.gettopalbums"));
	builder.append_query(U("user"), _user);
	builder.append_query(U("api_key"), U("09a22381ce7a9913af88204c5c12bf04"));
	std::wstring s = client.request(methods::GET, builder.to_string()).get().extract_string().get();

	std::string* s2 = new std::string(s.begin(), s.end());
	//std::cout << s2;
	std::string searchedArtistA = "<artist><name>";
	std::string searchedArtistB = "</name>";
	std::string searchedA = "<image size=\"extralarge\">";
	std::string searchedB = "</image>";
	while (s2->find(searchedArtistA) != -1)
	{
		std::string artist = extractStringBetween(s2, searchedArtistA, searchedArtistB);
		std::string albumURL = extractStringBetween(s2, searchedA, searchedB);
		std::pair<std::string, std::string> pair(artist, albumURL);
		this->topAlbums.push_back(pair);
	}
	delete s2;
}
