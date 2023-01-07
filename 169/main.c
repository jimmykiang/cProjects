#include <stdlib.h>
#include <stdio.h>

int main()
{

    int input = 0;

    scanf("%d", &input);

    for (int i=1; i<=input; i++) {

        printf("%d", i);
    }
    printf("\n");
    for (int i=input; i>=1; i--) {

        printf("%d", i);
    }
    
    return 0;
}