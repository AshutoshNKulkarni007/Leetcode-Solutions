
## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

I used binary search on the sorted array. I maintained left
and right pointers and calculated the middle index. If the
middle element matched the target, I returned its index.
If it was smaller, I searched the right half; otherwise,
I searched the left half. I returned -1 if the target
was not found.

### Complexity

- Time: O(log n)
- Auxiliary space: O(1)

### Notes

Tested a target in the middle, a target that was absent,
a single-element array, and a target at the beginning.
Binary search requires a sorted array and eliminates
half the remaining search range at each iteration.