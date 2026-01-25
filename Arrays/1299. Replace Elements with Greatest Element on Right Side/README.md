# **1299. Replace Elements with Greatest Element on Right Side**

**Difficulty:** Easy  
**LeetCode Link:** https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/

---

## 📝 **Problem Description**

Given an array `arr`, replace every element in the array with the **greatest element among the elements to its right**, and replace the **last element** with `-1`.

After doing so, return the array.

---

## 📌 **Example 1**

**Input:**  
`arr = [17,18,5,4,6,1]`

**Output:**  
`[18,6,6,6,1,-1]`

**Explanation:**  
- index `0` → the greatest element to the right is `18`  
- index `1` → the greatest element to the right is `6`  
- index `2` → the greatest element to the right is `6`  
- index `3` → the greatest element to the right is `6`  
- index `4` → the greatest element to the right is `1`  
- index `5` → there are no elements to the right, so we put `-1`

---

## 📌 **Example 2**

**Input:**  
`arr = [400]`

**Output:**  
`[-1]`

**Explanation:**  
There are no elements to the right of index `0`.

---

## 🔒 **Constraints**

- `1 <= arr.length <= 10^4`
- `1 <= arr[i] <= 10^5`
