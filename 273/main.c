#include <stdio.h>

#define SIZE 20

int stringLengthFunction(char (*str)[])
{
    int count = 0;
    for(int i = 0; (*str)[i] != '\0'; i++){

        count = i+1;
    }

    return count;
}

int main()
{

    char inputString[SIZE];
    gets(inputString);

    int stringLenght = 0;
    stringLenght = stringLengthFunction(&inputString);

    printf("Text: %s\n", inputString);
    printf("Length of string: %d\n", stringLenght);
    return 0;
}


