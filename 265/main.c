#include <stdlib.h>
#include <stdio.h>

int main()
{
    char str[] = "hi hi hej!";
    int i = 0;

    for(int i=0; str[i] != '\0'; i++){

        printf("%c", str[i]);
    }

    return 0;
}