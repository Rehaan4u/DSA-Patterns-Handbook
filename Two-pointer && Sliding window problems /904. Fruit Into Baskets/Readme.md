# [904. Fruit Into Baskets](https://leetcode.com/problems/fruit-into-baskets/description/)

## 📝 Problem Statement (In Simple Words)

So basically, we are allowed to pick any two type of fruits, referred as number here, and we have to return then maximum subarray possible having only 2 type of numbers.   

---

## 🚫 Failed Approaches & Pitfalls

So basically, this is the most basic 2 pointer method problem, with using map, to ensure that we store only 2 elements in our subarray, but the only pitfall, 
was in using the map so when you store elements in map and if there value gets to zero like for the map of type  <int, int>, if let's say there was a value stored as <2,1> and 
then it reduces to <2,0>, the  element is still the and will increase the size of the map, whereas theoratically it means, the value is not there in the subarray.

---

## 💡 Key Observation & Optimal Approach

So it's a normal two pointer problem, where you keep moving your 'r' pointer and keep storing the elements, and you store count instead of indexes, and you ensure that the size of 
map is within the range and and you ensure that you count the maxlen, only if the subarray obeys the condition, 

and the optimization here is the same, using if instead of while for shrinking the subarray, instead of reducing the size of subarray, we keep the size of the subarray to the last 
maxlen, and maintain it by moving both l and r and removing the element using the s[l]--, and only increase it if the mpp.size()>=2

---

## 📸 Visual Handwritten Notes
![Handwritten Notes Scan] **NOT REQUIRED**

---

## ⚡ Complexity Analysis
- **Time Complexity:** $\mathcal{O}(N)$ — Single pass through the string of length $N$.
- **Space Complexity:** $\mathcal{O}(N)$ — Because we are storing the numebrs in the map.

---


