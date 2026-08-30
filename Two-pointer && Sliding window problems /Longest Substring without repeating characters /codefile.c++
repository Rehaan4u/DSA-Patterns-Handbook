class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0, r=0, maxlen=0;
        int n=s.length();
        unordered_map<char,int>mpp;
        while(r<n)
        {
            //Alwyays use this way to check whether any character is present or not as
            /*
                In C++, an unordered_map defaults missing keys to 0. If a character is at index 0 (the very start of the string), mpp[s[r]] returns 0. Your condition if (mpp[s[r]]) treats 0 as false, skipping the update entirely. If it does find it later, l = mpp[s[r]] + 1 sets l to 0 + 1 = 1, which is correct, but the initial check fails. More dangerously, storing 0 looks exactly like "not found".
            */
            if(mpp.find(s[r])!=mpp.end())
            {
                //This prevents the l from jumping back if it finds a character that was beyond 
                //as compared to the current index where l is standing
                l=max(l,mpp[s[r]]+1);
            }
            mpp[s[r]]=r;
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};
