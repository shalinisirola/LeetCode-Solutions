# **11. Container With Most Water**

**Difficulty:** Medium  
**LeetCode Link:** https://leetcode.com/problems/container-with-most-water/

---

## 📝 **Problem Description**

You are given an integer array `height` of length `n`.  
There are `n` vertical lines such that the two endpoints of the `i`-th line are:

- `(i, 0)`
- `(i, height[i])`

Find two lines that together with the x-axis form a container such that the container holds the **maximum amount of water**.

Return the **maximum water** a container can store.

**Note:** The container must remain vertical — slanting is not allowed.

---

## 📌 **Example 1**

![Container With Most Water](/mnt/data/931c5d60-f680-413e-96e3-72c18f9dd9d5.png)

**Input:**  
`height = [1,8,6,2,5,4,8,3,7]`

**Output:**  
`49`

**Explanation:**  
The lines represented by the array form different container widths/heights.  
The maximum possible water area is **49**.

---

## 📌 **Example 2**

**Input:**  
`height = [1,1]`

**Output:**  
`1`

---

## 🔒 **Constraints**

- `n == height.length`  
- `2 <= n <= 10^5`  
- `0 <= height[i] <= 10^4`
