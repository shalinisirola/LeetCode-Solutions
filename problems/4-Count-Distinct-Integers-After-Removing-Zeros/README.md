# **4. Count Distinct Integers After Removing Zeros**
**Difficulty:** Medium  
**Points:** 5 pt  

---

## 📝 **Problem Description**

You are given a positive integer `n`.

For every integer `x` from `1` to `n`, we write down the integer obtained by **removing all zeros** from the decimal representation of `x`.

Return the number of **distinct integers** written down.

---

## 📌 **Example 1**

**Input:**  
`n = 10`

**Output:**  
`9`

**Explanation:**  
The transformed integers are:  
`1, 2, 3, 4, 5, 6, 7, 8, 9, 1`  
Distinct values = **9**.

---

## 📌 **Example 2**

**Input:**  
`n = 3`

**Output:**  
`3`

**Explanation:**  
The transformed integers are:  
`1, 2, 3`  
Distinct values = **3**.

---

## 🔒 **Constraints**

- `1 <= n <= 10^15`
