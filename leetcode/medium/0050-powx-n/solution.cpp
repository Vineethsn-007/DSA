class Solution {
public:
    double myPow(double x, int n) {
        long binaryform=n;
        double ans=1;
        if(binaryform<0){
            x=1/x;
            binaryform=-binaryform;
        }
        while(binaryform>0){
            if(binaryform%2==1){
                ans=ans*x;
            }
            x=x*x;
            binaryform=binaryform/2;
        }
        return ans;
    }
};