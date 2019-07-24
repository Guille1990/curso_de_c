#include <stdio.h>

int main ()
{
    char myString[] = {'A', 'L','G','O','R','I','T','M','0','\0'};
    char* pointer = &myString[0];

    while(*pointer != '\0')
    {
        printf("%c", *pointer);
        pointer++;
    }

    return 0;
}

/*
    nota

    int* pointer = &myArray[0]; === int* pointer = myArray;
*/
