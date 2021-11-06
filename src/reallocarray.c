/*
** EPITECH PROJECT, 2021
** reallocarray.c
** File description:
** reallocarray.c
*/

#include "../include/malloc.h"

void *reallocarray(void *ptr, size_t nmemb, size_t size)
{
    void *ret = realloc(ptr, nmemb);
    ret = realloc(ret, size);
    return ret;
}