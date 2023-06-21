#include "dog.h"
#include<stdlib>

/**
 * free_dog - function that frees dog
 * @d: pointer to function
 * Return: freedom
 */

void free_dog(dog_t *d) {
  if (d == NULL) {
    return;
  }

  free(d->name);
  free(d->owner);
  free(d);
}

