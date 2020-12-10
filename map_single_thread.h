/*
 * =====================================================================================
 *
 *       Filename:  map_single_thread.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/12/20 13:33:27
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>

void** map(void** things, void* (*f)(void*), int length);
