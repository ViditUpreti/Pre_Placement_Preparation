class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        set<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;){
            long long int t=target-nums[i];
            for(int j =i+1;j<n;){
                t-=nums[j];
                int left=j+1;
                int right=n-1;
                while(left<right){
                    if(nums[left]+nums[right]==t){
                        ans.insert({nums[i],nums[j],nums[left],nums[right]});
                    }
                    if(nums[left]+nums[right]<t){
                        left++;
                    }
                    else{
                        right--;
                    }
                }
                t+=nums[j];
                int k=j;
                while(j<n-2 && nums[j]==nums[j+1]){
                    j++;
                }
                if(j==k)j++;
            }
            int k=i;
            while(i<n-3 && nums[i]==nums[i+1]){
                i++;
            }
            if(k==i)i++;
        }
        vector<vector<int>>res;
        for(auto it:ans){
            res.push_back(it);
        }
        return res;
    }
};