class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum;
        sort(nums.begin(),nums.end());
        int closestsum=nums[0]+nums[1]+nums[2];
        int n=nums.size();
        for(int i=0; i<n-2; i++){
            int left=i+1;
            int right=n-1;
            while(left<right){
                sum=nums[i]+nums[left]+nums[right];
                if(abs(target-sum)<abs(target-closestsum)){
                    closestsum=sum;
                }
                if(sum<target){
                    left++;
                }
                else if(sum>target){
                    right--;
                }
                else{
                    return sum;
                }
            }
        }
    return closestsum;
    }
};