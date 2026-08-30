# 1248.Count Number of Nice Subarrays(https://leetcode.com/problems/count-number-of-nice-subarrays/description/)

## 📝 Problem Statement (In Simple Words)

So basically we have to return subarrays, that contains exactly k number of odd numbers in it. 

---

## 🚫 Failed Approaches & Pitfalls

It's hard to decide when to move the left pointer. When you need to return subarrays that occur exactly K times, the standard 2-pointer approach works for counting subarrays that have something occurring <= K times, but not for exactly K times. We use a different approach.

---

## 💡 Key Observation & Optimal Approach

So basically we calculate the subarrays fro condition <=k times and subtract the subarrays for the condition <=k-1 times and that leaves us with, subarrays that has something occuring
exactly k times.

---

## 📸 Visual Handwritten Notes
![Handwritten Notes Scan](https://github.com/Rehaan4u/DSA-Patterns-Handbook/blob/e8878022d639f531a4fe275f0dfecaf26130b053/IMG_9505.jpeg)

---

## ⚡ Complexity Analysis
- **Time Complexity:** $\mathcal{O}(N)$ — Single pass through the string of length $N$.
- **Space Complexity:** $\mathcal{O}(1)$ — Fixed array of size 3 to track indices.

---


