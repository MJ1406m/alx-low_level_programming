#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - dog attributes
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner
 *
 * Description: The atttributes of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *ad, char *name, float age, char *owner);
void print_dog(struct dog *ad);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);


#endif
