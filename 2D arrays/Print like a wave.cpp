vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for(int col=0;col<mCols;col++){
        if(col%2!=0){  //odd index - bottom to top
            for(int row = nRows-1;row>=0;row--){
                //cout << arr[row][col];
                ans.push_back(arr[row][col]);
            }
        }
        else{
            for(int row=0;row<nRows;row++){
               // cout << arr[row][col];
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}
