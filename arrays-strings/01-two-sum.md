
## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

I used two nested loops to check pairs of elements.
If their sum equals the target, the function returns
the indices of those two elements.

### Complexity

- Time: O(n²)
- Auxiliary space: O(1), excluding the returned array.

### Notes

Tested with [2, 7, 11, 15], target 9, and [3, 3],
target 6. Both test cases returned the expected indices.