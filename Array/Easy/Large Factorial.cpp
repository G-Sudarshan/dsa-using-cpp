/*

platform: GFG

Large Factorial 
Medium Accuracy: 62.7% Submissions: 14431 Points: 4
You are given an array A of integers of length N. You need to calculate factorial of each number. The answer can be very large, so print it modulo 109 + 7.
 

Example 1:

Input:
N = 5
A[] = {0, 1, 2, 3, 4}
Output:
1 1 2 6 24
Explanation:
Factorial of 0 is 1, 
factorial of 1 is 1, factorial of 2 is 2, 
factorial of 3 is 6 and so on.

Example 2:

Input:
N = 3
A[] = {5, 6, 3}
Output:
120 720 6
Explanation:
Factorial of 5 is 120, 
factorial of 6 is 720, 
factorial of 3 is 6.

Your Task:
Complete the function factorial() which takes list a and single integer n, as input parameters and returns a list of factorials of the numbers in the list a.


Expected Time Complexity: O(max(A) + N)
Expected Auxiliary Space: O(max(A))


Constraints:
1 <= N <= 105
0 <= A[i] <= 105

*/

class Solution{
public:
    
    vector<long long> factorial(vector<long long> a, int n) {
        int i, MAX = 1e5;
        long long fac[MAX + 1], mod = 1e9 + 7;
        fac[0] = 1;
        for (i = 1; i <= MAX; i++) {
            fac[i] = (fac[i - 1] % mod * (long long)i) % mod;
        }
        
        vector<long long> ans(n);
        for (i = 0; i < n; i++) {
            ans[i] = fac[a[i]];
        }
        return ans;
    }
};
