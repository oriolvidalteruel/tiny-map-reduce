/*
 * =====================================================================================
 *
 *       Filename:  concurrent_map.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/12/20 13:53:06
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include "actual_mapping.h"

void** concurrent_map(void** things, void* (*f)(void*), int length, int nthreads);

