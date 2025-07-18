//Search a 2D Matrix
//You are given an m x n integer matrix matrix with the following two properties:

//Each row is sorted in non-decreasing order.
//The first integer of each row is greater than the last integer of the previous row.
//Given an integer target, return true if target is in matrix or false otherwise.

//You must write a solution in O(log(m * n)) time complexity.

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size() , n=matrix[0].size();
        for(int i=0 ; i<m ; i++){
            if(target>matrix[i][0] && target<matrix[i][n-1]){
                int low=0 , high=n-1;
                while(low<high){
                    int mid=low + (high-low)/2;
                    if(matrix[i][mid] == target) return true;
                    else if(matrix[i][mid] < target){
                        high=mid-1;
                    }else{
                        low=mid+1;
                    }

                }
            }
        }
        return false;
    }
};
