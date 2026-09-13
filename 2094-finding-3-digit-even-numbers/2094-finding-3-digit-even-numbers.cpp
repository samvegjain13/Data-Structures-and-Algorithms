class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int> seen;
        unordered_map<int,int> mp;
        int n = digits.size();
        for(int i=0;i<n;i++) mp[digits[i]]++;
        for(int i=0;i<9;i+=2){
            if(mp[i]==0) continue;
            mp[i]--;
            for(int j=1;j<10;j++){
                if(mp[j]<1) continue;
                mp[j]--;
                
                for(int k=0;k<10;k++){
                    if(mp[k]<1) continue;
                    int num = j*100 + k*10 + i;
                    seen.insert(num);
                }
                mp[j]++;
            }
            mp[i]++;
        }
        return {seen.begin(),seen.end()};
    }
};