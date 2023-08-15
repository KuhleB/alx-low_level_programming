#ifndef DOG_H
#define DOG_H

/**
  * struct dog - getting the name,age and owner of dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  *
 */

struct dog
{
	char name[20];
	int age;
	char owner[20];
};

typedef struct dog
{
	char *name;
	int *age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
