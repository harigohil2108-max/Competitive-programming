class Solution {
public:
    int singleNonDuplicate(vector<int>& nums){
        
        int l = 0, r = nums.size() - 1;

        while (l < r) {
            int m = l + (r - l) / 2;

            // Make m even
            if (m % 2 == 1)
                m--;

            if (nums[m] == nums[m + 1]) {
                // Pair is correct, so single is to the right
                l = m + 2;
            } 
            else {
                // Pair is broken, so single is at m or to the left
                r = m;
            }
        }

        return nums[l];
    }
};