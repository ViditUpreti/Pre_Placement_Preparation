class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r=0,b=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                r++;
            }
            else if(nums[i]==1){
                b++;
            }
        }
        for(int i=0;i<nums.size();i++){
            while(r){
                nums[i]=0;
                r--;
                i++;
            }
            while(b){
                nums[i]=1;
                b--;
                i++;
            }
            if(i!=nums.size())
            nums[i]=2;
        }
    }
};