class Solution {
public:
    int trap(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
       int water=0;
       int leftmax=0;
        int rightmax=0;
       while(l<r){
            if(height[l] <height[r]){
                leftmax=max(leftmax,height[l]);
                water+= leftmax - height[l];
                l++;
            }else{

                    rightmax=max(rightmax,height[r]);
                    water += rightmax - height[r];
                    r--;
           }   
        } 
       return water;
    }
};
//i=0> leftmax=4,r=5 w=4-4=0
//i=1 w=2
//i=2 w=4
// i=3 w= 1
// i=4 w=2
// i=5 w= 0