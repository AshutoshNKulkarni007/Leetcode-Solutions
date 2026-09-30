
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t)
{
    if (strlen(s) != strlen(t))
    {
        return false;
    }

    int frequency[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        frequency[s[i] - 'a']++;
        frequency[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (frequency[i] != 0)
        {
            return false;
        }
    }

    return true;
}

int main(void)
{
    printf("Test 1: %s\n",
           isAnagram("anagram", "nagaram") ? "true" : "false");

    printf("Test 2: %s\n",
           isAnagram("rat", "car") ? "true" : "false");

    printf("Test 3: %s\n",
           isAnagram("a", "ab") ? "true" : "false");

    printf("Test 4: %s\n",
           isAnagram("listen", "silent") ? "true" : "false");

    return 0;
}