#include <stdlib.h>
#include <stdio.h>

#define SIZE 10

int main()
{
    int values[SIZE] = {5, 7, 3, 4, 5, 6, 8, 9, 10, 3};
    // repeatFlag == 1 is true.
    int repeatFlag = 0;
    int totalUniqueValues = 0;

    int repeatedValues[SIZE] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int repeatedValuesIndex = 0;
    // repeatFoundInOriginal == 1 is true.
    int repeatFoundInOriginal = 0;

    int uniqueRepeatedValues[SIZE] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int uniqueRepeatedValuesIndex = 0;
    int uniqueRepeatFlag = 0;

    int updatedValues[SIZE] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int updatedValuesIndex = 0;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (i == j)
            {

                continue;
            }
            // printf("i: %d, j: %d, Value: %d \n", i, j, values[i]);
            if (values[i] == values[j])
            {

                repeatFlag = 1;
                repeatedValues[repeatedValuesIndex] = values[i];
                repeatedValuesIndex++;
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
    printf("Total unique count: %d \n", totalUniqueValues);

    for (int i = 0; i < SIZE; i++)
    {
        printf("Repeated values %d \n", repeatedValues[i]);
    }

    // Unique repeated values Array.
    for (int i = 0; i < SIZE; i++)
    {
        if (repeatedValues[i] != -1)
        {

            for (int j = 0; j < SIZE; j++)
            {
                if (uniqueRepeatedValues[j] == repeatedValues[i])
                {
                    uniqueRepeatFlag = 1;
                    break;
                }
            }
            if (uniqueRepeatFlag == 0)
            {
                uniqueRepeatedValues[uniqueRepeatedValuesIndex] = repeatedValues[i];
                uniqueRepeatedValuesIndex++;
            }
            uniqueRepeatFlag = 0;
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("Unique Repeated values %d \n", uniqueRepeatedValues[i]);
    }

    // Updated values Array.
    // for (int i = 0; i < SIZE; i++)
    // {
    //     for (int j = 0; i < SIZE; j++)
    //     {
    //         if (repeatFoundInOriginal == 1)
    //         {
    //             break;
    //         }

    //         if (repeatedValues[j] != -1)
    //         {
    //             if (values[i] == repeatedValues[j])
    //             {
    //                 repeatFoundInOriginal = 1;
    //             }
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    //     if (repeatFoundInOriginal == 0)
    //     {
    //         updatedValues[updatedValuesIndex]=values[i];
    //         updatedValuesIndex++;
    //     }
    //     repeatFoundInOriginal = 0;
    // }

    // for (int i = 0; i < SIZE; i++)
    // {
    //     printf("Updated values %d \n", updatedValues[i]);
    // }

    return 0;
}