#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;  // Pointeur vers le prochain nœud
} list_t;

size_t print_list(const list_t *h);
