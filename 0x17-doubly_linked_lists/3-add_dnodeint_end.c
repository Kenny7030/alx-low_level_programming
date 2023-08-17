#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: Pointer to a pointer to the head of the list
 * @n: Integer value to be added to the new node
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new = malloc(sizeof(dlistint_t));
    dlistint_t *current = *head;

    if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = NULL;

    if (current != NULL)
    {
        while (current->next != NULL)
            current = current->next;
        current->next = new;
    }
    else
    {
        *head = new;
    }

    new->prev = current;

    return new;
}

