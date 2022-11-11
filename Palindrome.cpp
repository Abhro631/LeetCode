class Solution {
public:
    bool isPalindrome(int x) {
        long int n,y=x,r=0;
        while(x!=0){
            n=x%10;
            r=(r*10)+n;
            x/=10;
        }
        if(r==y && y>=0)
        return true;
        else
        return false;
        
    }
};
