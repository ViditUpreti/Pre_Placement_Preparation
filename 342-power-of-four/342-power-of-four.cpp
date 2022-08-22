class Solution {
public:
    bool isPowerOfFour(int n) {
        set<int>x;
        for(long i=1;i<=n;i=i*4){
            x.insert(i);
        }
        if(x.find(n)!=x.end()){
            return true;
        }
        else{
            return false;
        }
    }
    
};