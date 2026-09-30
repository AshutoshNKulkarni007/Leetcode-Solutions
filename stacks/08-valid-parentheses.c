
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isValid(char *s)
{
    int length = strlen(s);
    char *stack = malloc((length + 1) * sizeof(char));

    if (stack == NULL)
    {
        return false;
    }

    int top = -1;

    for (int i = 0; i < length; i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '[' || ch == '{')
        {
            stack[++top] = ch;
        }
        else
        {
            if (top == -1)
            {
                free(stack);
                return false;
            }

            char opening = stack[top--];

            if ((ch == ')' && opening != '(') ||
                (ch == ']' && opening != '[') ||
                (ch == '}' && opening != '{'))
            {
                free(stack);
                return false;
            }
        }
    }

    bool result = (top == -1);

    free(stack);
    return result;
}

int main(void)
{
    char *tests[] = {
        "()",
        "()[]{}",
        "{[]}",
        "(]",
        "([)]",
        "(((",
        ""
    };

    bool expected[] = {
        true, true, true, false, false, false, true
    };

    int count = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < count; i++)
    {
        bool result = isValid(tests[i]);

        printf("Input: \"%s\" | Result: %s | ",
               tests[i], result ? "true" : "false");

        printf("%s\n",
               result == expected[i] ? "PASS" : "FAIL");
    }

    return 0;
}