bool searchMatrix(vector<vector<int>>& mat, int target) {
         for(int i=0;i<mat.size();++i){
             for(int j=0;j<mat[0].size();++j){
                   if(mat[i][j]==target)return true;
             }
         }
         return false;
}
