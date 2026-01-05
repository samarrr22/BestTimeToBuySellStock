# Best Time to Buy and Sell Stock

## Problem
You are given an array of daily stock prices. You must determine the maximum profit you can achieve by choosing one day to buy and one later day to sell.  
LeetCode Reference: [121. Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

## Real-life use case
This algorithm can help traders or financial apps analyze historical stock data to suggest the best buying and selling points for maximizing profit.

## Approach
- Keep track of the **minimum price** seen so far.
- For each price, calculate potential profit (`price - minPrice`).
- Update **maximum profit** whenever a higher profit is found.

## Time and Space Complexity
- **Time:** O(n) — single pass through the array  
- **Space:** O(1) — only two variables used

## How to compile and run the tests
```bash
gcc -Iinclude src/max_profit.c tests/test_max_profit.c -o test_max_profit
./test_max_profit

