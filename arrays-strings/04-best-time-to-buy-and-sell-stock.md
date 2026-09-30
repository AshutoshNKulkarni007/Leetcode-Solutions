
## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I used a single pass through the prices array. I maintained
the minimum price seen so far and the maximum profit found.
For each price, I updated the minimum price or calculated
the potential profit and updated the maximum profit.

### Complexity

- Time: O(n)
- Auxiliary space: O(1)

### Notes

Tested a profitable case, a decreasing price sequence,
a case where the best transaction occurs after an initial
price drop, and a single-element array. The solution
uses one traversal without checking every possible pair.