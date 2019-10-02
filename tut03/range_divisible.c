// Author: Finbar Berkon
// Date: September 2019
// A program to count to any number

#include <stdio.h>

int main(void) {
    
    int startLoop;
    printf("Enter start: ");
    scanf("%d", &startLoop);
    
    int endLoop;
    printf("Enter finish: ");
    scanf("%d", &endLoop);
    
    int divisor;
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    
    int counter = startLoop;
    while (counter <= endLoop) {
    
        if (counter % divisor == 0) {
            printf("%d\n", counter);
        }

        counter = counter + 1;
    }
    
    return 0;
}
