/*
** EPITECH PROJECT, 2021
** malloc.h
** File description:
** malloc.h
*/

#ifndef MALLOC_H_
#define MALLOC_H_

#include "./includes.h"
#include "./struct.h"

void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
void *reallocarray(void *ptr, size_t nmemb, size_t size);

#endif
