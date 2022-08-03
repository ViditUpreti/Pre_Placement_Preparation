class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int gmax=0;
        int cmax=0;
        int n =nums.size();
        cout<<n;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                cmax++;
            }
            else{
                if(cmax>gmax){
                    gmax=cmax;
                }
                cmax=0;
            }
        }
        if(cmax>gmax){
            gmax=cmax;
        }
        return gmax;
    }
};