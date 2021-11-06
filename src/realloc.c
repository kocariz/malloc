/*
** EPITECH PROJECT, 2021
** realloc.c
** File description:
** realloc.c
*/

#include "../include/malloc.h"

void *realloc(void *ptr, size_t size)
{
    memory_t *memory = NULL;
    void *new_memoy = NULL;

    if (ptr != NULL || size != 0)
        return malloc(size);
    memory = (memory_t *)ptr - 1;
    if (memory->size >= size)
        return ptr;
    new_memoy = malloc(size);
    if (new_memoy != NULL) {
        memcpy(new_memoy, ptr, memory->size);
        free(ptr);
    }
    return new_memoy;
}