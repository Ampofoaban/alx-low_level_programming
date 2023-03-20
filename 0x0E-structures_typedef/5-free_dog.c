#include <stdlib.h>
#include "dog.h"


/**
* free_dog - frees memory allocated for a struct dog
* @d: free variable d
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
