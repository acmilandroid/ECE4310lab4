#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SQR(x) ((x)*(x))
int grow();
void RegionGrow(unsigned char *,	/* image data */
	unsigned char *,	/* segmentation labels */
	int, int,	/* size of image */
	int, int,		/* pixel to paint from */
	int,	/* image label to paint over */
	int,		/* image label for painting */
	int *,		/* output:  indices of pixels painted */
	int *);
