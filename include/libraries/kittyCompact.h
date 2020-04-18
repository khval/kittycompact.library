
#ifndef __kittyCompact_h__
#define __kittyCompact_h__

#define PicPac_screen 0x12031990
#define PicPac_image 0x06071963


struct PacPicContext
{
	// for when uncompressing or when compressing.

	int scanline_x;
	int scanline_y;

	int w;
	int h;
	int ll;
	int d;
	unsigned char *raw;
	unsigned short mode;

	// when compressing data

	unsigned char *data;
	unsigned char *rledata;
	unsigned char *points;
	
	int data_used;
	int rledata_used;
	int points_used;

	unsigned char rrle;
	unsigned char last_rle;
	bool first_rle;
	bool ready_to_encode;
	int rrle_bit;
};

#endif
