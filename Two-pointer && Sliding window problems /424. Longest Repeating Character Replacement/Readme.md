# [424. Longest Repeating Character Replacement](https://leetcode.com/problems/longest-repeating-character-replacement/description/)

## 📝 Problem Statement (In Simple Words)

So basically, we are given a string of alphabets, and out of that we have to output the longest substring we can make, of consecutive same characters, as we are allowed to convert at most k alphabets.

---

## 🚫 Failed Approaches & Pitfalls

Simple 2-pointer approach won't work let's say there is a case for s="AABABBA", let's say for the part AAB , when pointer r points at B, then how will you decide whether to convert
2 A's or just convert the B.
---

## 💡 Key Observation & Optimal Approach

We need to keep track of the element occurring most frequently, and for any given subarray, we subtract the most frequently occurring element in the subarray and check whether the remaining elements are within the value of K, if yes we got our valid subarray, if not we keeep the max window size we got, and keep dropping elements from the map using l pointer.

---

## 📸 Visual Handwritten Notes
![Handwritten Notes Scan](https://github.com/Rehaan4u/DSA-Patterns-Handbook/blob/575eb3ff416cfda0aa7f1bcc9fe0bcab1ee5bbfb/IMG_9512.jpeg)

---

## ⚡ Complexity Analysis
- **Time Complexity:** $\mathcal{O}(N)$ — Single pass through the string of length $N$.
- **Space Complexity:** $\mathcal{O}(1)$ — We are using map, to store characters.

---


