#include <stdio.h> 

int main(void) {

    int array[100];
    int length = 0;
    int result = scanf("%d", &array[length]);
    while(result == 1) {
        length++;
        result = scanf("%d", &array[length]);
    }
    
    int i = 0;
    while (i < length && i < 100) {
        printf("array[%d] = %d\n", i, array[i]);
        i++;
    }
    
    

    return 0;
}
