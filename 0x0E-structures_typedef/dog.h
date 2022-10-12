#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - structure to keep details of a dog
 * @owner: name of dog's owner
 * @name: dog's name
 * @age: dog's age
 */
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* _DOG_H */
