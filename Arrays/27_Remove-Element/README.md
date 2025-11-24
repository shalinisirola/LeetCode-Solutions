# **27. Remove Element**

**Difficulty:** Easy  
**LeetCode Link:** https://leetcode.com/problems/remove-element/ 

---

## 📝 **Problem Description**

Given an integer array `nums` and an integer `val`, remove **all occurrences** of `val` from the array **in-place**.  
The order of the elements **may change**.

Return the number of elements in `nums` that are **not equal** to `val`.

Let this number be `k`. To get accepted, you must:

- Modify the array such that the **first `k` elements** contain the values **not equal** to `val`.  
- The remaining elements beyond index `k - 1` **do not matter**.

---

## 🧪 **Custom Judge **

The judge will test your solution using:

```java
int[] nums = [...];      // Input array
int val = ...;           // Value to remove
int[] expectedNums = [...];   // Sorted array with no occurrences of val

int k = removeElement(nums, val);  // Calls your implementation

assert k == expectedNums.length;
sort(nums, 0, k);        // Only the first k elements are sorted
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
```

If all assertions pass → ✔ **Your solution is accepted.**

---

## 📌 **Example 1**

**Input:**  
`nums = [3,2,2,3]`, `val = 3`

**Output:**  
`2, nums = [2,2,_,_]`

**Explanation:**  
Your function should return `k = 2`, with the first two elements equal to `2`.  
Values beyond index `k` do not matter.

---

## 📌 **Example 2**

**Input:**  
`nums = [0,1,2,2,3,0,4,2]`, `val = 2`

**Output:**  
`5, nums = [0,1,4,0,3,_,_,_]`

**Explanation:**  
Your function should return `k = 5`.  
The first five elements may appear in **any order**, as long as they do **not** include `val`.

---

## 🔒 **Constraints**

- `0 <= nums.length <= 100`  
- `0 <= nums[i] <= 50`  
- `0 <= val <= 100`
