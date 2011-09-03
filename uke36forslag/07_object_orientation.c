

#include <stdio.h>
#include <stdlib.h>



/* There is no suggested solution for part i
 * (the registry command line) of this exercise.
 *
 * For a similar example, have a look at the
 * 'gull' program (gull/cli.c)
 *
 * The below code demonstrates an "object oriented"
 * coding style in C, based on struct pointers.
 *
 */


#define REGISTRY_MAX 100

typedef struct {
    short age;
    char *name;
} person_t;

typedef struct {
    unsigned int size, maxsize;
    person_t **people;
} registry_t;



/* Person */

person_t* Person_new(char* name, short age)
{
    person_t* person;
    
    person = malloc(sizeof(person_t));
    person->name = name;
    person->age  = age;
    return person;
}

void Person_birthday(person_t* person)
{
    person->age++;
}

void Person_inspect(person_t* person)
{
    printf("%s (%d)\n", person->name, person->age);
}

void Person_free(person_t* person)
{
    free(person);
}


/* Registry: */

registry_t* Registry_new(int maxsize)
{
    registry_t* registry;
    registry = malloc(sizeof(registry_t));
    registry->maxsize = maxsize;
    registry->size = 0;
    registry->people = malloc(sizeof(person_t) * maxsize);
    return registry;
}

int Registry_add(registry_t* registry, person_t* person)
{
    if (registry->size < registry->maxsize) {
        registry->people[registry->size++] = person;
        return 1;
    } else {
        return 0;
    }
}

void Registry_inspect(registry_t* registry)
{
    int i;
    for (i = 0; i < registry->size; i++) {
        Person_inspect(registry->people[i]);
    }
}

void Registry_free_all(registry_t* registry)
{
    int i;
    for (i = 0; i < registry->size; i++) {
        Person_free(registry->people[i]);
    }
    free(registry->people);
    free(registry);
}



int main(int argc, const char *argv[])
{
    registry_t *registry;
    registry = Registry_new(REGISTRY_MAX);

    Registry_add(registry, Person_new("Gunnar", 40));
    Registry_add(registry, Person_new("Lene",   28));
    Registry_add(registry, Person_new("Rui",    21));
    Registry_add(registry, Person_new("Eva",    61));
    
    Registry_inspect(registry);

    Registry_free_all(registry);

    return 0;
}


