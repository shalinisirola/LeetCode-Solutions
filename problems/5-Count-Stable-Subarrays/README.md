# **5. Count Stable Subarrays**
**Difficulty:** Hard  
**Points:** 6 pt  

---

## 📝 **Problem Description**

You are given an integer array `nums`.

A subarray of `nums` is called **stable** if it contains **no inversions**, i.e., there is no pair of indices `i < j` such that `nums[i] > nums[j]`.

You are also given a 2D integer array `queries` of length `q`, where each `queries[i] = [li, ri]` represents a query. For each query `[li, ri]`, compute the number of stable subarrays that lie entirely within the segment `nums[li..ri]`.

Return an integer array `ans` of length `q`, where `ans[i]` is the answer to the `i`th query.

**Note:** A single-element subarray is considered stable.

---

## 📌 **Example 1**

**Input:**  
`nums = [3, 1, 2]`, `queries = [[0,1],[1,2],[0,2]]`

**Output:**  
`[2, 3, 4]`

**Explanation:**  
- For `[0,1]`: subarray `[3,1]`. Stable subarrays: `[3]`, `[1]` → total `2`.  
- For `[1,2]`: subarray `[1,2]`. Stable subarrays: `[1]`, `[2]`, `[1,2]` → total `3`.  
- For `[0,2]`: subarray `[3,1,2]`. Stable subarrays: `[3]`, `[1]`, `[2]`, `[1,2]` → total `4`.

---

## 📌 **Example 2**

**Input:**  
`nums = [2, 2]`, `queries = [[0,1],[0,0]]`

**Output:**  
`[3, 1]`

**Explanation:**  
- For `[0,1]`: subarray `[2,2]`. Stable subarrays: `[2]`, `[2]`, `[2,2]` → total `3`.  
- For `[0,0]`: subarray `[2]`. Stable subarray: `[2]` → total `1`.

---

## 🔒 **Constraints**

- `1 <= nums.length <= 10^5`  
- `1 <= nums[i] <= 10^5`  
- `1 <= queries.length <= 10^5`  
- `queries[i] = [li, ri]`  
- `0 <= li <= ri <= nums.length - 1`
