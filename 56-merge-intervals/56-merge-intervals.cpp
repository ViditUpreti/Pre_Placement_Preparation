class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        if(n==1) return intervals;
        vector<vector<int>>ans;
        int i =1;
        int start=intervals[0][0];
        int finish=intervals[0][1]; 
        while(i<n){
            if(intervals[i][0]<=finish){
                
                finish=max(finish,intervals[i][1]);
                i++;
                if(i==n){
                    ans.push_back({start,finish});
                }
            }
            else{
                ans.push_back({start,finish});
                if(i!=n){
                    start=intervals[i][0];
                    finish=intervals[i][1];
                }
            }
        }
        return ans;
    }
};