// Read characters from input, then count the number of digiits and
// their sum
// Author: Finbar Berkon
// Date: July 2019

#include <stdio.h>

int value(int ch);

int main(void) {
    int digit_count = 0;
    int digit_sum = 0;
    int digit_value = 0;
     
    int ch = getchar();
    while (ch != EOF) {
        if (ch >= '0' && ch <= '9') {
            digit_value = ch - '0';
            digit_sum += digit_value;
            digit_count++;
        }
        ch = getchar();
    }
    
    printf("Input contained %d digits which summed to %d\n", digit_count, digit_sum);
    return 0;
}

// Note we could create a function like this and use
// it instead on line 18
int value(int ch) {
    return ch - '0';
}
