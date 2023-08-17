#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: Pointer to a pointer to the head of the list
 * @index: Index of the node to be deleted
 * Return: 1 if succeeded, -1 if failed
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;
    unsigned int count = 0;

    if (head == NULL || *head == NULL)
        return -1;

    if (index == 0)
    {
        *head = (*head)->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return 1;
    }

    while (current != NULL)
    {
        if (count == index)
        {
            if (current->prev != NULL)
                current->prev->next = current->next;
            if (current->next != NULL)
                current->next->prev = current->prev;
            free(current);
            return 1;
        }
        count++;
        current = current->next;
    }

    return -1; // Node not found
}

