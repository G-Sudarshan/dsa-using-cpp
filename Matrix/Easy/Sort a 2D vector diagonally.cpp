/*

platform: GFG

Sort a 2D vector diagonally 
Medium Accuracy: 63.86% Submissions: 3326 Points: 4
Given an NxM 2D matrix, rearrange such that 
Each diagonal in the lower left triangle of the rectangular grid is sorted in ascending order. 
Each diagonal in the upper right triangle of the rectangular grid is sorted in descending order. 
The major diagonal in the grid starting from the top-left corner is not rearranged. 


Example 1:

Input:
N = 4, M = 5 
matrix = {{3 6 3 8 2},
          {4 1 9 5 9},
          {5 7 2 4 8},
          {8 3 1 7 6}}
Output:
3 9 8 9 2
1 1 6 5 8
3 4 2 6 3
8 5 7 7 4
Explanation:
Before:

After:

Your Task:
You don't need to read input or print anything. Your task is to complete the function diagonalSort() which takes the matrix, n and m as input parameter and rearranges the elements of the matrix.


Expected Time Complexity: O(NxM)
Expected Auxiliary Space: O(N+M)


Constraints:
1 <= N,M <= 104 , 1<=N*M<=105
1 <= matrix[i] <= 103



*/

class Solution {
  public:
    void diagonalSort(vector<vector<int> >& matrix, int n, int m) 
    { 
        vector<int> lower_triangle[n]; 
        vector<int> upper_triangle[m]; 
        vector<int> major_diagonal;
    
        for (int i = 0; i < n; i++) { 
            for (int j = 0; j < m; j++) { 
                if (j < i) { 
                    lower_triangle[i-j].push_back(matrix[i][j]); 
                } 
                else if (j > i) { 
                    upper_triangle[j-i].push_back(matrix[i][j]); 
                } 
                else { 
                    major_diagonal.push_back(matrix[i][j]); 
                } 
            } 
        } 
    
    
        // Sort the array of vectors 
        for (int i = 1; i < n; i++) { 
            sort(lower_triangle[i].begin(), lower_triangle[i].end(),greater<int>()); //error 
        } 
    
        for (int i = 1; i < m; i++) { 
            sort(upper_triangle[i].begin(), upper_triangle[i].end()); 
        } 
    
        // Update the value to matrix[][] 
        // using the sorted array of vectors 
        for (int i = 0; i < n; i++) { 
            for (int j = 0; j < m; j++) { 
                // If (j-i) is negative 
                if (j < i) { 
                    int d = i-j; 
                    int l = lower_triangle[d].size() - 1; 
                    matrix[i][j] = lower_triangle[d][l]; 
                    lower_triangle[d].pop_back(); 
                } 
                // If (j-i) is positive 
                else if (j > i) { 
                    int d = j-i; 
                    int l = upper_triangle[d].size() - 1; 
                    matrix[i][j] = upper_triangle[d][l]; 
                    upper_triangle[d].pop_back(); 
                } 
            } 
        } 
    } 
};
