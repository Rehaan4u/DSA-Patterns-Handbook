# [1358. Number of Substrings Containing All Three Characters](https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/)

## 📝 Problem Statement (In Simple Words)
Given a string containing only the characters `'a'`, `'b'`, and `'c'`, find and return the total number of substrings (contiguous sequences) that contain at least one occurrence of all three characters.

---

## 🚫 Failed Approaches & Pitfalls
- **HashMap Alone:** Storing character counts in a hash map tracks current window frequencies, but it doesn't directly give a straightforward way to count *all valid ending substrings* without redundant checks.
- **Naïve Two-Pointer Shrinking:** Standard sliding window logic relies on shrinking `left` until the window becomes invalid, which makes counting total valid sub-intervals tricky and error-prone.

---

## 💡 Key Observation & Optimal Approach
Instead of expanding and shrinking a window manually, track the **last seen index** of each character (`a`, `b`, `c`).

1. Initialize an array/hash of size 3 with `-1` (e.g., `lastSeen = [-1, -1, -1]`).
2. Iterate through the string using a index pointer `i`. Update `lastSeen[char]` with `i`.
3. If all three characters have been seen at least once (i.e., `min(lastSeen) != -1`), then **every substring starting from index `0` up to `min(lastSeen)` and ending at `i` is valid**.
4. The number of valid substrings ending at index `i` is exactly $1 + \min(\text{lastSeen})$.

---

## 📸 Visual Handwritten Notes
![Handwritten Notes Scan](./)

---

## ⚡ Complexity Analysis
- **Time Complexity:** $\mathcal{O}(N)$ — Single pass through the string of length $N$.
- **Space Complexity:** $\mathcal{O}(1)$ — Fixed array of size 3 to track indices.

---

