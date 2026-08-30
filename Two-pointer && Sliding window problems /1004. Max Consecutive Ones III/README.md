# [1004. Max Consecutive Ones III](https://leetcode.com/problems/max-consecutive-ones-iii/description/)

## 📝 Problem Statement (In Simple Words)
You have to return the maximum length of the subarray you can make consisting of only 1's, but the catch is you can convert any k number of 0's into 1.

---

## 🚫 Failed Approaches & Pitfalls

Normal 2 pointer approach, where you keep counting the max_length by moving your r pointer to the right, and when encounter 0 you reduce the value of K, but then you have to move
your l pointer, when you are out of your K's and for each iteration you have to check whether the current element where l is pointing is 0 or 1, and then update the value of K, it is time-consuming.

---

## 💡 Key Observation & Optimal Approach

Instead, what we do is keep a zeros variable, which stores the number of zeros you have encountered so far, and instead of shrinking the window, we keep the condition check, if
zeros>k, then we do not take this new length of this window and normally move the window with moving both r and l pointer, and checking if s[l]==0, that means we are dropping a zero, so we reduce the count of zeros.

But, very important, you first update the value of zeros after dropping the 0 if you encounter from s[l], and then check the condition of zeros>k, so in case we dropped the zero and 
are again back in the correct subarray, then we calculate the length.

---

## 📸 Visual Handwritten Notes
![Handwritten Notes Scan]: ** NOT REQUIRED **

---

## ⚡ Complexity Analysis
- **Time Complexity:** $\mathcal{O}(N)$ — Single pass through the string of length $N$.
- **Space Complexity:** $\mathcal{O}(1)$ — We are just storing the numebr of zeros discoverd.

---


