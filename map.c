/*
 * =====================================================================================
 *
 *       Filename:  is_prime.c
 *
 *    Description: Returns 1 if the number is a prime, 0 otherwise 
 *
 *        Version:  1.0
 *        Created:  10/12/20 12:09:09
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "map_single_thread.h"
#include "concurrent_map.h"

void usage()
{
    char buff[128];
    sprintf(buff, "Usage: ./map SIZE <USE_THREADS: 0 | 1 NTHREADS>\n");
    write(1, buff, strlen(buff));
    exit(1);
}

void* naivePrime(void* number)
{
    int n = *((int*) number);
    int* res = malloc(sizeof(int));
    *res = 1;
    for (int i = 2; i < n; i++) {
        if (n%i==0)
        {
            *res = 0;
            return res;
        }
    }
    return res;
}

int main(int argc, char* argv[])
{

    if (argc < 2)
    {
        usage();
    }
    const char* SIZE = argv[1];
    int N = atoi(SIZE);

    const char* use_threads = argv[2];
    int USE_THREADS = atoi(use_threads);
    int NTHREADS = 0;
    if (USE_THREADS)
    {
        const char* nthreads = argv[3];
        NTHREADS = atoi(nthreads);
    }

    int** numbers = malloc(sizeof(int*) * N);
    for (int i = 0; i < N; i++)
    {
        int* n = malloc(sizeof(int));
        *n = i;
        numbers[i] = n;
    }
    
    int** result_numbers = NULL;
    if (USE_THREADS) 
    {
        void** is_prime = concurrent_map((void**) numbers, naivePrime, N, NTHREADS);
        result_numbers = (int**) is_prime;
    } else {
        void** is_prime = map((void**) numbers, naivePrime, N);
        result_numbers = (int**) is_prime;
    }
    
    return 0;
}
