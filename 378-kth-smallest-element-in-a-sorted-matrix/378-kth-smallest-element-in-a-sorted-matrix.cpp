class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int low=matrix[0][0];
        int high =matrix[n-1][n-1];
        while(low<high){
            int mid=low+(high-low)/2;
            if(iseq(matrix,mid)<k){
                low=mid+1;
            }
            else{
                high=mid;
            }
        }
        return low;
    }
    int iseq(vector<vector<int>>& matrix, int k){
        int count =0;
        int n=matrix.size();
        int j=0;int i=n-1;
        while(i>=0 && j<n){
            if(matrix[i][j]>k){
                i--;
            }
            else{
                count =count +i+1;
                j++;
            }
        }
        return count ;
    }
};