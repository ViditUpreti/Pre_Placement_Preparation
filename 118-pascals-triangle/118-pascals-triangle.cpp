class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> trig;
        vector<int>a;
        for(int i=1;i<=numRows;i++){
            for(int j=1;j<=i;j++){
                if(j==1||j==i){
                    a.push_back(1);
                }
                else{
                    a.push_back(trig[i-2][j-2]+trig[i-2][j-1]);
                }
            }
            trig.push_back(a);
            a.clear();
        }
        return trig;
    }
};