/*

platform: GFG

Minimum steps to make product equal to one 
Easy Accuracy: 41.56% Submissions: 3935 Points: 2
Given an array arr[] containing N integers. In one step, any element of the array can either be increased or decreased by one. Find minimum steps required such that the product of the array elements becomes 1.

 

Example 1:

Input:
N = 3
arr[] = {-2, 4, 0}
Output:
5
Explanation:
We can change -2 to -1, 0 to -1 and 4 to 1.
So, a total of 5 steps are required
to update the elements such that
the product of the final array is 1. 
Example 2:
Input:
N = 3
arr[] = {-1, 1, -1} 
Output :
0
Explanation:
Product of the array is already 1.
So, we don't need to change anything.

Your Task:  
You don't need to read input or print anything. Your task is to complete the function makeProductOne() which takes an integer N and an array arr of size N as input and returns the minimum steps required.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ N ≤ 105
-103 ≤ arr[i] ≤ 103

*/
class Solution {
  public:
    int makeProductOne(int arr[], int N) {

        int steps =  0; // initialize steps
        int negative_ones = 0; 
        int zeroes = 0;
        
        /* 
        basic logic is we have to make all elements 
           either 1 or -1 to get product as 1.
           if no. of -1 is odd we have to make 2 extra steps to convert 1 to -1
           otherwise no. of steps = diffrence between element and 1 / -1
       */
       for(int i = 0 ; i < N ; i++){
            if(arr[i] < 0){
                steps = steps + abs(arr[i] - (-1));
                negative_ones++;
            }else if(arr[i]==0){
                zeroes++;
            }
            else{
                steps = steps + (arr[i] - 1);
            }
        }
        
        if(negative_ones % 2 == 0){
            steps = steps + zeroes;
        }else{
            if(!zeroes){
                steps = steps + 2;
            }else{
                steps = steps + zeroes;
            }
        }
        
        return steps;
    }
};

