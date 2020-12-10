/*
 * =====================================================================================
 *
 *       Filename:  mapping_struct.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/12/20 13:18:55
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include "mapping_struct.h"

void init_map_argument(struct map_argument* argument, 
        void** things, void** results, void* (*f)(void*),
        int from, int to)
{
    argument->f = f;
    argument->things = things;
    argument->from = from;
    argument->to = to;
}
