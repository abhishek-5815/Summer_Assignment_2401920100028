class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int rows=mat.size();
        int col=mat[0].size();
        int sum=0;
        //sum of principal diagonal
        for(int i=0;i<rows;i++){
            sum=sum+mat[i][i];
        }
        //sum of off diagonal
        for(int i=0;i<col;i++){
            sum=sum+mat[i][col-1-i];
        }
        //remove duplicate
        if(col & 1){
            sum=sum-mat[col/2][col/2];
        }
        return sum;
        
    }
};