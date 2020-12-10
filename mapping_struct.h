/*
 * =====================================================================================
 *
 *       Filename:  mapping_struct.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/12/20 12:30:08
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>

struct map_argument {
    void** things;
    void** results;
    void* (*f)(void*);
    int from;
    int to;
};

void init_map_argument(struct map_argument* argument,
        void** things, void** results, void* (*f)(void*),
        int from, int to);
