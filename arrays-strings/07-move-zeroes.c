
#include <stdio.h>

void moveZeroes(int* nums, int numsSize)
{
    int position = 0;

    // Move non-zero elements to the front
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            nums[position] = nums[i];
            position++;
        }
    }

    // Fill the remaining positions with zeroes
    while (position < numsSize)
    {
        nums[position] = 0;
        position++;
    }
}

void printArray(int* nums, int size)
{
    printf("[");
    for (int i = 0; i < size; i++)
    {
        printf("%d", nums[i]);

        if (i < size - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");
}

int main(void)
{
    int nums1[] = {0, 1, 0, 3, 12};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);

    int nums2[] = {0, 0, 1};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);

    int nums3[] = {1, 2, 3};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);

    int nums4[] = {0, 0, 0};
    int size4 = sizeof(nums4) / sizeof(nums4[0]);

    moveZeroes(nums1, size1);
    moveZeroes(nums2, size2);
    moveZeroes(nums3, size3);
    moveZeroes(nums4, size4);

    printf("Test 1: ");
    printArray(nums1, size1);

    printf("Test 2: ");
    printArray(nums2, size2);

    printf("Test 3: ");
    printArray(nums3, size3);

    printf("Test 4: ");
    printArray(nums4, size4);

    return 0;
}