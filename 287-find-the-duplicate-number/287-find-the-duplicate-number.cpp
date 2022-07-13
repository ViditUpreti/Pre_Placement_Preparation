class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n =nums.size();
        vector<int>q(n+1);
        for(int i =0;i<n;i++){
            q[nums[i]]++;
            if(q[nums[i]]>1){
                return nums[i];
            }
        }
        return 0;
    }
};