
# **68. Text Justification**

**Difficulty:** Hard  
**LeetCode Link:** https://leetcode.com/problems/text-justification/

---

## 📝 **Problem Description**

Given an array of strings `words` and a width `maxWidth`, format the text such that each line has exactly `maxWidth` characters and is **fully justified** (both left and right).

You should pack the words using a **greedy** approach:  
- Put as many words as possible in each line.  
- Pad extra spaces `' '` when necessary so that each line has exactly `maxWidth` characters.

Extra spaces between words should be distributed **as evenly as possible**.  
If the number of spaces on a line does not divide evenly between words, the **leftmost** slots get more spaces than the right ones.

For the **last line** of text:
- It should be **left-justified**.
- No extra spaces should be inserted between words (only trailing spaces at the end to reach `maxWidth`).

### Note

- A word is a sequence of **non-space characters** only.  
- Each word's length is guaranteed to be > 0 and ≤ `maxWidth`.  
- The input array `words` contains **at least one word**.

---

## 📌 **Example 1**

**Input:**  
`words = ["This", "is", "an", "example", "of", "text", "justification."]`, `maxWidth = 16`

**Output:**
```text
[
   "This    is    an",
   "example  of text",
   "justification.  "
]
```

---

## 📌 **Example 2**

**Input:**  
`words = ["What","must","be","acknowledgment","shall","be"]`, `maxWidth = 16`

**Output:**
```text
[
  "What   must   be",
  "acknowledgment  ",
  "shall be        "
]
```

**Explanation:**  
- The last line is `"shall be        "` instead of `"shall     be"` because the last line must be **left-justified**, not fully justified.  
- The second line is also left-justified because it contains only **one word**.

---

## 📌 **Example 3**

**Input:**  
`words = ["Science","is","what","we","understand","well","enough","to","explain","to","a","computer.","Art","is","everything","else","we","do"]`, `maxWidth = 20`

**Output:**
```text
[
  "Science  is  what we",
  "understand      well",
  "enough to explain to",
  "a  computer.  Art is",
  "everything  else  we",
  "do                  "
]
```

---

## 🔒 **Constraints**

- `1 <= words.length <= 300`  
- `1 <= words[i].length <= 20`  
- `words[i]` consists of only English letters and symbols  
- `1 <= maxWidth <= 100`  
- `words[i].length <= maxWidth`
