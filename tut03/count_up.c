// Author: Finbar Berkon
// Date: September 2019
// A program to count to any number

#include <stdio.h>

int main(void) {

    int endLoop;
    printf("Enter finish: ");
    scanf("%d", &endLoop);
    
    int counter = 1;
    while (counter <= endLoop) {
        printf("%d\n", counter);
        
        counter = counter + 1;
    }
    
    return 0;
}
