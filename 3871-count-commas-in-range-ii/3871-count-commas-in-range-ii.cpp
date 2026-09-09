class Solution {
public:
    long long countCommas(long long n) {
        if(n <= 999) return 0;

        long long c = 0;
        long long st = 1000;

        while(st <= n){
            c += n - st + 1;
            st *= 1000;
        }

        return c;
    }
};