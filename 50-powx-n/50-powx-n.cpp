class Solution {
public:
    double myPow(double x, int n) {
        if(n<0  &&  n!=-2147483648){
            n=n*(-1);
            return 1.0/myPow(x,n);
        }
        if(n==0){
            return 1;
        }
        double m =myPow(x,n/2);
        if(n%2==0){
            return m*m;
        }
        else{
            return m*m*x;
        }
    }
};