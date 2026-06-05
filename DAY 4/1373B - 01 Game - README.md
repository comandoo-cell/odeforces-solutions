# B. 01 Game

## Problem Statement

Alica and Bob are playing a game.

Initially they have a binary string **s** consisting of only characters `0` and `1`.

Alice and Bob make alternating moves: Alice makes the first move, Bob makes the second move, Alice makes the third one, and so on.

During each move, the current player must choose two **different adjacent characters** of string `s` and delete them.

For example, if `s = 1011001`, then the following moves are possible:

* delete `s1` and `s2`: `1011001 → 11001`
* delete `s2` and `s3`: `1011001 → 11001`
* delete `s4` and `s5`: `1011001 → 10101`
* delete `s6` and `s7`: `1011001 → 10110`

If a player can't make any move, they lose.

Both players play optimally.

---

## Input

* The first line contains an integer **t** (1 ≤ t ≤ 1000) — the number of test cases.
* Each test case consists of a single line containing a binary string **s** (1 ≤ |s| ≤ 100), consisting only of characters `0` and `1`.

---

## Output

For each test case, output the result in a single line:

* Print `DA` if Alice can win.
* Otherwise print `NET`.

You may print the answer in any case (uppercase or lowercase).

---

## Example

### Input

```
3
01
1111
0011
```

### Output

```
DA
NET
NET
```

---

## Note

* In the first test case, Alice can remove the whole string in one move, so Bob cannot play.
* In the second test case, Alice has no valid move initially.
* In the third test case, after optimal play Alice eventually loses.
