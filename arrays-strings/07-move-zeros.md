
## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

I used an index called position to track where the next
non-zero element should be placed. I traversed the array,
copied each non-zero element to the front, and then filled
the remaining positions with zeroes.

The array is modified in place, and the relative order
of non-zero elements is preserved.

### Complexity

- Time: O(n)
- Auxiliary space: O(1)

### Notes

Tested an array with mixed zeroes and non-zeroes, an array
with leading zeroes, an array without zeroes, and an array
containing only zeroes.