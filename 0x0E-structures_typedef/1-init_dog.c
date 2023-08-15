#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to dog
 * @name: name of the dog
 * @age: the dog's age
 * @owner: the owners name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

	int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}

}
