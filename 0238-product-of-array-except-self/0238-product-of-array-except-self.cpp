class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     vector<int> ans(nums.size());
     int n= nums.size();
        int leftprod=1;
        int rightprod=1;
     for(int i=0;i<nums.size();i++){
        if(i==0){
            ans[i]=1;
        }else{
            leftprod*=nums[i-1];
            ans[i]=leftprod;
        }
     }   
     for(int i=0;i<nums.size();i++){
        if(i==0){
            ans[n-i-1]*=1;
        }else{
            rightprod*=nums[n-i];
            ans[n-i-1]*=rightprod;
        }
        
     }
     return ans;
    }
};