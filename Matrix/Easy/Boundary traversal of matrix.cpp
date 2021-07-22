/*

platform: GFG

Boundary traversal of matrix 
Easy Accuracy: 47.42% Submissions: 15103 Points: 2
You are given a matrix of dimensions n x m. The task is to perform boundary traversal on the matrix in a clockwise manner.

Example 1:

Input:
n = 4, m = 4
matrix[][] = {{1, 2, 3, 4},
         {5, 6, 7, 8},
         {9, 10, 11, 12},
         {13, 14, 15,16}}
Output: 1 2 3 4 8 12 16 15 14 13 9 5
Explanation:
The matrix is:
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
The boundary traversal is:
1 2 3 4 8 12 16 15 14 13 9 5
Example 2:

Input:
n = 3, m = 4
matrrix[][] = {{12, 11, 10, 9},
         {8, 7, 6, 5},
         {4, 3, 2, 1}}
Output: 12 11 10 9 5 1 2 3 4 8

Your Task:
Complete the function boundaryTraversal() that takes matrix, n and m as input parameters and returns the list of integers that form the boundary traversal of the matrix in a clockwise manner.

Expected Time Complexity: O(N + M)
Expected Auxiliary Space: O(1)

Constraints:
1 <= n, m<= 100
0 <= matrixi <= 1000

*/

class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int N, int M) 
    {
        // code here
        vector<int> res;
        int i = 0;
        int j = 0;
        
        // handled special cases
        if(N==2 && M==2){
            res.push_back(matrix[0][0]);
            res.push_back(matrix[0][1]);
            res.push_back(matrix[1][1]);
            res.push_back(matrix[1][0]);
            
            return res;
        }else if(N == 1){
            for(i = 0 ; i < M ; i++){
                res.push_back(matrix[0][i]);
            }
            return res;
        }else if(M == 1){
            for(i = 0 ; i < N ; i++){
                res.push_back(matrix[i][0]);
            }
            return res;
        }else{
        
        // class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int N, int M) 
    {
        // code here
        vector<int> res;
        int i = 0;
        int j = 0;
        
        // handled special cases
        if(N==2 && M==2){
            res.push_back(matrix[0][0]);
            res.push_back(matrix[0][1]);
            res.push_back(matrix[1][1]);
            res.push_back(matrix[1][0]);
            
            return res;
        }else if(N == 1){
            for(i = 0 ; i < M ; i++){
                res.push_back(matrix[0][i]);
            }
            return res;
        }else if(M == 1){
            for(i = 0 ; i < N ; i++){
                res.push_back(matrix[i][0]);
            }
            return res;
        }else{
        
        // general cases
        for(j=0 ; j < M ; j++){
            res.push_back(matrix[i][j]);
        }
        
        j = M-1;
        
        for(i=1 ; i < N ; i++){
            res.push_back(matrix[i][j]);
        }
        
        i = N-1;
        
        for(j=M-2 ; j >= 0 ; j--){
            res.push_back(matrix[i][j]);
        }
        
        j = 0;
        
        for(i=N-2 ; i > 0 ; i--){
            res.push_back(matrix[i][j]);
        }
        
        return res;
        
            
        }
        
    }
}; cases
        for(j=0 ; j < M ; j++){
            res.push_back(matrix[i][j]);
        }
        
        j = M-1;
        
        for(i=1 ; i < N ; i++){
            res.push_back(matrix[i][j]);
        }
        
        i = N-1;
        
        for(j=M-2 ; j >= 0 ; j--){
            res.push_back(matrix[i][j]);
        }
        
        j = 0;
        
        for(i=N-2 ; i > 0 ; i--){
            res.push_back(matrix[i][j]);
        }
        
        return res;
        
            
        }
        
    }
};
