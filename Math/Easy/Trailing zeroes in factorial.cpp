/*

platform: GFG

Trailing zeroes in factorial 
Easy Accuracy: 52.7% Submissions: 28471 Points: 2
For an integer N find the number of trailing zeroes in N!.

Example 1:

Input:
N = 5
Output:
1
Explanation:
5! = 120 so the number of trailing zero is 1.
Example 2:

Input:
N = 4
Output:
0
Explanation:
4! = 24 so the number of trailing zero is 0.
Your Task:  
You don't need to read input or print anything. Your task is to complete the function trailingZeroes() which take an integer N as an input parameter and returns the count of trailing zeroes in the N!.

Expected Time Complexity: O(logN)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 109



*/


class Solution
{
public:
    int trailingZeroes(int N)
    {
        // Write Your Code here
        int count = 0; //initialize count to zero
        
        /*
            the zeroes in factorial will be same as no.s in 
            multiple of 5 comes in  
        
        */
        
       for (int i = 5; N / i >= 1; i *= 5){
              int temp = N / i;
              count = count + temp;
       }
             return count;
    }
};
