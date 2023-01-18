#ifndef _HEADER_
#define _HEADER_

/**
 *struct dog - dog attributes
 *@name: dog's name
 *@owner: dog owner
 *@age: dog age
 *
 *Description: the dog's attributes
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 *struct dog_t - dog attributes
 *@name: name
 *@age: age
 *@owner: ownership of dog
 */
struct dog_t
{
	char *name;
	float age;
	char *owner;
};

/**
 *dog_t - typedef for dog struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
