class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int k=2;
        int l=0,r=0,maxlen=0,n=fruits.size();
        map<int,int>mpp;

        while(r<n)
        {
            mpp[fruits[r]]++;
            if(mpp.size()>k){
                mpp[fruits[l]]--;
                //VEry important to remove the value having 0 count from the map
                //as they just increase the size of map
                if(mpp[fruits[l]]==0)mpp.erase(fruits[l]);
                l++;
            }
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};
/*
       [1,1,1,2,1,3,3,1,2]

    here the updated version is which is also very common upgrade in every 
    two pointer problem is that, instead of shrinking down the window 
    beloe the maxlen, we keep the window size same but put a condition that
    checks whether the current window is valid or not

    basically the inner while loop for shrinking the window
    is replaced with if 
*/
