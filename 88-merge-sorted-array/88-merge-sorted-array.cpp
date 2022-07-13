class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        vector<int>t;
        while(i!=m&&j!=n){
            if(nums1[i]<nums2[j]){
                t.push_back(nums1[i]);
                cout<<nums1[i];
                i++;
            }
            else{
                t.push_back(nums2[j]);
                cout<<nums2[j];
                j++;
                
            }
        }
        if(j!=n){
            for(;j<n;j++){
                t.push_back(nums2[j]);
            }
        }
        else if(i!=m){
            for(;i<m;i++){
                t.push_back(nums1[i]);
            }
        }
        for(i=0;i<m+n;i++){
            nums1[i]=t[i];
        }
        t.clear();
    }
};