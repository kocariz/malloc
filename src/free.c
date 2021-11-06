/*
** EPITECH PROJECT, 2021
** free.c
** File description:
** free.c
*/

#include "../include/malloc.h"

void free_last(memory_t *memory)
{
    memory_t *tmp = NULL;

    if (head == tail)
        head = tail = NULL;
    else {
        tmp = head;
        while (tmp != NULL) {
            if (tmp->next == tail) {
                tmp->next = NULL;
                tail = tmp;
            }
            tmp = tmp->next;
        }
    }
    sbrk(0 - memory->size - sizeof(memory_t));
}

void free(void *ptr)
{
    memory_t *memory = NULL;
    void *programbreak = NULL;

    if (ptr == NULL)
        return;
    memory = (memory_t *)ptr - 1;
    programbreak = sbrk(0);
    if (programbreak == (void *) -1)
        return;

    if ((char *)ptr + memory->size == programbreak) {
        free_last(memory);
        return;
    }
    memory->is_free = 1;
}