// Author: Finbar Berkon
// Date: September 2019
// A program to convert cm to feet

#include <stdio.h>

#define CM_IN_INCH 2.54
#define INCH_IN_FT 12

int main(void) {
    
    int height_cm;
    printf("Enter your height in centimetres: ");
    scanf("%d", &height_cm);
    
    double ft;
    
    height_ft = (height_cm / CM_IN_INCH) / INCH_IN_FT;
    
    printf("Your height in feet is %lf\n", ft);
    
    return 0;
}
