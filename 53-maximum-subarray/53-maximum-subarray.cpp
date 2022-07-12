class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int gmax=nums[0],max=nums[0];
        for(int i =1;i<nums.size();i++){
            if(max+nums[i]>0){
                if(max+nums[i]>nums[i]){
                    max=nums[i]+max;
                }
                else{
                max=nums[i];
                }
            }
            else{
                max=nums[i];
                }
            if(max>gmax){
                gmax=max;
            }
        }
        return gmax;
    }
};