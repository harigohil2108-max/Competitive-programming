class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        bool k = 0;

        for (int i = 0; i < n - 1; i++) {

            // Find the first element from right
            // that is smaller than the element after it
            if (nums[n-i-2] < nums[n-i-1]) {

                int b = n-i-2;
                int c = n-1;

                // Find the smallest element greater than nums[b]
                while (nums[c] <= nums[b])
                    c--;

                swap(nums[b], nums[c]);

                // Reverse the suffix
                reverse(nums.begin() + b + 1, nums.end());

                k = 1;
                break;
            }
        }

        // Already the largest permutation
        if (k == 0)
            sort(nums.begin(), nums.end());
    }
};