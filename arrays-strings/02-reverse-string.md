
## Problem: Reverse String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

I used two pointers, one at the beginning and one at the end
of the character array. I swapped the characters and moved
both pointers inward until they met.

### Complexity

- Time: O(n)
- Auxiliary space: O(1)

### Notes

Tested with "hello", which became "olleh", and "a",
which remained unchanged. The solution reverses the array
in place without creating another array.