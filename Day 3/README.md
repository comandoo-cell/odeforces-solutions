🟦 Swap and Delete
📌 Problem Statement

You are given a binary string s (a string consisting only of 0 and 1).

You can perform two types of operations:

Delete a character from s
→ Cost = 1 coin
Swap any two characters in s
→ Cost = 0 coins (free operation)

You can perform any number of operations in any order.

🎯 Goal

After performing operations, you obtain a string t.

The string t is called good if:

t[i]

=s[i]for all 1≤i≤∣t∣
|t| is the length of t
The empty string is always considered good
t is compared with the original string s
❓ Task

For each test case, determine the minimum total cost required to make the resulting string t good.

📥 Input
The first line contains an integer T (1 ≤ T ≤ 10⁴), the number of test cases.
Each test case contains a single binary string s (1 ≤ |s| ≤ 2×10⁵).

Constraint:
The sum of lengths of all strings does not exceed 2×10⁵.

📤 Output

For each test case, print a single integer — the minimum cost to make t good.

💡 Key Idea

Since swapping is free, we can reorder the string arbitrarily.
The problem reduces to deciding how many characters must be deleted so that it becomes possible to build a string t where every position differs from s.

🧾 Solution Insight

Let:

cnt0 = number of 0s in s
cnt1 = number of 1s in s

Then the answer is:

answer=∣cnt0−cnt1∣
🧪 Example
Input
4
0
011
0101110001
111100
Output
1
1
0
4
🚀 Complexity
Time: O(n) per test case
Memory: O(1) extra space
