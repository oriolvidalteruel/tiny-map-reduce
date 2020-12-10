/*
 * =====================================================================================
 *
 *       Filename:  map_single_thread.c
 *
 *    Description: Generic single-threaded map implementation using void* and other pointer
 *                  arithmetics.
 *
 *        Version:  1.0
 *        Created:  10/12/20 11:56:01
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "map_single_thread.h"
void** map(void** things, void* (*f)(void*), int length)
{
    void** results = malloc(sizeof(void*) * length);

    for (int i = 0; i < length; i++)
    {
        void* thing = things[i];
        void* result = (*f)(thing);
        results[i] = result;
    }

    return results;
}

