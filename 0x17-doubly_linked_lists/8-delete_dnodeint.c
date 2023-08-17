#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a
 * dlistint_t linked list
 * @head: Pointer to a pointer to the head of the list
 * @index: Index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;
    dlistint_t *previous = NULL;
    unsigned int count = 0;

    while (current != NULL)
    {
        if (count == index)
        {
            if (previous != NULL)
                previous->next = current->next;
            else
                *head = current->next;

            if (current->next != NULL)
                current->next->prev = previous;

            free(current);
            return 1;
        }

        previous = current;
        current = current->next;
        count++;
    }

    return -1;
}

