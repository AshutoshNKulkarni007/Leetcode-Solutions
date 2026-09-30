
## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I used a frequency array of 26 elements to count lowercase
English letters. I incremented the counts for the first string
and decremented them for the second string. If all counts are
zero, the strings are anagrams.

### Complexity

- Time: O(n)
- Auxiliary space: O(1)

### Notes

Tested anagrams, non-anagrams, strings of different lengths,
and another anagram pair. The solution uses a fixed-size
frequency array and does not sort either string.