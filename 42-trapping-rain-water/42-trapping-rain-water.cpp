class Solution {
public:
    int trap(vector<int>& ht) {
        int n =ht.size();
        int l=0,r=n-1;
        int leftmax=0,rightmax=0;
        int ans=0;
        while(l<r){
            if(ht[l]<=ht[r]){
                if(ht[l]>leftmax){
                    leftmax=ht[l];
                }
                else{
                    ans+=leftmax-ht[l];
                }
                l++;
            }
            else{
                if(ht[r]>rightmax){
                    rightmax=ht[r];
                }
                else{
                    ans+=rightmax-ht[r];
                }
                r--;
            }
        }
        return ans;
    }
};