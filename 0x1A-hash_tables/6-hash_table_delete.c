#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *n, *tmp_n;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			n = ht->array[i];
			while (n != NULL)
			{
				tmp_n = n->next;
				free(n->key);
				free(n->value);
				free(n);
				n = tmp_n;
			}
		}
	}
	free(head->array);
	free(head);
}
