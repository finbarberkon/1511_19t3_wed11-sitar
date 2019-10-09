#include <stdio.h> 

#define SIZE 5

int main(void) {

    int my_numbers[SIZE];
    
    my_numbers[0] = 1;
    my_numbers[1] = 2;
    my_numbers[2] = 5;
    my_numbers[3] = 7;
    my_numbers[4] = 8;
    
    int i = 0;
    while (i < SIZE) {
        printf("%d\n", my_numbers[i]);
        i++;
    }

    return 0;
}
