class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long y=x;
        long long rev=0;

    while(x){
        int ni=x%10;
         rev=rev*10+ni;
        x=x/10;

    }   
   return (rev==y);
    }
};