class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n =nums.size();
        sort(nums.begin(),nums.end());
        for(int i =0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    while(j<n &&nums[j]==nums[j-1]){
                        j++;
                    }
                    k--;
                    while(k>0 && nums[k]==nums[k+1]){
                        k--;
                    }
                }
                else if (nums[i]+nums[j]+nums[k]>0){
                    k--;
                }
                else{
                    j++;
                }
            }
            while(i<n-2 && nums[i]==nums[i+1]){
                i++;
            }
        }
        return ans;
    }
};