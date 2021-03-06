/*
 $License:
    Copyright (C) 2011 InvenSense Corporation, All Rights Reserved.

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
  $
 */
/**
 * @defgroup
 * @brief
 *
 * @{
 * @file     mlos-kernel.c
 * @brief
 *
 *
 */

#include "mlos.h"
#include <linux/delay.h>
#include <linux/slab.h>

void *inv_malloc(unsigned int numBytes)
{
	void* p = kmalloc(numBytes, GFP_KERNEL);
	memset(p, 0x0, numBytes);
	return p;
}

inv_error_t inv_free(void *ptr)
{
	kfree(ptr);
	return INV_SUCCESS;
}

inv_error_t inv_create_mutex(HANDLE *mutex)
{
	/* @todo implement if needed */
	return INV_ERROR_FEATURE_NOT_IMPLEMENTED;
}

inv_error_t inv_lock_mutex(HANDLE mutex)
{
	/* @todo implement if needed */
	return INV_ERROR_FEATURE_NOT_IMPLEMENTED;
}

inv_error_t inv_unlock_mutex(HANDLE mutex)
{
	/* @todo implement if needed */
	return INV_ERROR_FEATURE_NOT_IMPLEMENTED;
}

inv_error_t inv_destroy_mutex(HANDLE handle)
{
	/* @todo implement if needed */
	return INV_ERROR_FEATURE_NOT_IMPLEMENTED;
}

FILE *inv_fopen(char *filename)
{
	/* @todo implement if needed */
	return NULL;
}

void inv_fclose(FILE *fp)
{
	/* @todo implement if needed */
}

void inv_sleep(int mSecs)
{
	msleep(mSecs);
}

unsigned long inv_get_tick_count(void)
{
	/* @todo implement if needed */
	return INV_ERROR_FEATURE_NOT_IMPLEMENTED;
}
