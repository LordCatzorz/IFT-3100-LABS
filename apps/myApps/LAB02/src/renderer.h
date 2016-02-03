#pragma once

#include "ofMain.h"
#include <cpprest/http_client.h>
#include <cpprest/filestream.h>
#include <unordered_map>
#include <string>
#include <list>
#include <vector>
#include <algorithm>

using namespace utility;                    // Common utilities like string conversions
using namespace web;                        // Common features like URIs.
using namespace web::http;                  // Common HTTP functionality
using namespace web::http::client;          // HTTP client features
using namespace concurrency::streams;       // Asynchronous streams

class Renderer
{
public:
	std::vector<ofImage*> imageAlbums;

	Renderer(std::string _user);

	void setup();
	void draw();


	~Renderer();
	void imageImport(const string URL, ofImage * & imageDestination);
	void exportImage(const string name, const string extension);
private:
	std::list<std::pair<std::string, std::string>> topAlbums;
	std::string extractStringBetween(std::string*& searchedString, std::string searchedA, std::string searchedB);
	void getLastFMContent(utility::string_t _user);

	float offsetVerticalImagePercentage;
	float offsetHorizontalImagePercentage;
	float imageOriginalSize = 300;
	int imageCount = 19;
	utility::string_t user;
};