#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen -  The string length
 * @str: The string 
 * Return: e
 */
unsigned int _strlen(char *str)
{
	unsigned int e;

	for (e = 0; str[e]; e++)
		
	return (e);
}

/**
 * add_node_end - adds a new node to the end of linked list
 * @head: is a double pointer to a linked list
 * @str: string 
 *
 * Return: New
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
