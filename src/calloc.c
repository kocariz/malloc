/*
** EPITECH PROJECT, 2021
** calloc.c
** File description:
** calloc.c
*/

#include "../include/malloc.h"

void *calloc(size_t nmemb, size_t nsize)
{
    size_t size = 0;
    void *block = NULL;

    if (nmemb == 0 || nsize == 0)
        return (NULL);
    size = nmemb * nsize;

    block = malloc(size);
    if (block == NULL)
        return (NULL);
    memset(block, 0, size);
    return block;
}