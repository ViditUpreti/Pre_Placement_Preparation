class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int>a;
        int n =nums.size();
        for(int i =0;i<n;i++){
            if(a[target-nums[i]]>0){
                return {(int)(find(nums.begin(),nums.end(),target-nums[i])-nums.begin()),i};
            }
            a[nums[i]]++;
        }
        return {0,0};
    }
};