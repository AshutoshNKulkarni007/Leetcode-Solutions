
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i, j;

    for (i = 0; i < numsSize; i++)
    {
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                int* result = malloc(2 * sizeof(int));

                if (result == NULL)
                {
                    *returnSize = 0;
                    return NULL;
                }

                result[0] = i;
                result[1] = j;
                *returnSize = 2;

                return result;
            }
        }
    }

    *returnSize = 0;
    return NULL;
}

int main(void)
{
    int nums[] = {3, 3};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 6;
    int returnSize = 0;

    int* result = twoSum(nums, numsSize, target, &returnSize);

    if (result != NULL)
    {
        printf("Indices: [%d, %d]\n", result[0], result[1]);
        free(result);
    }
    else
    {
        printf("No solution found.\n");
    }

    return 0;
}