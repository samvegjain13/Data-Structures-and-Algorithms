class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int c=0,low=0,high=people.size()-1;
        sort(people.begin(),people.end());
        while(low<=high){
            if(people[low] + people[high] <= limit) low++;
                high--;
                c++;
        }
        return c;
    }
};