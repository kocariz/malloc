/*
** EPITECH PROJECT, 2021
** malloc.c
** File description:
** malloc.c
*/

#include "../include/malloc.h"

memory_t *head;
memory_t *tail;

memory_t *get_free_block(size_t size)
{
    memory_t *curr = head;
    while (curr) {
        if (curr->is_free && curr->size >= size)
            return curr;
        curr = curr->next;
    }
    return NULL;
}

void *memory_exist(memory_t *memory)
{
    if (memory != NULL) {
        memory->is_free = 0;
        return (void *)(memory + 1);
    }
    return (NULL);
}

void *create_memory(memory_t *memory, size_t size)
{
    size_t total_size = 0;
    void *block = NULL;

    total_size = sizeof(memory_t) + size;
    block = sbrk(total_size);
    if (block == (void *) -1)
        return NULL;
    memory = block;
    memory->size = size;
    memory->is_free = 0;
    memory->next = NULL;
    if (!head)
        head = memory;
    if (tail)
        tail->next = memory;
    tail = memory;
    return (void *)(memory + 1);
}

void *malloc(size_t size)
{
    memory_t *memory;
    memory_t *mem;

    if (size == 0)
        return NULL;
    memory = get_free_block(size);
    mem = memory_exist(memory);
    if (mem != NULL) {
        return (void *)(mem);
    } else {
        mem = create_memory(memory, size);
        if (mem == NULL)
            return (NULL);
    }
    return (void *)(mem);
}