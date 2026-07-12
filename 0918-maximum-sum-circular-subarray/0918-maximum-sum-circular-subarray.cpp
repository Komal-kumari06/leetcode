class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n= nums.size();
        int totalsum =0;
        for(int i=0; i<n; i++){
            totalsum+=nums[i];
        }
        int maxsum = nums[0];
        int currentmaxsum= nums[0];
        int minsum = nums[0];
        int currentminsum = nums[0];
        for(int i=1;i<n; i++){
            currentmaxsum = max(nums[i], currentmaxsum + nums[i]);
            maxsum = max(maxsum, currentmaxsum);
            
            currentminsum = min(nums[i], currentminsum + nums[i]);
            minsum = min(minsum, currentminsum);
        }
        if (maxsum < 0){
            return maxsum;
        }
        else{
            return(max(maxsum, totalsum-minsum));
        }
    
        
    }
};