#include<stdlib.h>
/**
 * init_dog - prototype
 * @d: pointer to struct
 * @name: pointer 
 * @age: variable data
 * @owner: pointer to data
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner) {
    d->name = name;
    d->age = age;
    d->owner = owner;
}

