# **15. 3Sum**

**Difficulty:** Medium  
**LeetCode Link:** https://leetcode.com/problems/3sum/

---

## 📝 **Problem Description**

Given an integer array `nums`, return all the **unique triplets** `[nums[i], nums[j], nums[k]]` such that:

- `i != j`,  
- `i != k`,  
- `j != k`,  
- and `nums[i] + nums[j] + nums[k] == 0`.

The solution set **must not contain duplicate triplets**.

---

## 📌 **Example 1**

**Input:**  
`nums = [-1,0,1,2,-1,-4]`

**Output:**  
`[[-1,-1,2], [-1,0,1]]`

**Explanation:**  
Valid triplets include:  
- `(-1) + 0 + 1 = 0`  
- `0 + 1 + (-1) = 0`  
- `(-1) + 2 + (-1) = 0`  

The **distinct** triplets are:  
- `[-1,-1,2]`  
- `[-1,0,1]`

Order of output and order inside each triplet does not matter.

---

## 📌 **Example 2**

**Input:**  
`nums = [0,1,1]`

**Output:**  
`[]`

**Explanation:**  
No triplet sums to zero.

---

## 📌 **Example 3**

**Input:**  
`nums = [0,0,0]`

**Output:**  
`[[0,0,0]]`

**Explanation:**  
The only triplet sums to zero.

---

## 🔒 **Constraints**

- `3 <= nums.length <= 3000`  
- `-10^5 <= nums[i] <= 10^5`
