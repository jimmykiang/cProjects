#include <stdlib.h>
#include <stdio.h>

#define SIZE 10

int main()
{
    int values[SIZE];
    // repeatFlag == 1 is true.
    int repeatFlag = 0;
    int totalUniqueValues = 0;

    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter value #%d ", i);
        scanf("%d", &values[i]);
    }

    for (int i = 0; i < SIZE; i++)
    {
        
        for (int j = 0; j < SIZE; j++)
        {
            if (i == j){

                continue;
            }
            // printf("i: %d, j: %d, Value: %d \n", i, j, values[i]);
            if (values[i] == values[j])
            {

                repeatFlag = 1;
                break;
            }
        }
        if (repeatFlag == 0)
        {
            totalUniqueValues += 1;
            printf("Unique value %d \n", values[i]);
        }
        repeatFlag = 0;
        
    }
    printf("Total unique count: %d ", totalUniqueValues);

    return 0;
}