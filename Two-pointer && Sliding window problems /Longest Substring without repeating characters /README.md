# 3. Longest Substring Without Repeating Characters (https://leetcode.com/problems/longest-substring-without-repeating-characters/description/)

## 📝 Problem Statement (In Simple Words)
WE have to return the maximum length of substring that contains non-repeating characters

---

## 🚫 Failed Approaches & Pitfalls
- ** Wrong way of checking the element in map** -- I was using this way (mpp[s[r]) to check whether the element is present in map or not, but in C++, especially in unordered_map, 
    when a character is not present in the map, the unordered_map, by default, sets its value to 0, which can be wrongly considered as index 0, and can fail the condition
    of checking whether the character is present in map or not, therefore it is a must to use mpp.find(s[r]).
---

## 💡 Key Observation & Optimal Approach
WE use the two pointer approach, and to know, whether the element is already present or not, we use a map, as we store the index of the of the characters we have observed, using the
(r) right pointer, and use the condition to check mpp.find(mpp[s[r]) to check whether the elements has been seen or not, also very important observation to decide the position of 
pointer " l ", we use this formuala, l=max(l,mpp[s[r]]+1), this ensure that if the current window does not have any repeating character, but in map, if we have already seen any of 
the character, instead of moving the l pointer behind we keep it at the current position

** EDGE CASE ** - there would be a case when you current window wouldn't have any repeating character but your map would had, already seen the current character and would tell you 
to put your l pointer at one index ahead, from that previous seen character, but your l would be way ahead, and shifting back would cause wrong answers

---

## 📸 Visual Handwritten Notes
![Handwritten Notes Scan](https://github.com/Rehaan4u/DSA-Patterns-Handbook/blob/bc7f0be9da270945115e65ee5889487401900b0d/IMG_9499.jpeg)

---

## ⚡ Complexity Analysis
- **Time Complexity:** $\mathcal{O}(N)$ — Single pass through the string of length $N$.
- **Space Complexity:** $\mathcal{O}(N)$ — Fixed array of size 3 to track indices.

---

