class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        long long rev=0;
        while(x>0){
            int last=x%10;
            rev=rev*10+last;
            x/=10;
        }
        if(temp==rev){
            return true;
        }else{
            return false;
        }
    }
};