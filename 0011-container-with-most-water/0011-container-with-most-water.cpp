class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r= height.size()-1;
        int Area=0;
        int ans=0;
        while(l<r){
            Area = (r-l)*min(height[l],height[r]);
            if(height[l] <= height[r]){
                //move l
            
                l++;
            }else{
                //move right
                
                r--;
            }
            ans= max(ans,Area);
            
        }
        return ans;
    }
};