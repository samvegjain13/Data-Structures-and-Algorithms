class Solution {
public:
    bool isPalindrome(int x) {
        int rem=0,copy;
        long int rev=0;
        copy=x;
        if(copy<0){
            return 0;
        } else {
        while(x>0) {
            rem=x%10;
            rev=rev*10+rem;
            x=x/10;
        }
        if(rev==copy) {
            return 1;
    
        } else{
            return 0;
        }
        } 
    }
    // int main() {
    //     int x;
    //     cin>>x;
    //     isPalindrome(x);
    //     return 0;
    // }
};