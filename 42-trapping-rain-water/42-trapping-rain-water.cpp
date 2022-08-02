class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>left(n);
        vector<int>right(n);
        int max=0;
        for(int i=0;i<n;i++){
            if(height[i]>max){
                max=height[i];
            }
            left[i]=max;
        }
        max=0;
        for(int i=n-1;i>=0;i--){
            if(height[i]>max){
                max=height[i];
            }
            right[i]=max;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=min(left[i],right[i])-height[i];
        }
        return ans ;
    }
};