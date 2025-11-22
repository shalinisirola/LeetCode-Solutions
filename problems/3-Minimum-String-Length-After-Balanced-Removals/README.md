# **3. Minimum String Length After Balanced Removals**
**Difficulty:** Medium  
**Points:** 4 pt  

---

## 📝 **Problem Description**

You are given a string `s` consisting only of the characters `'a'` and `'b'`.

You are allowed to repeatedly remove **any substring** where the number of `'a'` characters is **equal** to the number of `'b'` characters.  
After each removal, the remaining parts of the string are concatenated together without gaps.

Return an integer denoting the **minimum possible length** of the string after performing any number of such operations.

---

## 📌 **Example 1**

**Input:**  
`s = "aabbab"`

**Output:**  
`0`

**Explanation:**  
The substring `"aabbab"` has three `'a'` and three `'b'`.  
Since the counts are equal, we can remove the **entire string**.  
Minimum length = **0**.

---

## 📌 **Example 2**

**Input:**  
`s = "aaaa"`

**Output:**  
`4`

**Explanation:**  
Every substring of `"aaaa"` contains only `'a'`.  
No substring has equal `'a'` and `'b'`, so **no removals** can be performed.  
Minimum length = **4**.

---

## 📌 **Example 3**

**Input:**  
`s = "aaabb"`

**Output:**  
`1`

**Explanation:**  
- Remove substring `"ab"` → string becomes `"aab"`  
- Remove substring `"ab"` again → string becomes `"a"`  
No further removals are possible.  
Minimum length = **1**.

---

## 🔒 **Constraints**

- `1 <= s.length <= 10^5`  
- `s[i]` is either `'a'` or `'b'`
