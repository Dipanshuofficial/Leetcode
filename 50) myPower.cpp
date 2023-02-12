class Solution {
public:
    double myPower(double x, long long n) {
        if (n==0) {
            return 1.000000;
        }
        double ans=myPower(x, n/2);
        if (n%2==0){
            return ans*ans;
        }
        else{
            return ans*ans*x;
        }
    }
    double myPow(double x, int n) {
        if(n<0){
            x=1/x;
        }
        return myPower(x, abs(n));
    }
};
