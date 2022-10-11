#include <stdlib.h>
#include "dog.h"
/*
*new_day - creates a new dog
*@name: 1st member,
@age: 2nd member,
@owner; 3rd member
*
*return null if fail.
*/
dog_t *new_dog(char *name, float age, char *owner);
{
  int i, lenN, leno;
  
  struct dog *n_dog = NULL;
  
  lenN = 0 ;
  while(owner[leno] != '\0')
    lenN++
    leno = 0;
  while(owner[leno] != '\0')
    leno++
    
    n_dog = malloc(sizeof(struct dog));
  if(n_dog == NULL)
  {
    free(n_dog->name);
    free(n_dog);
    return(NULL);
  }
  n_dog->owner = malloc(leno + 1);
  if(n_dog->owner == NULL)
  {
    free(n_dog->name);
    free(n_dog->owner);
    free(n_dog);
    return(NULL);
  }
  for(i = 0; i<= lenN; i++)
    n_dog->name[i] = owner[i];
  for(i = 0; i <= leno; i++)
    n_dog->owner[i] = owner[i];
  n_dog->age = age;
  return(n_dog);
}
