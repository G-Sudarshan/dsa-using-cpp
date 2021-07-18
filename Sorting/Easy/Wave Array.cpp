/*

platform: GFG

Wave Array 
Easy Accuracy: 62.9% Submissions: 52598 Points: 2
Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array and return it
In other words, arrange the elements into a sequence such that arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5].....

Example 1:

Input:
n = 5
arr[] = {1,2,3,4,5}
Output: 2 1 4 3 5
Explanation: Array elements after 
sorting it in wave form are 
2 1 4 3 5.
Example 2:

Input:
n = 6
arr[] = {2,4,7,8,9,10}
Output: 4 2 8 7 10 9
Explanation: Array elements after 
sorting it in wave form are 
4 2 8 7 10 9.
Your Task:
The task is to complete the function convertToWave() which converts the given array to wave array.

Expected Time Complexity: O(n).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ n ≤ 106
0 ≤ arr[i] ≤107

*/

class Solution{
    public:
    // arr: input array
    // n: size of array
    // Function to sort the array into a wave-like array.
    
    
    void convertToWave(vector<int>& arr, int n){
        
        int temp = 0;
        if(n%2==1)
        {
            n--;         // if no. of elements is odd then we dont need to swap the last element
        }
        for(int i = 0 ; i < n ; i = i + 2 ){
            // swap the two consecutive elements
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
        
    }
};
