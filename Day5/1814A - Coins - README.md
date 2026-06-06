# A. Coins

## Problem Description

In Berland, there are two types of coins, having denominations of 2 and k burles.

Your task is to determine whether it is possible to represent a given amount n burles using these coins.  
In other words, check if there exist non-negative integers x and y such that:

2·x + k·y = n

---

## Input

- The first line contains an integer t (1 ≤ t ≤ 10^4) — number of test cases.
- Each test case contains a single line with two integers n and k  
  (1 ≤ k ≤ n ≤ 10^18, k ≠ 2).

---

## Output

For each test case, print:
- "YES" if it is possible to represent n using the coins.
- "NO" otherwise.

You can print the answer in any case (YES, yes, Yes, etc.).

---

## Example

### Input
4
5 3
6 1
7 4
8 8

### Output
YES
YES
NO
YES

---

## Note

- You can use any number of coins of each type (including zero).
- The goal is to exactly match the value n.
