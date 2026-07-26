class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=0;
        int sum=0;
        int res=INT_MAX;
        /*while(high<n){
            sum=sum+nums[high];
            while(sum>=target){
                int len=high-low+1;
                result=min(result,len);
                sum=sum-nums[low];
                low++;

            }
            high++;

        }
    if(result==INT_MAX){
        return 0;
    }
    else{
        return result;
    }*/
    for(int high=0; high<n; high++){
        sum+=nums[high];
        while(sum>=target){
            int len=high-low+1;
            res=min(res,len);
            sum-=nums[low];
            low++;
        }

    }
    if(res==INT_MAX){
        return 0;
    }
    else{
    return res;  
    }
    }
};
