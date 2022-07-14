class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int x=matrix.size()-1,j=matrix[0].size()-1,i=0;
        while(i<=x&&j>=0){
            if(matrix[i][j]==target){
                return true;
            }
            else if(matrix [i][j]>target)
                j--;
            else
i++;
        }
        return false; 
    }
};