#ifndef __SAIM_BITMAP_INFO_H__
#define __SAIM_BITMAP_INFO_H__

#include "saim_bitmap.h"

typedef struct {
	saim_bitmap bitmap;
	int* p_usage;
} saim_bitmap_info;

#endif