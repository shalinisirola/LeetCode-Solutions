# **45. Jump Game II**

**Difficulty:** Medium  
**LeetCode Link:** https://leetcode.com/problems/jump-game-ii/

---

## 📝 **Problem Description**

You are given a 0-indexed array of integers `nums` of length `n`. You are initially positioned at index `0`.

Each element `nums[i]` represents the **maximum length of a forward jump** from index `i`.  
In other words, if you are at index `i`, you can jump to any index `i + j` where:

- `0 <= j <= nums[i]`, and  
- `i + j < n`

Return the **minimum number of jumps** required to reach index `n - 1`.

The test cases are generated such that it is always possible to reach index `n - 1`.

---

## 📌 **Example 1**

**Input:**  
`nums = [2,3,1,1,4]`

**Output:**  
`2`

**Explanation:**  
The minimum number of jumps to reach the last index is `2`.  
- Jump `1` step from index `0` to `1`  
- Then `3` steps from index `1` to `4`

---

## 📌 **Example 2**

**Input:**  
`nums = [2,3,0,1,4]`

**Output:**  
`2`

---

## 🔒 **Constraints**

- `1 <= nums.length <= 10^4`  
- `0 <= nums[i] <= 1000`  
- It is guaranteed that you can reach `nums[n - 1]`.
