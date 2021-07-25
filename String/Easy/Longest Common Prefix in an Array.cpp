/*

platform: GFG

Longest Common Prefix in an Array 
Easy Accuracy: 49.76% Submissions: 13017 Points: 2
Given a array of N strings, find the longest common prefix among all strings present in the array.


Example 1:

Input:
N = 4
arr[] = {geeksforgeeks, geeks, geek,
         geezer}
Output: gee
Explanation: "gee" is the longest common
prefix in all the given strings.
Example 2:

Input: 
N = 2
arr[] = {hello, world}
Output: -1
Explanation: There's no common prefix
in the given strings.

Your Task:
You don't need to read input or print anything. Your task is to complete the function longestCommonPrefix() which takes the string array arr[] and its size N as inputs and returns the longest common prefix common in all the strings in the array. If there's no prefix common in all the strings, return "-1".


Expected Time Complexity: O(N*max(|arri|)).
Expected Auxiliary Space: O(max(|arri|)) for result.


Constraints:
1 ≤ N ≤ 103
1 ≤ |arri| ≤ 103

*/

class Solution{
  public:
    string longestCommonPrefix (string arr[], int n)
    {
        if (n == 1) return arr[0];
    
    
        string res = "";
        bool include;
        for (int i = 0; i < arr[0].length (); ++i)
        {
            include = true;
            for (int j = 1; j < n; ++j)
            {
                // checking if the current character arr[0][i] is eligible
                // for being included in the result or not
                if (i >= arr[j].length () || arr[0][i] != arr[j][i])
                {
                    include = false;
                    break;
                }
            }
            // if it can't be included, we need not check the further characters
            if (!include) break;
            // if it can be included, we include it and check ahead
            res += arr[0][i];
        }
        if (res == "") return "-1";
        return res;
    }
 };
