
#include <stdio.h>

int search(int* nums, int numsSize, int target)
{
    int left = 0;
    int right = numsSize - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main(void)
{
    int nums1[] = {-1, 0, 3, 5, 9, 12};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);

    int nums2[] = {-1, 0, 3, 5, 9, 12};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);

    int nums3[] = {5};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);

    int nums4[] = {1, 3, 5, 7, 9};
    int size4 = sizeof(nums4) / sizeof(nums4[0]);

    printf("Test 1: %d\n", search(nums1, size1, 9));
    printf("Test 2: %d\n", search(nums2, size2, 2));
    printf("Test 3: %d\n", search(nums3, size3, 5));
    printf("Test 4: %d\n", search(nums4, size4, 1));

    return 0;
}