class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,zero=0;
        int maxlen=0;
        int n =nums.size();
        while(n>r){
            if(nums[r]==0){
                zero++;
                if(zero>k){
                    while(zero > k){
                        
                        if(nums[l]==0){
                            zero--;
                        }
                        l++;
                    }
                }
            }
            int len = r-l+1;
            maxlen=max(maxlen,len);
            r++;
        }
        return maxlen;
    }
};