/*

platform: GFG

Plus One 
Easy Accuracy: 50.09% Submissions: 22095 Points: 2
Given a non-negative number represented as a list of digits, add 1 to the number (increment the number represented by the digits). The digits are stored such that the most significant digit is first element of array.
 

Example 1:

Input: 
N = 3
arr[] = {1, 2, 4}
Output: 
1 2 5
Explanation:
124+1 = 125, and so the Output
Example 2:

Input: 
N = 3
arr[] = {9,9,9}
Output: 
1 0 0 0
Explanation:
999+1 = 1000, and so the output

Your Task:
You don't need to read input or print anything. You only need to complete the function increment() that takes an integer N, and an array arr of size N as input and returns a list of integers denoting the new number which we get after adding one to the number denoted by the array arr.


Expected Time Complexity:  O(N)
Expected Auxilliary Space: O(1)
 

Constraints:
1 <= N <= 105
0 <= arri <= 9

*/

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        // code here
    int s, carry=1; // declare size of array and carry
    s = arr.size(); // initialize size of array 
    vector <int> result; // intialize a vector for 
    for(int i=s-1;i>=0;i--)
    {
        int sum;
        sum = arr[i] + carry; // add carry
        carry = sum/10;       // check if there's any carry for next digit
        result.push_back(sum%10); // store current digit in result vector
    }
    result.push_back(carry); // if there is any carry it will be push backed to result vector
    s = result.size(); // get latest size of result vector
    int i = s-1; 
    vector<int> ans; // initialize ans vector to store answer
    while(i>=0 && result[i]==0)
    {
        i--; // trim the left zeroes
    }
    while(i>=0)
    {
        ans.push_back(result[i]); // store answer in ans vector from result vector in reverse order
        i--;
    }
    return ans; // return ans vector
        
    }
};
