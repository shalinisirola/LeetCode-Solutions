# **26. Remove Duplicates from Sorted Array**

**Difficulty:** Easy  
**LeetCode Link:** https://leetcode.com/problems/remove-duplicates-from-sorted-array/  

---

## 📝 **Problem Description**

Given an integer array `nums` sorted in **non-decreasing** order, remove the duplicates **in-place** such that each unique element appears **only once**.  
The **relative order** of the elements must remain the same.

Let the number of unique elements be `k`.  
After removing duplicates, return the value `k`.

- The **first `k` elements** of `nums` should store the unique elements in sorted order.  
- The remaining elements beyond index `k - 1` **can be ignored**.

---

## 🧪 **Custom Judge**

The judge will test your solution using:

```java
int[] nums = [...];           // Input array
int[] expectedNums = [...];   // Expected correct array (unique elements only)

int k = removeDuplicates(nums);

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
```

If all assertions pass → ✔ **Your solution is accepted.**

---

## 📌 **Example 1**

**Input:**  
`nums = [1,1,2]`

**Output:**  
`2, nums = [1,2,_]`

**Explanation:**  
The function should return `k = 2`.  
The first two positions of `nums` should be: `1` and `2`.  
Values beyond index `k` do not matter.

---

## 📌 **Example 2**

**Input:**  
`nums = [0,0,1,1,1,2,2,3,3,4]`

**Output:**  
`5, nums = [0,1,2,3,4,_,_,_,_,_]`

**Explanation:**  
The function should return `k = 5`, with unique elements `0, 1, 2, 3, 4` stored in the first 5 indices.

---

## 🔒 **Constraints**

- `1 <= nums.length <= 3 * 10^4`  
- `-100 <= nums[i] <= 100`  
- `nums` is **sorted in non-decreasing order**
