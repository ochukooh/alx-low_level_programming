#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */

typedef struct {
    char *name;
    float age;
    char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner) {
    if (name == NULL || owner == NULL) {
        return NULL; // Return NULL if any of the parameters are NULL
    }

    // Allocate memory for the new dog structure
    dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));
    if (new_dog == NULL) {
        return NULL; // Return NULL if memory allocation fails
    }

    // Allocate memory and create copies of name and owner
    new_dog->name = (char *)malloc((strlen(name) + 1) * sizeof(char));
    new_dog->owner = (char *)malloc((strlen(owner) + 1) * sizeof(char));
    if (new_dog->name == NULL || new_dog->owner == NULL) {
        free(new_dog->name);
        free(new_dog->owner);
        free(new_dog);
        return NULL; // Return NULL if memory allocation fails
    }

    // Copy name and owner into the new dog structure
    strcpy(new_dog->name, name);
    strcpy(new_dog->owner, owner);

    // Assign the age
    new_dog->age = age;

    return new_dog;
}

