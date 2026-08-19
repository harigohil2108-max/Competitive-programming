class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int right =1;
        int left=0;
        int i=0;
        while(i+1 < nums.size() && nums[i+1] >nums[i] ){
            right++;
            i++;
        }
        if(target >=nums[left]&& target <=nums[right-1]){
            
            int low = left;
            int high = right-1;
            
            while(high>=low){
                int mid = (low + high)/2;
                if(target > nums[mid]){
                    low= mid+1;
                }
                else if(target<nums[mid]){
                    high = mid-1;
                }
                else return mid;
            }    
        }
        else{
            int low = right;
            int high =nums.size()-1;
            
            while(high>=low){
                int mid = (low + high)/2;
                if(target>nums[mid]){
                    low=mid+1;
                }
                else if(target<nums[mid]){
                    high=mid-1;
                }
                else return mid;
            }    
        }
    return -1;
    }
};