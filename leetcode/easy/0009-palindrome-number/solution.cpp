class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int y=x,rev=0;
        while(x!=0){
            int dig=x%10;
            if(rev<INT_MIN/10 || rev>INT_MAX/10) return false;
            rev=rev*10+dig;
            x=x/10;
        }
        if(rev==y) return true;
        else return false;
    }
};