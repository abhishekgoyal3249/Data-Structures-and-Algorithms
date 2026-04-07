class Solution {
public:
    bool isPowerOfTwo(int n) {
        int c=0;
        if(n<=0) return false;
        if (n==1) return true;
        for(;n>1;)
        {
            if(n%2==0)
            {
                n=n/2;
            }
            else
            {
                return false;
            }
        }
        return true;
        
        
    }
};