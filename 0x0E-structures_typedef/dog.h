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
 *dog_t - typedef for dog struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
