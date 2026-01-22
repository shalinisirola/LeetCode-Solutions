# **216. Combination Sum III**

**Difficulty:** Medium  
**LeetCode Link:** https://leetcode.com/problems/combination-sum-iii/

---

## 📝 **Problem Description**

Find all valid combinations of `k` numbers that sum up to `n` such that the following conditions are true:

- Only numbers from `1` to `9` are used
- Each number is used **at most once**
- The list must not contain duplicate combinations
- The combinations may be returned in **any order**

Return a list of all possible valid combinations.

---

## 📌 **Example 1**

**Input:**  
`k = 3, n = 7`

**Output:**  
`[[1,2,4]]`

**Explanation:**  
`1 + 2 + 4 = 7`  
There are no other valid combinations.

---

## 📌 **Example 2**

**Input:**  
`k = 3, n = 9`

**Output:**  
`[[1,2,6],[1,3,5],[2,3,4]]`

**Explanation:**  
`1 + 2 + 6 = 9`  
`1 + 3 + 5 = 9`  
`2 + 3 + 4 = 9`  
There are no other valid combinations.

---

## 📌 **Example 3**

**Input:**  
`k = 4, n = 1`

**Output:**  
`[]`

**Explanation:**  
There are no valid combinations.  
Using 4 different numbers in the range `[1,9]`, the smallest possible sum is  
`1 + 2 + 3 + 4 = 10`, and since `10 > 1`, no valid combination exists.

---

## 🔒 **Constraints**

- `2 <= k <= 9`
- `1 <= n <= 60`
