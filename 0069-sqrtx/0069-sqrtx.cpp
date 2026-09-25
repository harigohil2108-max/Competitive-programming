class Solution {
public:
    int mySqrt(int n) {
         int l =0;
        int h = n;
      while(h >=l){
       long long mid = ((l+h)/2);
       if(mid*mid == n) return mid; 
        else if(mid*mid > n){
            h= (mid -1);
        }
        else {
            l = (mid +1);
        }
      }
        return h;
    }
};