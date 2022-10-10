#include <stdlib.h>
#include "dog.h"
  /**
  *int_dog - initalize a variable of type struct dog
  *@d: array
  *@name: age 
  *@owner: owner
  *description: this struct is for dog
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	
	d->name = name;
	d->age = age;
	d->owner = owner;
	
}
