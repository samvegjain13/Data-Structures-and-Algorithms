class Solution {
public:
    bool isPerfectSquare(int num) {
        long int i;
        if(num==1) return 1;
        if(num<4) return 0;
        else{
        for(i=1;i<=num/2;i++){
            if(i*i==num) return 1;

        } return 0;

        }
    }
};