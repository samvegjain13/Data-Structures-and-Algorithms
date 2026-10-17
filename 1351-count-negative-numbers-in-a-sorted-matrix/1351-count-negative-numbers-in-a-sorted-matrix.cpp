class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int i=grid.size()-1,j=0,c=0;
        while(i>=0 && j<grid[i].size()){
            if(grid[i][j]<0){
                c+=grid[i].size()-j;
                i--;
            } else j++;
        }

        return c;
    }
};