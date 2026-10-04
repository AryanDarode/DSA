#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int r1 = mat.size();
        int c1 = mat[0].size();

        vector<vector<int>> ans(r,vector<int>(c));

        if(r*c != r1*c1){
            return mat;
        }

        int row = 0;
        int col = 0;

        for(int i = 0;i<r1;i++){
            for(int j = 0;j<c1;j++){
                ans[row][col] = mat[i][j];
                col++;
                if(col == c){
                    row++;
                    col = 0;
                }
            }
        }
        return ans;
    }
};