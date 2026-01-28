# **65. Valid Number**

**Difficulty:** Hard  
**LeetCode Link:** https://leetcode.com/problems/valid-number/

---

## 📝 **Problem Description**

Given a string `s`, return whether `s` is a **valid number**.

For example, all the following are valid numbers:  
`"2"`, `"0089"`, `"-0.1"`, `"+3.14"`, `"4."`, `"-.9"`, `"2e10"`, `"-90E3"`, `"3e+7"`, `"+6e-1"`, `"53.5e93"`, `"-123.456e789"`

The following are **not** valid numbers:  
`"abc"`, `"1a"`, `"1e"`, `"e3"`, `"99e2.5"`, `"--6"`, `"-+3"`, `"95a54e53"`

---

## 📘 **Formal Definition**

A valid number is defined using **one of the following definitions**:

1. **An integer number** followed by an optional exponent  
2. **A decimal number** followed by an optional exponent  

---

### **Integer Number**

An integer number is defined as:

1. An optional sign `'+'` or `'-'`
2. Followed by **one or more digits**

---

### **Decimal Number**

A decimal number is defined as:

1. An optional sign `'+'` or `'-'`
2. Followed by **one of the following**:
   1. Digits followed by a dot `'.'`
   2. Digits followed by a dot `'.'` followed by digits
   3. A dot `'.'` followed by digits

---

### **Exponent**

An exponent is defined as:

1. An exponent notation `'e'` or `'E'`
2. Followed by an **integer number**

---

### **Digits**

Digits are defined as:

1. One or more characters from `'0'` to `'9'`

---

## 📌 **Example 1**

**Input:**  
`s = "0"`

**Output:**  
`true`

---

## 📌 **Example 2**

**Input:**  
`s = "e"`

**Output:**  
`false`

---

## 📌 **Example 3**

**Input:**  
`s = "."`

**Output:**  
`false`

---

## 🔒 **Constraints**

- `1 <= s.length <= 20`
- `s` consists of only:
  - English letters (uppercase and lowercase)
  - Digits (`0-9`)
  - Plus `'+'`, minus `'-'`, or dot `'.'`
