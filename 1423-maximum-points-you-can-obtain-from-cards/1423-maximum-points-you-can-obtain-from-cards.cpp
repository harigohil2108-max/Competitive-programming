class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        int maxsum=0;
        int m=k;
        int n = cardPoints.size();
        for(int i=0;i< k ;i++){
            sum+= cardPoints[i];
        }
        maxsum=max(sum,maxsum);
        while(m>0){
            
            sum = sum - cardPoints[m-1];
            sum = sum + cardPoints[n-1];
            n--;
            m--;
            maxsum=max(sum,maxsum);
        }
        return maxsum;
    }
};