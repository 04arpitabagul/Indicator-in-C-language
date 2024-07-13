//Q.1 Length Finder
//Develop a program that finds the length of a string using a pointer.
//
//Example:
//Input: Enter any string: hello world
//Output: The length of a string is: 11
//
//Marking Criteria: (Total 5 Marks)
//Logic: 3 Marks
//Output: 2 Marks

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
    char str[100];
    char *ptr;
    int length;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; 

    ptr = str;
    length = 0;

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("The length of the string is: %d\n", length);

    getch();
}

