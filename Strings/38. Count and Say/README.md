# **38. Count and Say**

**Difficulty:** Medium  
**LeetCode Link:** https://leetcode.com/problems/count-and-say/

---

## 📝 **Problem Description**

The **count-and-say sequence** is a sequence of digit strings defined by the recursive formula:

- `countAndSay(1) = "1"`
- `countAndSay(n)` is the **run-length encoding (RLE)** of `countAndSay(n - 1)`

**Run-length encoding (RLE)** is a string compression method that works by replacing consecutive identical characters with the concatenation of the character and the number marking the count of the characters.

For example, to compress the string `"3322251"`:
- Replace `"33"` with `"23"`
- Replace `"222"` with `"32"`
- Replace `"5"` with `"15"`
- Replace `"1"` with `"11"`

Thus, the compressed string becomes `"23321511"`.

Given a positive integer `n`, return the **nth element** of the count-and-say sequence.

---

## 📌 **Example 1**

**Input:**  
`n = 4`

**Output:**  
`"1211"`

**Explanation:**

- `countAndSay(1) = "1"`
- `countAndSay(2) = RLE of "1" = "11"`
- `countAndSay(3) = RLE of "11" = "21"`
- `countAndSay(4) = RLE of "21" = "1211"`

---

## 📌 **Example 2**

**Input:**  
`n = 1`

**Output:**  
`"1"`

**Explanation:**  
This is the base case.

---

## 🔒 **Constraints**

- `1 <= n <= 30`
