

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STR_LEN 50

struct pet {
    char name[MAX_STR_LEN];
    char type[MAX_STR_LEN];
    int age;
    int weight;
};

void age_fluffy(struct pet *my_pet);

int main(int argc, char *argv[]) {
    struct pet my_pet;
    

    strcpy(my_pet.name, argv[1]);
    strcpy(my_pet.type, argv[2]);
    my_pet.age = strtol(argv[3], NULL, 10);
    my_pet.weight = strtol(argv[4], NULL, 10);
    
    printf("%d\n", my_pet.age);
    printf("%d\n", my_pet.weight);
    printf("%s\n", my_pet.name);
    
    age_fluffy(&my_pet);
    age_fluffy(&my_pet);
    age_fluffy(&my_pet);
    age_fluffy(&my_pet);
    age_fluffy(&my_pet);

    printf("%d\n", my_pet.age);
    printf("%d\n", my_pet.weight);
    printf("%s\n", my_pet.name);

    return 0;
}

void age_fluffy(struct pet *my_pet) {
    int oldAge = my_pet->age;
    my_pet->age = my_pet->age + 1;
    my_pet->weight = my_pet->age * my_pet->weight / oldAge;
}
