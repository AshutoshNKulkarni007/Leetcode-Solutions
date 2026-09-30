
#include <stdio.h>

void reverseString(char* s, int sSize)
{
    int left = 0;
    int right = sSize - 1;

    while (left < right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main(void)
{
    // Test Case 1: Normal string
    char str1[] = "hello";
    int size1 = sizeof(str1) - 1;

    reverseString(str1, size1);

    printf("Test Case 1: %s\n", str1);

    // Test Case 2: Single character
    char str2[] = "a";
    int size2 = sizeof(str2) - 1;

    reverseString(str2, size2);

    printf("Test Case 2: %s\n", str2);

    return 0;
}