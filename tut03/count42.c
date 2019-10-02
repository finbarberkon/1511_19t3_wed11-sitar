// Author: Finbar Berkon
// Date: September 2019
// A program to count to 42

#include <stdio.h>

#define MAXIMUM 42

int main(void) {
    int counter = 1;
    while (counter <= MAXIMUM) {
        printf("%d\n", counter);
        
        counter = counter + 1;
        // same as:
        // counter += 1;
        // counter++;
    }
    
    return 0;
}
