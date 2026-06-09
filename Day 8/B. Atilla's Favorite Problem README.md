Atilla's Favorite Problem
Problem Description

Atilla needs to write a message represented by a string s. Before writing it, he must first learn all the letters that appear in the string.

The English alphabet consists of 26 lowercase Latin letters from a to z.

An alphabet of size x contains only the first x letters of the alphabet:

size 1 contains: a
size 2 contains: a, b
size 3 contains: a, b, c
...
size 26 contains all letters
Task

Given a string s, determine the minimum size of the alphabet required so that Atilla can write the entire string.

In other words, find the smallest x such that all characters in s are included within the first x letters of the alphabet.

Input
The first line contains an integer t, the number of test cases.
For each test case:
An integer n, the length of the string.
A string s of length n consisting of lowercase English letters.
Output

For each test case, output a single integer representing the minimum alphabet size required.

Constraints
1 ≤ t ≤ 1000
1 ≤ n ≤ 100
s consists only of lowercase English letters
Hint

The answer depends on the largest letter (in alphabetical order) that appears in the string.
