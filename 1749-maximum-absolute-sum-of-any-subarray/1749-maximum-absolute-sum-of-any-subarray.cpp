class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n= nums.size();
        int maxsum = nums[0];
        int minsum = nums[0];
        int ans = abs(nums[0]);
        for(int i=1; i<n; i++){
            maxsum = max(maxsum+nums[i], nums[i]);
            minsum = min(minsum + nums[i], nums[i]);
            int absolute = max(abs(maxsum),abs(minsum));
            ans = max(ans,absolute);
            
        }
    return ans;
    }
};