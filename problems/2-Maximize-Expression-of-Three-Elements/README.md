# **2. Maximize Expression of Three Elements**
**Difficulty:** Easy  
**Points:** 3 pt  

---

## 📝 **Problem Description**

You are given an integer array `nums`.

Choose three elements `a`, `b`, and `c` from `nums` at **distinct indices** such that the expression:

```
a + b - c
```

is maximized.

Return an integer denoting the **maximum possible value** of this expression.

---

## 📌 **Example 1**

**Input:**  
`nums = [1, 4, 2, 5]`

**Output:**  
`8`

**Explanation:**  
Choose:  
- `a = 4`  
- `b = 5`  
- `c = 1`  

Expression value:  
`4 + 5 - 1 = 8` → maximum possible.

---

## 📌 **Example 2**

**Input:**  
`nums = [-2, 0, 5, -2, 4]`

**Output:**  
`11`

**Explanation:**  
Choose:  
- `a = 5`  
- `b = 4`  
- `c = -2`  

Expression value:  
`5 + 4 - (-2) = 11` → maximum possible.

---

## 🔒 **Constraints**

- `3 <= nums.length <= 100`  
- `-100 <= nums[i] <= 100`
