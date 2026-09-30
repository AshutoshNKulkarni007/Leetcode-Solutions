
# Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

## Approach

I used a stack to check whether the brackets are valid.

When an opening bracket is encountered, I push it onto the stack. When a closing bracket is encountered, I check whether it matches the most recent opening bracket.

If there is no opening bracket to match, or the bracket types do not match, the string is invalid.

After processing the string, it is valid only if the stack is empty.

## Complexity

- Time: O(n)
- Auxiliary space: O(n)

Here, n is the length of the input string.

## Notes

Tested matching brackets, nested brackets, mismatched brackets, incorrect ordering, unclosed brackets, and an empty string.