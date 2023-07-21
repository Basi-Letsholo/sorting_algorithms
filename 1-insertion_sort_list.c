#include "sort.h"

/**
 * insertion_sort_list - A function that sorts a doubly linked list of integers
 *                       in ascending order using the insertion sort algorithm.
 * @list: a pointer to the head
 * 
*/
void insertion_sort_list(listint_t **list)
{
listint_t *i, *j, *temp;

if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

for (i = (*list)->next; i != NULL; i = temp)
{
temp = i->next;
j = i->prev;

while (j != NULL && i->n < j->n)
{
if (j->prev)
j->prev->next = i;
if (i->next)
i->next->prev = j;

i->prev = j->prev;
j->next = i->next;
i->next = j;

if (j->prev == NULL)
*list = i;

else
j->prev->next = i;

j->prev = i;

print_list((const listint_t *)*list);

j= i->prev;
}
}
}
