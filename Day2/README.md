
# 🚶‍♂️ Following Directions

## 🧩 Problem Description

Alperen is standing at the point **(0, 0)** on a 2D grid.

He is given a string `s` of length `n`, where each character represents a move:

* `L` → move one unit left
* `R` → move one unit right
* `U` → move one unit up
* `D` → move one unit down

Alperen performs all moves starting from `(0, 0)`.

---

## 🍬 The Goal

There is a candy placed at position **(1, 1)**.

Your task is to determine whether Alperen **ever passes through the candy’s position** during his movement.

⚠️ Important:

* It is **not necessary** for Alperen to end at `(1, 1)`
* He only needs to visit it at any point during the path

---

## 📥 Input

* The first line contains an integer `t` — number of test cases
* For each test case:

  * An integer `n` — length of the string
  * A string `s` consisting of characters `L`, `R`, `U`, `D`

---

## 📤 Output

For each test case, print:

* `"YES"` if Alperen passes through `(1, 1)`
* `"NO"` otherwise

(Answer is case-insensitive)

---

## 💡 Example

### Input

```
7
7
UUURDDL
2
UR
8
RRRUUDDD
3
LLL
4
DUUR
5
RUDLL
11
LLLLDDRUDRD
```

### Output

```
YES
YES
NO
NO
YES
YES
NO
```

---

## 🧠 Key Idea

Simulate the movement step by step and track the current position `(x, y)`.

If at any moment:

```
x == 1 && y == 1
```

then the answer is **YES**.

---

## 🚀 Author

Solving competitive programming problems step by step 💻
