#include <stdlib.h>
#include <stdio.h>

int main()
{

    int input = 0;

    scanf("%d", &input);

    for (int i=1; i<=input; i++) {

        printf("%d ", 2*i);
    }
    
    return 0;
}