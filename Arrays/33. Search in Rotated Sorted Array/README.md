# **33. Search in Rotated Sorted Array**

**Difficulty:** Medium  
**LeetCode Link:** https://leetcode.com/problems/search-in-rotated-sorted-array/

---

## 📝 **Problem Description**

You are given an integer array `nums` that was originally sorted in **ascending order** with **distinct values**.

Before being passed to your function, the array may have been **rotated** at an unknown index `k` (`1 <= k < nums.length`), resulting in an array of the form:

```
[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]
```

For example:  
`[0,1,2,4,5,6,7]` rotated by `k = 3` becomes  
`[4,5,6,7,0,1,2]`.

Given the rotated array `nums` and an integer `target`, return the **index of `target`** if it exists in `nums`, otherwise return `-1`.

You must write an algorithm with **O(log n)** runtime complexity.

---

## 📌 **Example 1**

**Input:**  
`nums = [4,5,6,7,0,1,2]`, `target = 0`

**Output:**  
`4`

---

## 📌 **Example 2**

**Input:**  
`nums = [4,5,6,7,0,1,2]`, `target = 3`

**Output:**  
`-1`

---

## 📌 **Example 3**

**Input:**  
`nums = [1]`, `target = 0`

**Output:**  
`-1`

---

## 🔒 **Constraints**

- `1 <= nums.length <= 5000`  
- `-10^4 <= nums[i] <= 10^4`  
- All values in `nums` are **unique**  
- `nums` is an ascending array that may have been rotated  
- `-10^4 <= target <= 10^4`
