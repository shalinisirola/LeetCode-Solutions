# **55. Jump Game**

**Difficulty:** Medium  
**LeetCode Link:** https://leetcode.com/problems/jump-game/

---

## 📝 **Problem Description**

You are given an integer array `nums`. You are initially positioned at the array’s **first index**, and each element in the array represents your **maximum jump length** at that position.

Return `true` if you can reach the **last index**, or `false` otherwise.

---

## 📌 **Example 1**

**Input:**  
`nums = [2,3,1,1,4]`

**Output:**  
`true`

**Explanation:**  
Jump `1` step from index `0` to `1`, then jump `3` steps to reach the last index.

---

## 📌 **Example 2**

**Input:**  
`nums = [3,2,1,0,4]`

**Output:**  
`false`

**Explanation:**  
You will always arrive at index `3`.  
Its maximum jump length is `0`, making it impossible to reach the last index.

---

## 🔒 **Constraints**

- `1 <= nums.length <= 10^4`  
- `0 <= nums[i] <= 10^5`
