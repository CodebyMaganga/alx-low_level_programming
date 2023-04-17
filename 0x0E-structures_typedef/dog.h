#ifndef DOG_H
#define DOG_H

/**
 * struct dog- initializes a struct
 * @name: first member
 * @age: 2nd member
 * @owner: 3rd member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * typedef struct dog_t- defines new type struct dog_t
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
