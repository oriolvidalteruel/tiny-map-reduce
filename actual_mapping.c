/*
 *
 * =====================================================================================
 *
 *       Filename:  actual_mapping.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/12/20 12:33:35
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

void* chunk_map(void* argument)
{
    struct map_argument* arg = (struct map_argument*) argument;
    for (int i = arg->from; i < arg->to; i++)
    {
        arg->results[i] = (*(arg->f))(arg->things[i]);
    }
    return NULL;
}

