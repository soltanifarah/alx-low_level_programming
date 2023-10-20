#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list_s - Singly linked list
 * @str: String (malloc'ed string)
 * @len: Length of the string
 * @next: Points to the next node
 *
 * Description: Singly linked list node structure.
 */

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* Function prototypes for the tasks */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* MAIN_H */
