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
	struct dog dog_t;
	
	dog_t.name = poppy;
	dog_t.age = 2;
	dog_t.owner = victor's;

	printf("this is %C %c and he is %.1f year old\n", dog_t.owner, dog_t.name, dog_t.age)

	return 0;	
}
