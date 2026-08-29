/*
    Another important type of sliding window problem
    Here we keep storing the last seen
    and cnt=1+min(lastseen for a,b,c)
*/
class Solution {
public:
    int numberOfSubstrings(string s) {
        int arr[3]={-1,-1,-1};//here -1 indicates not seen all three yet
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            arr[s[i]-' a']=i;//Very important observation: the things (here a,b,c) are in consecutive 
            //Basically, we were able to mark them using an array as they are consecutive and satisfy the condition
            //s[i]-'a'
            if(arr[0]!=-1 && arr[1]!=-1 && arr[2]!=-1){
                count+=1+min(min(arr[0],arr[1]),arr[2]);
            }
        }
        return count;
    }
};
