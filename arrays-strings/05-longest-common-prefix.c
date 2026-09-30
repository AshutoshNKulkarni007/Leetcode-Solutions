
#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize)
{
    static char prefix[201];

    if (strsSize == 0)
    {
        prefix[0] = '\0';
        return prefix;
    }

    int len = strlen(strs[0]);

    for (int i = 1; i < strsSize; i++)
    {
        int j = 0;

        while (j < len &&
               strs[i][j] != '\0' &&
               strs[0][j] == strs[i][j])
        {
            j++;
        }

        len = j;

        if (len == 0)
        {
            prefix[0] = '\0';
            return prefix;
        }
    }

    strncpy(prefix, strs[0], len);
    prefix[len] = '\0';

    return prefix;
}

int main(void)
{
    char* words1[] = {"flower", "flow", "flight"};
    char* words2[] = {"dog", "racecar", "car"};
    char* words3[] = {"apple", "app", "application"};
    char* words4[] = {"alone"};

    printf("Test 1: %s\n", longestCommonPrefix(words1, 3));
    printf("Test 2: \"%s\"\n", longestCommonPrefix(words2, 3));
    printf("Test 3: %s\n", longestCommonPrefix(words3, 3));
    printf("Test 4: %s\n", longestCommonPrefix(words4, 1));

    return 0;
}