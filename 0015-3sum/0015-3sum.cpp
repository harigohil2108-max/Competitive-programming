class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]== nums[i-1])continue;
            int target1=-nums[i];
            unordered_map<int,int> mp;

            for(int j=i+1;j<nums.size();j++){
                
                
                int need = target1 - nums[j];
                
                if(mp.find(need)!= mp.end()){
                    int k =mp[need];
                   ans.insert({nums[i],nums[j],nums[k]}); 
                }
                mp[nums[j]]=j;
                
            }
           
        } vector<vector<int>> finalans(ans.begin(),ans.end());
         return finalans;
    }
};