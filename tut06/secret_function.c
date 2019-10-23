// Author: Finbar Berkon
// Date: October 2019
// A program with a secret function to decode!

#include <stdio.h>

#define MAX_SIZE 1000

// Our secret function
int secret_function(char *word);

// Trim the trailing newline character that fgets saved when it read in the
// string and return the modified string
char *trim(char *str);

int main(void) {
    char string[MAX_SIZE] = {'\0'};
    printf("Please enter a 'string': ");
		fgets(string, MAX_SIZE, stdin);
		printf("secret_function(\"%s\") = %d\n", string, 
										secret_function(trim(string)));

    return 0;
}

int secret_function(char word[]) {
    int i = 0;
    int result = 0;
    while (word[i] != '\0') {
        if (word[i] == 'l' || word[i] == 'o') {
            result++;
        }
        i++;
    }
    return result;
}

// Loop through the string to find any newline character ('\n') and replace it
// with a null terminator ('\0'). This works because C only reads strings until
// the first null terminator it encounters. By putting a null terminator earlier
// in the string, we are just telling C that the string ends earlier.
char *trim(char *str) {
    int i = 0;
    while (i < MAX_SIZE) {
        if (str[i] == '\n') str[i] = '\0';
				i++;
		}
		return str;
}
