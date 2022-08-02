class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=nums.size();
        if(l==0){
            return l;
        }
        int i,k=0;
        for( i =0 ;i<l-1;i++){
            if((nums[i]!=nums[i+1])){
                nums[k]=nums[i];
                k++;
            }
        }if(l!=0)
        nums[k]=nums[i];
        return k+1;
    }
};