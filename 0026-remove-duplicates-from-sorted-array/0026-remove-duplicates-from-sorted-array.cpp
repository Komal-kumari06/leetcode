class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=left+1;
        int k=1;
        while(right<n){
            if(nums[left]==nums[right]){
                right++;
            }
            else if(nums[left]!=nums[right]){
                nums[left+1]=nums[right];
                k+=1;
                left++;
                right++;
                
            }
        
        }
    return k;
    }
};