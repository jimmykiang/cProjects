#include <stdlib.h>
#include <stdio.h>

int main()
{

    int input = 0;
    int total = 0;

    scanf("%d", &input);

    for (int i=1; i<=input; i++) {

        total += i;
    }

    printf("Total: %d ", total);
    
    return 0;
}