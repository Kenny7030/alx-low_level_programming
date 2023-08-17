#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to a pointer to the head of the list
 * @idx: Index where the new node should be added
 * @n: Integer value to be added to the new node
 * Return: Address of the new node, or NULL if it failed
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *current = *h;
    unsigned int count = 0;

    if (h == NULL)
        return NULL;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;

    if (idx == 0)
    {
        new_node->prev = NULL;
        new_node->next = *h;
        if (*h != NULL)
            (*h)->prev = new_node;
        *h = new_node;
        return new_node;
    }

    while (current != NULL)
    {
        if (count == idx - 1)
        {
            new_node->prev = current;
            new_node->next = current->next;
            if (current->next != NULL)
                current->next->prev = new_node;
            current->next = new_node;
            return new_node;
        }
        count++;
        current = current->next;
    }

    free(new_node); // If insertion is not possible
    return NULL;
}

