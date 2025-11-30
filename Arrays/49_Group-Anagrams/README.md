# **49. Group Anagrams**

**Difficulty:** Medium  
**LeetCode Link:** https://leetcode.com/problems/group-anagrams/

---

## 📝 **Problem Description**

Given an array of strings `strs`, group the **anagrams** together.

You may return the answer in **any order**.

Two strings are anagrams if they can be rearranged to form each other.

---

## 📌 **Example 1**

**Input:**  
`strs = ["eat","tea","tan","ate","nat","bat"]`

**Output:**  
`[["bat"],["nat","tan"],["ate","eat","tea"]]`

**Explanation:**  
- `"bat"` has no other anagrams.  
- `"nat"` and `"tan"` are anagrams of each other.  
- `"ate"`, `"eat"`, and `"tea"` are anagrams of each other.

---

## 📌 **Example 2**

**Input:**  
`strs = [""]`

**Output:**  
`[[""]]`

---

## 📌 **Example 3**

**Input:**  
`strs = ["a"]`

**Output:**  
`[["a"]]`

---

## 🔒 **Constraints**

- `1 <= strs.length <= 10^4`  
- `0 <= strs[i].length <= 100`  
- `strs[i]` consists only of lowercase English letters
