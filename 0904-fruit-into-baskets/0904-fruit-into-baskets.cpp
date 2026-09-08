class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0,r=0,maxlen=0,len=0;
        map<int,int> mpp;
        int k =2;//we can give any value to k as required
        while(r<fruits.size()){
            mpp[fruits[r]]++;
            if(mpp.size()>k){
                mpp[fruits[l]]--;
                if(mpp[fruits[l]]==0){
                    mpp.erase(fruits[l]);
                }
                l++;
            }
            else{
                maxlen=max(maxlen,r-l+1);
            }
            r++;
        } return maxlen;
    }
};