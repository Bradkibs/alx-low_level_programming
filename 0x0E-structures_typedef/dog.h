#ifndef DOG_H
#define DOG_H
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - contains the name owner and age
 * @name: name of the dog
 * @owner: name of the owner of the dog
 * @age: the age of the dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif

