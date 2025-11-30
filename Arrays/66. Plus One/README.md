# **66. Plus One**

**Difficulty:** Easy  
**LeetCode Link:** https://leetcode.com/problems/plus-one/

---

## 📝 **Problem Description**

You are given a large integer represented as an integer array `digits`, where each `digits[i]` is the *i-th digit* of the integer.  
The digits are ordered from **most significant to least significant** (left to right).

The array does **not** contain any leading zeros.

Increment the large integer by **one** and return the resulting array of digits.

---

## 📌 **Example 1**

**Input:**  
`digits = [1,2,3]`

**Output:**  
`[1,2,4]`

**Explanation:**  
The array represents the integer `123`.  
After incrementing by one: `123 + 1 = 124`.

---

## 📌 **Example 2**

**Input:**  
`digits = [4,3,2,1]`

**Output:**  
`[4,3,2,2]`

**Explanation:**  
The array represents the integer `4321`.  
After incrementing by one: `4321 + 1 = 4322`.

---

## 📌 **Example 3**

**Input:**  
`digits = [9]`

**Output:**  
`[1,0]`

**Explanation:**  
The array represents the integer `9`.  
After incrementing by one: `9 + 1 = 10`.

---

## 🔒 **Constraints**

- `1 <= digits.length <= 100`  
- `0 <= digits[i] <= 9`  
- `digits` does **not** contain any leading zeros
