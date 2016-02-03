#include "GrassBlock.h"

GrassBlock::GrassBlock()
{

	createTop();
	createLeft();
	createRight();
	/*for (int j = 0; j < 16; j++)
	{
		char color1 = (128 / 16)*j;
		for (int i = 0; i < 16; i++)
		{
			char color = color1 + (128 / 16)*i;
			faceTop.facePixel[i][j].colour = ofColor(color, 0, 0);
		}
	}*/
	i = 0;
}

GrassBlock::~GrassBlock()
{
}

void GrassBlock::draw()
{
	
	ofPushMatrix();
	ofRotate(45, 0, 1, 0);
	ofRotate(-25, 1, 0, 1);
	ofPushMatrix();
	ofRotate(90, -1, 0, 0);
	faceTop.draw();
	ofPopMatrix();
	ofPushMatrix();
	ofRotate(90, 0, 1, 0);
	faceLeft.draw();
	ofPopMatrix();
	faceRight.draw();
	ofPopMatrix();
}

void GrassBlock::createLeft()
{
	faceLeft = Face();

	faceLeft.facePixel[0][0].colour = _72b147;
	faceLeft.facePixel[0][1].colour = _64a43a;
	faceLeft.facePixel[0][2].colour = _5b422d;
	faceLeft.facePixel[0][3].colour = _765338;
	faceLeft.facePixel[0][4].colour = _765338;
	faceLeft.facePixel[0][5].colour = _b7835a;
	faceLeft.facePixel[0][6].colour = _946a49;
	faceLeft.facePixel[0][7].colour = _946a49;
	faceLeft.facePixel[0][8].colour = _765338;
	faceLeft.facePixel[0][9].colour = _946a49;
	faceLeft.facePixel[0][10].colour = _765338;
	faceLeft.facePixel[0][11].colour = _5b422d;
	faceLeft.facePixel[0][12].colour = _b7835a;
	faceLeft.facePixel[0][13].colour = _946a49;
	faceLeft.facePixel[0][14].colour = _946a49;
	faceLeft.facePixel[0][15].colour = _5b422d;

	faceLeft.facePixel[1][0].colour = _5a9a30;
	faceLeft.facePixel[1][1].colour = _64a43a;
	faceLeft.facePixel[1][2].colour = _5a9a30;
	faceLeft.facePixel[1][3].colour = _5b422d;
	faceLeft.facePixel[1][4].colour = _5b422d;
	faceLeft.facePixel[1][5].colour = _765338;
	faceLeft.facePixel[1][6].colour = _765338;
	faceLeft.facePixel[1][7].colour = _946a49;
	faceLeft.facePixel[1][8].colour = _5b422d;
	faceLeft.facePixel[1][9].colour = _765338;
	faceLeft.facePixel[1][10].colour = _b7835a;
	faceLeft.facePixel[1][11].colour = _765338;
	faceLeft.facePixel[1][12].colour = _b7835a;
	faceLeft.facePixel[1][13].colour = _946a49;
	faceLeft.facePixel[1][14].colour = _946a49;
	faceLeft.facePixel[1][15].colour = _765338;

	faceLeft.facePixel[2][0].colour = _64a43a;
	faceLeft.facePixel[2][1].colour = _72b147;
	faceLeft.facePixel[2][2].colour = _5a9a30;
	faceLeft.facePixel[2][3].colour = _5b422d;
	faceLeft.facePixel[2][4].colour = _946a49;
	faceLeft.facePixel[2][5].colour = _765338;
	faceLeft.facePixel[2][6].colour = _946a49;
	faceLeft.facePixel[2][7].colour = _765338;
	faceLeft.facePixel[2][8].colour = _765338;
	faceLeft.facePixel[2][9].colour = _b7835a;
	faceLeft.facePixel[2][10].colour = _946a49;
	faceLeft.facePixel[2][11].colour = _946a49;
	faceLeft.facePixel[2][12].colour = _765338;
	faceLeft.facePixel[2][13].colour = _b7835a;
	faceLeft.facePixel[2][14].colour = _765338;
	faceLeft.facePixel[2][15].colour = _946a49;

	faceLeft.facePixel[3][0].colour = _72b147;
	faceLeft.facePixel[3][1].colour = _72b147;
	faceLeft.facePixel[3][2].colour = _5b422d;
	faceLeft.facePixel[3][3].colour = _765338;
	faceLeft.facePixel[3][4].colour = _765338;
	faceLeft.facePixel[3][5].colour = _765338;
	faceLeft.facePixel[3][6].colour = _765338;
	faceLeft.facePixel[3][7].colour = _765338;
	faceLeft.facePixel[3][8].colour = _765338;
	faceLeft.facePixel[3][9].colour = _b7835a;
	faceLeft.facePixel[3][10].colour = _946a49;
	faceLeft.facePixel[3][11].colour = _5b422d;
	faceLeft.facePixel[3][12].colour = _765338;
	faceLeft.facePixel[3][13].colour = _765338;
	faceLeft.facePixel[3][14].colour = _765338;
	faceLeft.facePixel[3][15].colour = _946a49;

	faceLeft.facePixel[4][0].colour = _72b147;
	faceLeft.facePixel[4][1].colour = _72b147;
	faceLeft.facePixel[4][2].colour = _97c767;
	faceLeft.facePixel[4][3].colour = _5b422d;
	faceLeft.facePixel[4][4].colour = _5a5952;
	faceLeft.facePixel[4][5].colour = _5b422d;
	faceLeft.facePixel[4][6].colour = _b7835a;
	faceLeft.facePixel[4][7].colour = _946a49;
	faceLeft.facePixel[4][8].colour = _765338;
	faceLeft.facePixel[4][9].colour = _765338;
	faceLeft.facePixel[4][10].colour = _765338;
	faceLeft.facePixel[4][11].colour = _765338;
	faceLeft.facePixel[4][12].colour = _765338;
	faceLeft.facePixel[4][13].colour = _5b422d;
	faceLeft.facePixel[4][14].colour = _5b422d;
	faceLeft.facePixel[4][15].colour = _765338;

	faceLeft.facePixel[5][0].colour = _72b147;
	faceLeft.facePixel[5][1].colour = _88b858;
	faceLeft.facePixel[5][2].colour = _97c767;
	faceLeft.facePixel[5][3].colour = _72b147;
	faceLeft.facePixel[5][4].colour = _5b422d;
	faceLeft.facePixel[5][5].colour = _765338;
	faceLeft.facePixel[5][6].colour = _b7835a;
	faceLeft.facePixel[5][7].colour = _946a49;
	faceLeft.facePixel[5][8].colour = _946a49;
	faceLeft.facePixel[5][9].colour = _765338;
	faceLeft.facePixel[5][10].colour = _b7835a;
	faceLeft.facePixel[5][11].colour = _946a49;
	faceLeft.facePixel[5][12].colour = _765338;
	faceLeft.facePixel[5][13].colour = _b7835a;
	faceLeft.facePixel[5][14].colour = _765338;
	faceLeft.facePixel[5][15].colour = _765338;

	faceLeft.facePixel[6][0].colour = _72b147;
	faceLeft.facePixel[6][1].colour = _97c767;
	faceLeft.facePixel[6][2].colour = _88b858;
	faceLeft.facePixel[6][3].colour = _5b422d;
	faceLeft.facePixel[6][4].colour = _5b422d;
	faceLeft.facePixel[6][5].colour = _765338;
	faceLeft.facePixel[6][6].colour = _765338;
	faceLeft.facePixel[6][7].colour = _5b422d;
	faceLeft.facePixel[6][8].colour = _946a49;
	faceLeft.facePixel[6][9].colour = _765338;
	faceLeft.facePixel[6][10].colour = _b7835a;
	faceLeft.facePixel[6][11].colour = _946a49;
	faceLeft.facePixel[6][12].colour = _765338;
	faceLeft.facePixel[6][13].colour = _5b422d;
	faceLeft.facePixel[6][14].colour = _765338;
	faceLeft.facePixel[6][15].colour = _946a49;

	faceLeft.facePixel[7][0].colour = _88b858;
	faceLeft.facePixel[7][1].colour = _5a9a30;
	faceLeft.facePixel[7][2].colour = _72b147;
	faceLeft.facePixel[7][3].colour = _5a9a30;
	faceLeft.facePixel[7][4].colour = _5b422d;
	faceLeft.facePixel[7][5].colour = _5b422d;
	faceLeft.facePixel[7][6].colour = _b7835a;
	faceLeft.facePixel[7][7].colour = _946a49;
	faceLeft.facePixel[7][8].colour = _765338;
	faceLeft.facePixel[7][9].colour = _765338;
	faceLeft.facePixel[7][10].colour = _5b422d;
	faceLeft.facePixel[7][11].colour = _5a5952;
	faceLeft.facePixel[7][12].colour = _765338;
	faceLeft.facePixel[7][13].colour = _765338;
	faceLeft.facePixel[7][14].colour = _765338;
	faceLeft.facePixel[7][15].colour = _946a49;

	faceLeft.facePixel[8][0].colour = _72b147;
	faceLeft.facePixel[8][1].colour = _72b147;
	faceLeft.facePixel[8][2].colour = _5b422d;
	faceLeft.facePixel[8][3].colour = _5b422d;
	faceLeft.facePixel[8][4].colour = _765338;
	faceLeft.facePixel[8][5].colour = _5b422d;
	faceLeft.facePixel[8][6].colour = _b7835a;
	faceLeft.facePixel[8][7].colour = _765338;
	faceLeft.facePixel[8][8].colour = _5b422d;
	faceLeft.facePixel[8][9].colour = _765338;
	faceLeft.facePixel[8][10].colour = _946a49;
	faceLeft.facePixel[8][11].colour = _946a49;
	faceLeft.facePixel[8][12].colour = _765338;
	faceLeft.facePixel[8][13].colour = _946a49;
	faceLeft.facePixel[8][14].colour = _5b422d;
	faceLeft.facePixel[8][15].colour = _946a49;

	faceLeft.facePixel[9][0].colour = _5a9a30;
	faceLeft.facePixel[9][1].colour = _72b147;
	faceLeft.facePixel[9][2].colour = _72b147;
	faceLeft.facePixel[9][3].colour = _5b422d;
	faceLeft.facePixel[9][4].colour = _765338;
	faceLeft.facePixel[9][5].colour = _5b422d;
	faceLeft.facePixel[9][6].colour = _765338;
	faceLeft.facePixel[9][7].colour = _765338;
	faceLeft.facePixel[9][8].colour = _765338;
	faceLeft.facePixel[9][9].colour = _5b422d;
	faceLeft.facePixel[9][10].colour = _b7835a;
	faceLeft.facePixel[9][11].colour = _765338;
	faceLeft.facePixel[9][12].colour = _b7835a;
	faceLeft.facePixel[9][13].colour = _946a49;
	faceLeft.facePixel[9][14].colour = _765338;
	faceLeft.facePixel[9][15].colour = _b7835a;

	faceLeft.facePixel[10][0].colour = _72b147;
	faceLeft.facePixel[10][1].colour = _5b422d;
	faceLeft.facePixel[10][2].colour = _5b422d;
	faceLeft.facePixel[10][3].colour = _5b422d;
	faceLeft.facePixel[10][4].colour = _946a49;
	faceLeft.facePixel[10][5].colour = _946a49;
	faceLeft.facePixel[10][6].colour = _765338;
	faceLeft.facePixel[10][7].colour = _946a49;
	faceLeft.facePixel[10][8].colour = _946a49;
	faceLeft.facePixel[10][9].colour = _5b422d;
	faceLeft.facePixel[10][10].colour = _765338;
	faceLeft.facePixel[10][11].colour = _b7835a;
	faceLeft.facePixel[10][12].colour = _946a49;
	faceLeft.facePixel[10][13].colour = _765338;
	faceLeft.facePixel[10][14].colour = _5b422d;
	faceLeft.facePixel[10][15].colour = _765338;

	faceLeft.facePixel[11][0].colour = _72b147;
	faceLeft.facePixel[11][1].colour = _88b858;
	faceLeft.facePixel[11][2].colour = _72b147;
	faceLeft.facePixel[11][3].colour = _72b147;
	faceLeft.facePixel[11][4].colour = _5b422d;
	faceLeft.facePixel[11][5].colour = _765338;
	faceLeft.facePixel[11][6].colour = _b7835a;
	faceLeft.facePixel[11][7].colour = _946a49;
	faceLeft.facePixel[11][8].colour = _765338;
	faceLeft.facePixel[11][9].colour = _765338;
	faceLeft.facePixel[11][10].colour = _b7835a;
	faceLeft.facePixel[11][11].colour = _946a49;
	faceLeft.facePixel[11][12].colour = _946a49;
	faceLeft.facePixel[11][13].colour = _5b422d;
	faceLeft.facePixel[11][14].colour = _765338;
	faceLeft.facePixel[11][15].colour = _946a49;

	faceLeft.facePixel[12][0].colour = _72b147;
	faceLeft.facePixel[12][1].colour = _88b858;
	faceLeft.facePixel[12][2].colour = _72b147;
	faceLeft.facePixel[12][3].colour = _5b422d;
	faceLeft.facePixel[12][4].colour = _b7835a;
	faceLeft.facePixel[12][5].colour = _946a49;
	faceLeft.facePixel[12][6].colour = _765338;
	faceLeft.facePixel[12][7].colour = _b7835a;
	faceLeft.facePixel[12][8].colour = _946a49;
	faceLeft.facePixel[12][9].colour = _765338;
	faceLeft.facePixel[12][10].colour = _b7835a;
	faceLeft.facePixel[12][11].colour = _946a49;
	faceLeft.facePixel[12][12].colour = _765338;
	faceLeft.facePixel[12][13].colour = _765338;
	faceLeft.facePixel[12][14].colour = _b7835a;
	faceLeft.facePixel[12][15].colour = _946a49;

	faceLeft.facePixel[13][0].colour = _72b147;
	faceLeft.facePixel[13][1].colour = _88b858;
	faceLeft.facePixel[13][2].colour = _97c767;
	faceLeft.facePixel[13][3].colour = _5b422d;
	faceLeft.facePixel[13][4].colour = _946a49;
	faceLeft.facePixel[13][5].colour = _946a49;
	faceLeft.facePixel[13][6].colour = _765338;
	faceLeft.facePixel[13][7].colour = _b7835a;
	faceLeft.facePixel[13][8].colour = _765338;
	faceLeft.facePixel[13][9].colour = _5b422d;
	faceLeft.facePixel[13][10].colour = _765338;
	faceLeft.facePixel[13][11].colour = _765338;
	faceLeft.facePixel[13][12].colour = _946a49;
	faceLeft.facePixel[13][13].colour = _765338;
	faceLeft.facePixel[13][14].colour = _5b422d;
	faceLeft.facePixel[13][15].colour = _b7835a;

	faceLeft.facePixel[14][0].colour = _72b147;
	faceLeft.facePixel[14][1].colour = _72b147;
	faceLeft.facePixel[14][2].colour = _5b422d;
	faceLeft.facePixel[14][3].colour = _5a5952;
	faceLeft.facePixel[14][4].colour = _765338;
	faceLeft.facePixel[14][5].colour = _5b422d;
	faceLeft.facePixel[14][6].colour = _5b422d;
	faceLeft.facePixel[14][7].colour = _765338;
	faceLeft.facePixel[14][8].colour = _765338;
	faceLeft.facePixel[14][9].colour = _946a49;
	faceLeft.facePixel[14][10].colour = _946a49;
	faceLeft.facePixel[14][11].colour = _765338;
	faceLeft.facePixel[14][12].colour = _5b422d;
	faceLeft.facePixel[14][13].colour = _946a49;
	faceLeft.facePixel[14][14].colour = _765338;
	faceLeft.facePixel[14][15].colour = _765338;

	faceLeft.facePixel[15][0].colour = _72b147;
	faceLeft.facePixel[15][1].colour = _72b147;
	faceLeft.facePixel[15][2].colour = _88b858;
	faceLeft.facePixel[15][3].colour = _5b422d;
	faceLeft.facePixel[15][4].colour = _946a49;
	faceLeft.facePixel[15][5].colour = _765338;
	faceLeft.facePixel[15][6].colour = _b7835a;
	faceLeft.facePixel[15][7].colour = _b7835a;
	faceLeft.facePixel[15][8].colour = _946a49;
	faceLeft.facePixel[15][9].colour = _946a49;
	faceLeft.facePixel[15][10].colour = _946a49;
	faceLeft.facePixel[15][11].colour = _946a49;
	faceLeft.facePixel[15][12].colour = _765338;
	faceLeft.facePixel[15][13].colour = _765338;
	faceLeft.facePixel[15][14].colour = _946a49;
	faceLeft.facePixel[15][15].colour = _946a49;



}

void GrassBlock::createRight()
{
	faceRight = Face();

	faceRight.facePixel[15][0].colour = _496e2e;
	faceRight.facePixel[15][1].colour = _3b6121;
	faceRight.facePixel[15][2].colour = _362518;
	faceRight.facePixel[15][3].colour = _4f3624;
	faceRight.facePixel[15][4].colour = _4f3624;
	faceRight.facePixel[15][5].colour = _765338;
	faceRight.facePixel[15][6].colour = _5b422d;
	faceRight.facePixel[15][7].colour = _5b422d;
	faceRight.facePixel[15][8].colour = _4f3624;
	faceRight.facePixel[15][9].colour = _5b422d;
	faceRight.facePixel[15][10].colour = _4f3624;
	faceRight.facePixel[15][11].colour = _362518;
	faceRight.facePixel[15][12].colour = _765338;
	faceRight.facePixel[15][13].colour = _5b422d;
	faceRight.facePixel[15][14].colour = _5b422d;
	faceRight.facePixel[15][15].colour = _362518;

	faceRight.facePixel[14][0].colour = _3b6121;
	faceRight.facePixel[14][1].colour = _3b6121;
	faceRight.facePixel[14][2].colour = _3b6121;
	faceRight.facePixel[14][3].colour = _362518;
	faceRight.facePixel[14][4].colour = _362518;
	faceRight.facePixel[14][5].colour = _4f3624;
	faceRight.facePixel[14][6].colour = _4f3624;
	faceRight.facePixel[14][7].colour = _5b422d;
	faceRight.facePixel[14][8].colour = _362518;
	faceRight.facePixel[14][9].colour = _4f3624;
	faceRight.facePixel[14][10].colour = _5a5952;
	faceRight.facePixel[14][11].colour = _4f3624;
	faceRight.facePixel[14][12].colour = _765338;
	faceRight.facePixel[14][13].colour = _5b422d;
	faceRight.facePixel[14][14].colour = _5b422d;
	faceRight.facePixel[14][15].colour = _4f3624;

	faceRight.facePixel[13][0].colour = _3b6121;
	faceRight.facePixel[13][1].colour = _496e2e;
	faceRight.facePixel[13][2].colour = _3b6121;
	faceRight.facePixel[13][3].colour = _362518;
	faceRight.facePixel[13][4].colour = _5b422d;
	faceRight.facePixel[13][5].colour = _4f3624;
	faceRight.facePixel[13][6].colour = _5b422d;
	faceRight.facePixel[13][7].colour = _4f3624;
	faceRight.facePixel[13][8].colour = _4f3624;
	faceRight.facePixel[13][9].colour = _765338;
	faceRight.facePixel[13][10].colour = _5b422d;
	faceRight.facePixel[13][11].colour = _5b422d;
	faceRight.facePixel[13][12].colour = _4f3624;
	faceRight.facePixel[13][13].colour = _765338;
	faceRight.facePixel[13][14].colour = _4f3624;
	faceRight.facePixel[13][15].colour = _5b422d;

	faceRight.facePixel[12][0].colour = _3b6121;
	faceRight.facePixel[12][1].colour = _3b6121;
	faceRight.facePixel[12][2].colour = _362518;
	faceRight.facePixel[12][3].colour = _4f3624;
	faceRight.facePixel[12][4].colour = _4f3624;
	faceRight.facePixel[12][5].colour = _4f3624;
	faceRight.facePixel[12][6].colour = _4f3624;
	faceRight.facePixel[12][7].colour = _4f3624;
	faceRight.facePixel[12][8].colour = _4f3624;
	faceRight.facePixel[12][9].colour = _765338;
	faceRight.facePixel[12][10].colour = _5b422d;
	faceRight.facePixel[12][11].colour = _362518;
	faceRight.facePixel[12][12].colour = _4f3624;
	faceRight.facePixel[12][13].colour = _4f3624;
	faceRight.facePixel[12][14].colour = _4f3624;
	faceRight.facePixel[12][15].colour = _5b422d;

	faceRight.facePixel[11][0].colour = _3b6121;
	faceRight.facePixel[11][1].colour = _496e2e;
	faceRight.facePixel[11][2].colour = _496e2e;
	faceRight.facePixel[11][3].colour = _362518;
	faceRight.facePixel[11][4].colour = _5b422d;
	faceRight.facePixel[11][5].colour = _362518;
	faceRight.facePixel[11][6].colour = _765338;
	faceRight.facePixel[11][7].colour = _5b422d;
	faceRight.facePixel[11][8].colour = _4f3624;
	faceRight.facePixel[11][9].colour = _4f3624;
	faceRight.facePixel[11][10].colour = _4f3624;
	faceRight.facePixel[11][11].colour = _4f3624;
	faceRight.facePixel[11][12].colour = _4f3624;
	faceRight.facePixel[11][13].colour = _362518;
	faceRight.facePixel[11][14].colour = _362518;
	faceRight.facePixel[11][15].colour = _4f3624;

	faceRight.facePixel[10][0].colour = _3b6121;
	faceRight.facePixel[10][1].colour = _496e2e;
	faceRight.facePixel[10][2].colour = _496e2e;
	faceRight.facePixel[10][3].colour = _496e2e;
	faceRight.facePixel[10][4].colour = _362518;
	faceRight.facePixel[10][5].colour = _4f3624;
	faceRight.facePixel[10][6].colour = _765338;
	faceRight.facePixel[10][7].colour = _5b422d;
	faceRight.facePixel[10][8].colour = _5b422d;
	faceRight.facePixel[10][9].colour = _4f3624;
	faceRight.facePixel[10][10].colour = _765338;
	faceRight.facePixel[10][11].colour = _5b422d;
	faceRight.facePixel[10][12].colour = _4f3624;
	faceRight.facePixel[10][13].colour = _765338;
	faceRight.facePixel[10][14].colour = _4f3624;
	faceRight.facePixel[10][15].colour = _4f3624;

	faceRight.facePixel[9][0].colour = _496e2e;
	faceRight.facePixel[9][1].colour = _496e2e;
	faceRight.facePixel[9][2].colour = _496e2e;
	faceRight.facePixel[9][3].colour = _362518;
	faceRight.facePixel[9][4].colour = _362518;
	faceRight.facePixel[9][5].colour = _4f3624;
	faceRight.facePixel[9][6].colour = _4f3624;
	faceRight.facePixel[9][7].colour = _362518;
	faceRight.facePixel[9][8].colour = _5b422d;
	faceRight.facePixel[9][9].colour = _4f3624;
	faceRight.facePixel[9][10].colour = _765338;
	faceRight.facePixel[9][11].colour = _5b422d;
	faceRight.facePixel[9][12].colour = _4f3624;
	faceRight.facePixel[9][13].colour = _362518;
	faceRight.facePixel[9][14].colour = _4f3624;
	faceRight.facePixel[9][15].colour = _5b422d;

	faceRight.facePixel[8][0].colour = _496e2e;
	faceRight.facePixel[8][1].colour = _3b6121;
	faceRight.facePixel[8][2].colour = _496e2e;
	faceRight.facePixel[8][3].colour = _3b6121;
	faceRight.facePixel[8][4].colour = _362518;
	faceRight.facePixel[8][5].colour = _362518;
	faceRight.facePixel[8][6].colour = _765338;
	faceRight.facePixel[8][7].colour = _5b422d;
	faceRight.facePixel[8][8].colour = _4f3624;
	faceRight.facePixel[8][9].colour = _4f3624;
	faceRight.facePixel[8][10].colour = _362518;
	faceRight.facePixel[8][11].colour = _5b422d;
	faceRight.facePixel[8][12].colour = _4f3624;
	faceRight.facePixel[8][13].colour = _4f3624;
	faceRight.facePixel[8][14].colour = _4f3624;
	faceRight.facePixel[8][15].colour = _5b422d;

	faceRight.facePixel[7][0].colour = _496e2e;
	faceRight.facePixel[7][1].colour = _3b6121;
	faceRight.facePixel[7][2].colour = _362518;
	faceRight.facePixel[7][3].colour = _362518;
	faceRight.facePixel[7][4].colour = _4f3624;
	faceRight.facePixel[7][5].colour = _362518;
	faceRight.facePixel[7][6].colour = _765338;
	faceRight.facePixel[7][7].colour = _4f3624;
	faceRight.facePixel[7][8].colour = _362518;
	faceRight.facePixel[7][9].colour = _4f3624;
	faceRight.facePixel[7][10].colour = _5b422d;
	faceRight.facePixel[7][11].colour = _5b422d;
	faceRight.facePixel[7][12].colour = _4f3624;
	faceRight.facePixel[7][13].colour = _5b422d;
	faceRight.facePixel[7][14].colour = _362518;
	faceRight.facePixel[7][15].colour = _5b422d;

	faceRight.facePixel[6][0].colour = _3b6121;
	faceRight.facePixel[6][1].colour = _3b6121;
	faceRight.facePixel[6][2].colour = _496e2e;
	faceRight.facePixel[6][3].colour = _362518;
	faceRight.facePixel[6][4].colour = _4f3624;
	faceRight.facePixel[6][5].colour = _362518;
	faceRight.facePixel[6][6].colour = _4f3624;
	faceRight.facePixel[6][7].colour = _4f3624;
	faceRight.facePixel[6][8].colour = _4f3624;
	faceRight.facePixel[6][9].colour = _362518;
	faceRight.facePixel[6][10].colour = _765338;
	faceRight.facePixel[6][11].colour = _4f3624;
	faceRight.facePixel[6][12].colour = _765338;
	faceRight.facePixel[6][13].colour = _5b422d;
	faceRight.facePixel[6][14].colour = _4f3624;
	faceRight.facePixel[6][15].colour = _5a5952;

	faceRight.facePixel[5][0].colour = _496e2e;
	faceRight.facePixel[5][1].colour = _362518;
	faceRight.facePixel[5][2].colour = _362518;
	faceRight.facePixel[5][3].colour = _362518;
	faceRight.facePixel[5][4].colour = _5b422d;
	faceRight.facePixel[5][5].colour = _5b422d;
	faceRight.facePixel[5][6].colour = _4f3624;
	faceRight.facePixel[5][7].colour = _5b422d;
	faceRight.facePixel[5][8].colour = _5b422d;
	faceRight.facePixel[5][9].colour = _362518;
	faceRight.facePixel[5][10].colour = _4f3624;
	faceRight.facePixel[5][11].colour = _765338;
	faceRight.facePixel[5][12].colour = _5b422d;
	faceRight.facePixel[5][13].colour = _4f3624;
	faceRight.facePixel[5][14].colour = _362518;
	faceRight.facePixel[5][15].colour = _4f3624;

	faceRight.facePixel[4][0].colour = _3b6121;
	faceRight.facePixel[4][1].colour = _496e2e;
	faceRight.facePixel[4][2].colour = _3b6121;
	faceRight.facePixel[4][3].colour = _496e2e;
	faceRight.facePixel[4][4].colour = _362518;
	faceRight.facePixel[4][5].colour = _4f3624;
	faceRight.facePixel[4][6].colour = _5a5952;
	faceRight.facePixel[4][7].colour = _5b422d;
	faceRight.facePixel[4][8].colour = _4f3624;
	faceRight.facePixel[4][9].colour = _4f3624;
	faceRight.facePixel[4][10].colour = _765338;
	faceRight.facePixel[4][11].colour = _5b422d;
	faceRight.facePixel[4][12].colour = _5b422d;
	faceRight.facePixel[4][13].colour = _362518;
	faceRight.facePixel[4][14].colour = _4f3624;
	faceRight.facePixel[4][15].colour = _5b422d;

	faceRight.facePixel[3][0].colour = _3b6121;
	faceRight.facePixel[3][1].colour = _496e2e;
	faceRight.facePixel[3][2].colour = _3b6121;
	faceRight.facePixel[3][3].colour = _362518;
	faceRight.facePixel[3][4].colour = _765338;
	faceRight.facePixel[3][5].colour = _5b422d;
	faceRight.facePixel[3][6].colour = _4f3624;
	faceRight.facePixel[3][7].colour = _765338;
	faceRight.facePixel[3][8].colour = _5b422d;
	faceRight.facePixel[3][9].colour = _4f3624;
	faceRight.facePixel[3][10].colour = _765338;
	faceRight.facePixel[3][11].colour = _5b422d;
	faceRight.facePixel[3][12].colour = _4f3624;
	faceRight.facePixel[3][13].colour = _4f3624;
	faceRight.facePixel[3][14].colour = _765338;
	faceRight.facePixel[3][15].colour = _5b422d;

	faceRight.facePixel[2][0].colour = _496e2e;
	faceRight.facePixel[2][1].colour = _496e2e;
	faceRight.facePixel[2][2].colour = _496e2e;
	faceRight.facePixel[2][3].colour = _362518;
	faceRight.facePixel[2][4].colour = _5b422d;
	faceRight.facePixel[2][5].colour = _5b422d;
	faceRight.facePixel[2][6].colour = _4f3624;
	faceRight.facePixel[2][7].colour = _765338;
	faceRight.facePixel[2][8].colour = _4f3624;
	faceRight.facePixel[2][9].colour = _362518;
	faceRight.facePixel[2][10].colour = _4f3624;
	faceRight.facePixel[2][11].colour = _4f3624;
	faceRight.facePixel[2][12].colour = _5b422d;
	faceRight.facePixel[2][13].colour = _4f3624;
	faceRight.facePixel[2][14].colour = _362518;
	faceRight.facePixel[2][15].colour = _765338;

	faceRight.facePixel[1][0].colour = _496e2e;
	faceRight.facePixel[1][1].colour = _496e2e;
	faceRight.facePixel[1][2].colour = _362518;
	faceRight.facePixel[1][3].colour = _5b422d;
	faceRight.facePixel[1][4].colour = _4f3624;
	faceRight.facePixel[1][5].colour = _362518;
	faceRight.facePixel[1][6].colour = _362518;
	faceRight.facePixel[1][7].colour = _4f3624;
	faceRight.facePixel[1][8].colour = _4f3624;
	faceRight.facePixel[1][9].colour = _5b422d;
	faceRight.facePixel[1][10].colour = _5b422d;
	faceRight.facePixel[1][11].colour = _4f3624;
	faceRight.facePixel[1][12].colour = _362518;
	faceRight.facePixel[1][13].colour = _5b422d;
	faceRight.facePixel[1][14].colour = _4f3624;
	faceRight.facePixel[1][15].colour = _4f3624;

	faceRight.facePixel[0][0].colour = _496e2e;
	faceRight.facePixel[0][1].colour = _496e2e;
	faceRight.facePixel[0][2].colour = _496e2e;
	faceRight.facePixel[0][3].colour = _362518;
	faceRight.facePixel[0][4].colour = _5b422d;
	faceRight.facePixel[0][5].colour = _4f3624;
	faceRight.facePixel[0][6].colour = _765338;
	faceRight.facePixel[0][7].colour = _765338;
	faceRight.facePixel[0][8].colour = _5b422d;
	faceRight.facePixel[0][9].colour = _5b422d;
	faceRight.facePixel[0][10].colour = _5b422d;
	faceRight.facePixel[0][11].colour = _5b422d;
	faceRight.facePixel[0][12].colour = _4f3624;
	faceRight.facePixel[0][13].colour = _4f3624;
	faceRight.facePixel[0][14].colour = _5b422d;
	faceRight.facePixel[0][15].colour = _5b422d;
}

void GrassBlock::createTop()
{
	faceTop = Face();

	faceTop.facePixel[0][0].colour = _64a43a;
	faceTop.facePixel[0][1].colour = _88b858;
	faceTop.facePixel[0][2].colour = _97c767;
	faceTop.facePixel[0][3].colour = _97c767;
	faceTop.facePixel[0][4].colour = _64a43a;
	faceTop.facePixel[0][5].colour = _72b147;
	faceTop.facePixel[0][6].colour = _72b147;
	faceTop.facePixel[0][7].colour = _64a43a;
	faceTop.facePixel[0][8].colour = _72b147;
	faceTop.facePixel[0][9].colour = _5a9a30;
	faceTop.facePixel[0][10].colour = _72b147;
	faceTop.facePixel[0][11].colour = _88b858;
	faceTop.facePixel[0][12].colour = _5a9a30;
	faceTop.facePixel[0][13].colour = _88b858;
	faceTop.facePixel[0][14].colour = _72b147;
	faceTop.facePixel[0][15].colour = _72b147;

	faceTop.facePixel[1][0].colour = _72b147;
	faceTop.facePixel[1][1].colour = _88b858;
	faceTop.facePixel[1][2].colour = _97c767;
	faceTop.facePixel[1][3].colour = _72b147;
	faceTop.facePixel[1][4].colour = _97c767;
	faceTop.facePixel[1][5].colour = _88b858;
	faceTop.facePixel[1][6].colour = _64a43a;
	faceTop.facePixel[1][7].colour = _88b858;
	faceTop.facePixel[1][8].colour = _64a43a;
	faceTop.facePixel[1][9].colour = _88b858;
	faceTop.facePixel[1][10].colour = _72b147;
	faceTop.facePixel[1][11].colour = _64a43a;
	faceTop.facePixel[1][12].colour = _64a43a;
	faceTop.facePixel[1][13].colour = _97c767;
	faceTop.facePixel[1][14].colour = _72b147;
	faceTop.facePixel[1][15].colour = _72b147;

	faceTop.facePixel[2][0].colour = _64a43a;
	faceTop.facePixel[2][1].colour = _64a43a;
	faceTop.facePixel[2][2].colour = _5a9a30;
	faceTop.facePixel[2][3].colour = _64a43a;
	faceTop.facePixel[2][4].colour = _64a43a;
	faceTop.facePixel[2][5].colour = _72b147;
	faceTop.facePixel[2][6].colour = _97c767;
	faceTop.facePixel[2][7].colour = _97c767;
	faceTop.facePixel[2][8].colour = _88b858;
	faceTop.facePixel[2][9].colour = _88b858;
	faceTop.facePixel[2][10].colour = _5a9a30;
	faceTop.facePixel[2][11].colour = _97c767;
	faceTop.facePixel[2][12].colour = _64a43a;
	faceTop.facePixel[2][13].colour = _97c767;
	faceTop.facePixel[2][14].colour = _88b858;
	faceTop.facePixel[2][15].colour = _72b147;

	faceTop.facePixel[3][0].colour = _5a9a30;
	faceTop.facePixel[3][1].colour = _5a9a30;
	faceTop.facePixel[3][2].colour = _5a9a30;
	faceTop.facePixel[3][3].colour = _64a43a;
	faceTop.facePixel[3][4].colour = _88b858;
	faceTop.facePixel[3][5].colour = _88b858;
	faceTop.facePixel[3][6].colour = _72b147;
	faceTop.facePixel[3][7].colour = _97c767;
	faceTop.facePixel[3][8].colour = _64a43a;
	faceTop.facePixel[3][9].colour = _72b147;
	faceTop.facePixel[3][10].colour = _88b858;
	faceTop.facePixel[3][11].colour = _64a43a;
	faceTop.facePixel[3][12].colour = _72b147;
	faceTop.facePixel[3][13].colour = _64a43a;
	faceTop.facePixel[3][14].colour = _88b858;
	faceTop.facePixel[3][15].colour = _64a43a;

	faceTop.facePixel[4][0].colour = _88b858;
	faceTop.facePixel[4][1].colour = _97c767;
	faceTop.facePixel[4][2].colour = _5a9a30;
	faceTop.facePixel[4][3].colour = _72b147;
	faceTop.facePixel[4][4].colour = _72b147;
	faceTop.facePixel[4][5].colour = _64a43a;
	faceTop.facePixel[4][6].colour = _72b147;
	faceTop.facePixel[4][7].colour = _97c767;
	faceTop.facePixel[4][8].colour = _72b147;
	faceTop.facePixel[4][9].colour = _72b147;
	faceTop.facePixel[4][10].colour = _64a43a;
	faceTop.facePixel[4][11].colour = _97c767;
	faceTop.facePixel[4][12].colour = _72b147;
	faceTop.facePixel[4][13].colour = _64a43a;
	faceTop.facePixel[4][14].colour = _88b858;
	faceTop.facePixel[4][15].colour = _64a43a;

	faceTop.facePixel[5][0].colour = _72b147;
	faceTop.facePixel[5][1].colour = _97c767;
	faceTop.facePixel[5][2].colour = _5a9a30;
	faceTop.facePixel[5][3].colour = _72b147;
	faceTop.facePixel[5][4].colour = _64a43a;
	faceTop.facePixel[5][5].colour = _97c767;
	faceTop.facePixel[5][6].colour = _88b858;
	faceTop.facePixel[5][7].colour = _64a43a;
	faceTop.facePixel[5][8].colour = _5a9a30;
	faceTop.facePixel[5][9].colour = _64a43a;
	faceTop.facePixel[5][10].colour = _72b147;
	faceTop.facePixel[5][11].colour = _97c767;
	faceTop.facePixel[5][12].colour = _72b147;
	faceTop.facePixel[5][13].colour = _64a43a;
	faceTop.facePixel[5][14].colour = _5a9a30;
	faceTop.facePixel[5][15].colour = _72b147;

	faceTop.facePixel[6][0].colour = _72b147;
	faceTop.facePixel[6][1].colour = _72b147;
	faceTop.facePixel[6][2].colour = _64a43a;
	faceTop.facePixel[6][3].colour = _64a43a;
	faceTop.facePixel[6][4].colour = _72b147;
	faceTop.facePixel[6][5].colour = _72b147;
	faceTop.facePixel[6][6].colour = _97c767;
	faceTop.facePixel[6][7].colour = _97c767;
	faceTop.facePixel[6][8].colour = _88b858;
	faceTop.facePixel[6][9].colour = _64a43a;
	faceTop.facePixel[6][10].colour = _72b147;
	faceTop.facePixel[6][11].colour = _64a43a;
	faceTop.facePixel[6][12].colour = _5a9a30;
	faceTop.facePixel[6][13].colour = _72b147;
	faceTop.facePixel[6][14].colour = _64a43a;
	faceTop.facePixel[6][15].colour = _5a9a30;

	faceTop.facePixel[7][0].colour = _97c767;
	faceTop.facePixel[7][1].colour = _72b147;
	faceTop.facePixel[7][2].colour = _97c767;
	faceTop.facePixel[7][3].colour = _5a9a30;
	faceTop.facePixel[7][4].colour = _64a43a;
	faceTop.facePixel[7][5].colour = _72b147;
	faceTop.facePixel[7][6].colour = _5a9a30;
	faceTop.facePixel[7][7].colour = _88b858;
	faceTop.facePixel[7][8].colour = _64a43a;
	faceTop.facePixel[7][9].colour = _5a9a30;
	faceTop.facePixel[7][10].colour = _88b858;
	faceTop.facePixel[7][11].colour = _97c767;
	faceTop.facePixel[7][12].colour = _5a9a30;
	faceTop.facePixel[7][13].colour = _72b147;
	faceTop.facePixel[7][14].colour = _64a43a;
	faceTop.facePixel[7][15].colour = _72b147;

	faceTop.facePixel[8][0].colour = _72b147;
	faceTop.facePixel[8][1].colour = _5a9a30;
	faceTop.facePixel[8][2].colour = _88b858;
	faceTop.facePixel[8][3].colour = _496e2e;
	faceTop.facePixel[8][4].colour = _72b147;
	faceTop.facePixel[8][5].colour = _97c767;
	faceTop.facePixel[8][6].colour = _64a43a;
	faceTop.facePixel[8][7].colour = _97c767;
	faceTop.facePixel[8][8].colour = _72b147;
	faceTop.facePixel[8][9].colour = _64a43a;
	faceTop.facePixel[8][10].colour = _64a43a;
	faceTop.facePixel[8][11].colour = _97c767;
	faceTop.facePixel[8][12].colour = _5a9a30;
	faceTop.facePixel[8][13].colour = _72b147;
	faceTop.facePixel[8][14].colour = _5a9a30;
	faceTop.facePixel[8][15].colour = _88b858;

	faceTop.facePixel[9][0].colour = _97c767;
	faceTop.facePixel[9][1].colour = _72b147;
	faceTop.facePixel[9][2].colour = _97c767;
	faceTop.facePixel[9][3].colour = _72b147;
	faceTop.facePixel[9][4].colour = _72b147;
	faceTop.facePixel[9][5].colour = _5a9a30;
	faceTop.facePixel[9][6].colour = _72b147;
	faceTop.facePixel[9][7].colour = _97c767;
	faceTop.facePixel[9][8].colour = _97c767;
	faceTop.facePixel[9][9].colour = _64a43a;
	faceTop.facePixel[9][10].colour = _72b147;
	faceTop.facePixel[9][11].colour = _5a9a30;
	faceTop.facePixel[9][12].colour = _64a43a;
	faceTop.facePixel[9][13].colour = _88b858;
	faceTop.facePixel[9][14].colour = _97c767;
	faceTop.facePixel[9][15].colour = _72b147;

	faceTop.facePixel[10][0].colour = _5a9a30;
	faceTop.facePixel[10][1].colour = _72b147;
	faceTop.facePixel[10][2].colour = _97c767;
	faceTop.facePixel[10][3].colour = _64a43a;
	faceTop.facePixel[10][4].colour = _72b147;
	faceTop.facePixel[10][5].colour = _88b858;
	faceTop.facePixel[10][6].colour = _72b147;
	faceTop.facePixel[10][7].colour = _64a43a;
	faceTop.facePixel[10][8].colour = _64a43a;
	faceTop.facePixel[10][9].colour = _97c767;
	faceTop.facePixel[10][10].colour = _64a43a;
	faceTop.facePixel[10][11].colour = _5a9a30;
	faceTop.facePixel[10][12].colour = _72b147;
	faceTop.facePixel[10][13].colour = _97c767;
	faceTop.facePixel[10][14].colour = _88b858;
	faceTop.facePixel[10][15].colour = _64a43a;

	faceTop.facePixel[11][0].colour = _64a43a;
	faceTop.facePixel[11][1].colour = _64a43a;
	faceTop.facePixel[11][2].colour = _72b147;
	faceTop.facePixel[11][3].colour = _5a9a30;
	faceTop.facePixel[11][4].colour = _5a9a30;
	faceTop.facePixel[11][5].colour = _64a43a;
	faceTop.facePixel[11][6].colour = _88b858;
	faceTop.facePixel[11][7].colour = _72b147;
	faceTop.facePixel[11][8].colour = _64a43a;
	faceTop.facePixel[11][9].colour = _97c767;
	faceTop.facePixel[11][10].colour = _64a43a;
	faceTop.facePixel[11][11].colour = _97c767;
	faceTop.facePixel[11][12].colour = _72b147;
	faceTop.facePixel[11][13].colour = _97c767;
	faceTop.facePixel[11][14].colour = _72b147;
	faceTop.facePixel[11][15].colour = _64a43a;

	faceTop.facePixel[12][0].colour = _64a43a;
	faceTop.facePixel[12][1].colour = _97c767;
	faceTop.facePixel[12][2].colour = _88b858;
	faceTop.facePixel[12][3].colour = _88b858;
	faceTop.facePixel[12][4].colour = _5a9a30;
	faceTop.facePixel[12][5].colour = _72b147;
	faceTop.facePixel[12][6].colour = _72b147;
	faceTop.facePixel[12][7].colour = _64a43a;
	faceTop.facePixel[12][8].colour = _72b147;
	faceTop.facePixel[12][9].colour = _72b147;
	faceTop.facePixel[12][10].colour = _5a9a30;
	faceTop.facePixel[12][11].colour = _97c767;
	faceTop.facePixel[12][12].colour = _72b147;
	faceTop.facePixel[12][13].colour = _64a43a;
	faceTop.facePixel[12][14].colour = _64a43a;
	faceTop.facePixel[12][15].colour = _64a43a;

	faceTop.facePixel[13][0].colour = _72b147;
	faceTop.facePixel[13][1].colour = _88b858;
	faceTop.facePixel[13][2].colour = _64a43a;
	faceTop.facePixel[13][3].colour = _88b858;
	faceTop.facePixel[13][4].colour = _5a9a30;
	faceTop.facePixel[13][5].colour = _64a43a;
	faceTop.facePixel[13][6].colour = _97c767;
	faceTop.facePixel[13][7].colour = _72b147;
	faceTop.facePixel[13][8].colour = _88b858;
	faceTop.facePixel[13][9].colour = _97c767;
	faceTop.facePixel[13][10].colour = _64a43a;
	faceTop.facePixel[13][11].colour = _5a9a30;
	faceTop.facePixel[13][12].colour = _64a43a;
	faceTop.facePixel[13][13].colour = _5a9a30;
	faceTop.facePixel[13][14].colour = _72b147;
	faceTop.facePixel[13][15].colour = _64a43a;

	faceTop.facePixel[14][0].colour = _64a43a;
	faceTop.facePixel[14][1].colour = _64a43a;
	faceTop.facePixel[14][2].colour = _97c767;
	faceTop.facePixel[14][3].colour = _5a9a30;
	faceTop.facePixel[14][4].colour = _5a9a30;
	faceTop.facePixel[14][5].colour = _64a43a;
	faceTop.facePixel[14][6].colour = _72b147;
	faceTop.facePixel[14][7].colour = _5a9a30;
	faceTop.facePixel[14][8].colour = _5a9a30;
	faceTop.facePixel[14][9].colour = _72b147;
	faceTop.facePixel[14][10].colour = _72b147;
	faceTop.facePixel[14][11].colour = _64a43a;
	faceTop.facePixel[14][12].colour = _72b147;
	faceTop.facePixel[14][13].colour = _5a9a30;
	faceTop.facePixel[14][14].colour = _64a43a;
	faceTop.facePixel[14][15].colour = _5a9a30;

	faceTop.facePixel[15][0].colour = _88b858;
	faceTop.facePixel[15][1].colour = _88b858;
	faceTop.facePixel[15][2].colour = _97c767;
	faceTop.facePixel[15][3].colour = _64a43a;
	faceTop.facePixel[15][4].colour = _64a43a;
	faceTop.facePixel[15][5].colour = _72b147;
	faceTop.facePixel[15][6].colour = _64a43a;
	faceTop.facePixel[15][7].colour = _5a9a30;
	faceTop.facePixel[15][8].colour = _97c767;
	faceTop.facePixel[15][9].colour = _72b147;
	faceTop.facePixel[15][10].colour = _72b147;
	faceTop.facePixel[15][11].colour = _72b147;
	faceTop.facePixel[15][12].colour = _5a9a30;
	faceTop.facePixel[15][13].colour = _97c767;
	faceTop.facePixel[15][14].colour = _64a43a;
	faceTop.facePixel[15][15].colour = _72b147;
}