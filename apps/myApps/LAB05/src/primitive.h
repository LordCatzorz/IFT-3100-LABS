#pragma once

typedef struct
{
	float position	[3];	//3 * 4 = 12 octets
	float rotation	[3];	//3 * 4 = 12 octets
	float scale		[3];	//3 * 4 = 12 octets
} StructLocator;			//		= 40 octets
