#include <stdio.h> 

#define SIZE 15

int main(void) {

    int squares[SIZE];
    
    int i = 0;
    while(i < SIZE) {
        squares[i] = i * i;
        i++;
    }
    
    i = 0;
    while(i < SIZE) {
        printf("squares[%d] is %d\n", i, squares[i]);
        i++;
    }

    return 0;
}
