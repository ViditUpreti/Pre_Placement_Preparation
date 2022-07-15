class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int x=nums[0];
        int p =1;
        for(int i =1;i<nums.size();i++){
            if(nums[i]==x){
                p++;
            }
            else{
                p--;
            }
            if(p==0){
                x=nums[i];
                p=1;
            }
        }
        return x;
    }
};