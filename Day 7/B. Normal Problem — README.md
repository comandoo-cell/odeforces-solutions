## 📘 B. Normal Problem — README

### 🧾 Problem Statement

A string is written on a store’s glass window using only the characters:

* `'p'`
* `'q'`
* `'w'`

A person named **Ship** observes this string in two different ways:

1. First, he stands **outside the store** and sees a string `a`.
2. Then he enters the store and looks at the same window again, seeing a different string `b`.

Your task is to determine what string `b` looks like, given the string `a`.

---

### 📥 Input

* The first line contains an integer `t`
  (1 ≤ t ≤ 100) — number of test cases.

* Each test case contains a single line with a string `a`
  (1 ≤ |a| ≤ 100)

* The string consists only of the characters:

  * `'p'`
  * `'q'`
  * `'w'`

---

### 📤 Output

For each test case, print the corresponding string `b` on a new line.

---

### 📌 Example

**Input**

```
5
qwq
ppppp
pppwwwqqq
wqpqwpqwwqp
pqpqpqpq
```

**Output**

```
pwp
qqqqq
pppwwwqqq
qpwwpqwpqpw
pqpqpqpq
```

---

### 💡 Notes

* Each test case is independent.
* The transformation from `a` to `b` depends on how the string appears from inside vs outside the glass.
* The task focuses on correctly interpreting this transformation.

---

إذا بدك، أقدر أكتب لك أيضًا **Hint REA
