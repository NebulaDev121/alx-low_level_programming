#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory previously allocated for a dog
 *
 * @d: pointer to the dog to be freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
