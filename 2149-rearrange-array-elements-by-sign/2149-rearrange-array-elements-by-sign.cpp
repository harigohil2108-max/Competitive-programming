class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int j =0;
        int k = 1;
        int n = nums.size();
        vector <int> news(n);
        for (int i = 0; i< n ;i++){
            if(nums[i]>0){
                news[j]=nums[i];
                j = j+2;
            }else{
                news[k]= nums[i];
                k=k+2;
            }
        }
        return news;
    }
};