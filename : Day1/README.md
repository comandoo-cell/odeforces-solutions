A. Ambitious Kid

Time limit per test: 1 second  
Memory limit per test: 256 megabytes  

---

Problem Statement:

Chaneka, Pak Chanek's child, is an ambitious kid, so Pak Chanek gives her the following problem to test her ambition.

Given an array of integers:
A1, A2, A3, ..., AN

In one operation, Chaneka can choose one element and either increase or decrease its value by 1.
She can perform this operation multiple times on different elements.

---

Task:
Find the minimum number of operations required to make:

A1 × A2 × A3 × ... × AN = 0

---

Input:
- The first line contains a single integer N (1 ≤ N ≤ 10^5)
- The second line contains N integers:
  A1, A2, A3, ..., AN
  (-10^5 ≤ Ai ≤ 10^5)

---

Output:
Print a single integer representing the minimum number of operations needed.

---

Examples:

Input:
3
2 -6 5

Output:
2

---

Input:
1
-3

Output:
3

---

Input:
5
0 -1 0 1 0

Output:
0

---

Note:
In the first example:
2 × (-6) × 5 = -60

We can:
- Decrease A1 by 1 → 1
- Decrease A1 by 1 → 0

So the product becomes 0.

In the third example, the product is already 0 because there are zeros in the array, so no operations are needed.