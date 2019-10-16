// Finbar
// Septemebr 2019
// arrays

#include <stdio.h>

#define SIZE 10

void print_array(int n, int array[n]);
int scanf_array(int n, int array[n]);

int main(void) {

    int array[SIZE];
    
    int size = scanf_array(SIZE, array);
    
    print_array(size, array);

    return 0;
}

void print_array(int n, int array[n]) {
    int i = 0;
    while (i < n) {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");
}

int scanf_array(int n, int array[n]) {
    int i = 0;
    while (i < n && scanf("%d", &array[i]) == 1) {
        i++;
    }
    return i;
}
