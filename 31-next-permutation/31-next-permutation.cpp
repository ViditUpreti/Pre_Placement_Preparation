class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int ind1,ind2;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind1=i;
                break;
            }
        }
        if(ind1<0){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=n-1;i>ind1;i--){
            if(nums[i]>nums[ind1]){
                ind2=i;
                break;
            }
        }
        int t = nums[ind1];
        nums[ind1]=nums[ind2];
        nums[ind2]=t;
        reverse(nums.begin()+ind1+1,nums.end());
        return;
    }
};