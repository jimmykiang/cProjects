#include <stdlib.h>
#include <stdio.h>

int main()
{

    int input = 0;
    int nSpace = 0;
    int nCount = 1;

    scanf("%d", &input);

    for (int i = 1; i <= input; i++)
    {
        nSpace = input - i;

        for (int k = 1; k <= nSpace; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {

            printf("%d ", nCount++);
            // printf("* ");
        }
        printf("\n");
    }

    return 0;
}