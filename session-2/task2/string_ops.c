
/*
 * Some small tests of the string library
 */

#include <stdio.h>
#include <string.h>

int main( void ) {
    char str1[100] = "hello";
    char str2[100] = "goodbye";
    char str3[100];

    // use printf to verify the following tests

    // use 'strcmp' to compare 2 strings - print the return value

    int result = strcmp(str1, str2);

    printf("Comparing %s with %s:\n", str1, str2);
    printf("strcmp returns %d\n\n", result);

    result = strcmp(str1, str1);

    printf("Comparing %s with %s:\n", str1, str1);
    printf("strcmp returns %d\n\n", result);

    // use 'strcat' to concatenate 2 strings - print the resulting string

    printf("Before strcat: str1 = %s\n", str1);
    strcat(str1, str2);
    printf("After strcat: str1 = %s\n\n", str1);

    // use 'strcpy' to copy a string into str3 - print string 3

    printf("Before strcpy: str3 = %s\n", str3);
    strcpy(str3, str2);
    printf("After strcpy: str3 = %s\n", str3);

    return 0;
}
