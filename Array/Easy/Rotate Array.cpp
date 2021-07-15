/*

platform: GFG

Rotate Array 
Easy Accuracy: 50.28% Submissions: 66094 Points: 2
Given an unsorted array arr[] of size N, rotate it by D elements in the counter-clockwise direction. 

 

Example 1:

Input:
N = 5, D = 2
arr[] = {1,2,3,4,5}
Output: 3 4 5 1 2
Explanation: 1 2 3 4 5  when rotated
by 2 elements, it becomes 3 4 5 1 2.
Example 2:

Input:
N = 10, D = 3
arr[] = {2,4,6,8,10,12,14,16,18,20}
Output: 8 10 12 14 16 18 20 2 4 6
Explanation: 2 4 6 8 10 12 14 16 18 20 
when rotated by 3 elements, it becomes 
8 10 12 14 16 18 20 2 4 6.
 

Your Task:
Complete the function rotateArr() which takes the array, D and N as input parameters and rotates the array by D elements. The array must be modified in-place without using extra space. 

 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

 

Constraints:
1 <= N <= 107
1 <= D <= N
0 <= arr[i] <= 105

*/

class Solution{
    public:
    
    void reverse(int arr[], int low, int high){
        int temp = 0;
        while(low < high){
            temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
            low++;
            high--;
        }
    }
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        reverse(arr, 0, d-1); // reverse 0 to d-1 elements
        reverse(arr, d, n-1); // deverse d to n-1 elements
        reverse(arr, 0, n-1); // reverse all elements 
    }
};
