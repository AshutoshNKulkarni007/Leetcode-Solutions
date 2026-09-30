
## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I used horizontal prefix comparison. I started with the first
string and compared its characters with each subsequent string.
The prefix length was reduced whenever the characters stopped
matching. If no characters matched, I returned an empty string.

### Complexity

- Time: O(n * m), where n is the number of strings and m is
  the maximum string length
- Auxiliary space: O(1) for a fixed-size output buffer

### Notes

Tested strings with a shared prefix, strings with no common
prefix, strings where one is a prefix of another, and a
single-string array.