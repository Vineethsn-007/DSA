class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(), n=matrix[0].size();
        int stRow=0,endRow=m-1;
        while(stRow<=endRow){
            int midRow=stRow+(endRow-stRow)/2;
            if(target>=matrix[midRow][0] && target<=matrix[midRow][n-1]){
                int st=0,end=n-1;
                while(st<=end){
                    int mid=st+(end-st)/2;
                    if(matrix[midRow][mid]==target) return true;
                    else if(target>matrix[midRow][mid]) st=mid+1;
                    else end=mid-1;
                }
                return false;
            }
            else if(target>matrix[midRow][n-1]) stRow=midRow+1;
            else endRow=midRow-1;
        }
        return false;
    }
};