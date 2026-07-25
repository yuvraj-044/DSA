class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        if(x<10)return true;
        long reversed=0;
        int y=x;

        while(y>0){
            reversed=reversed*10+y%10;
            y/=10;

        }

        return reversed==x;
        
    }
};