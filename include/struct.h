/*
** EPITECH PROJECT, 2021
** struct.h
** File description:
** struct.h
*/

#ifndef STRUCT_H_
#define STRUCT_H_

#include "./includes.h"

typedef struct memory_s memory_t;

struct memory_s {
    size_t size;
    bool is_free;
    memory_t *next;
    void *adress;
};

extern memory_t *head;
extern memory_t *tail;

#endif
