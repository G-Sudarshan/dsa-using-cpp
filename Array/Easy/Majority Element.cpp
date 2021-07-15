/*

Platform: GFG

Majority Element 
Easy Accuracy: 48.6% Submissions: 90776 Points: 2
Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.
 

Example 1:

Input:
N = 3 
A[] = {1,2,3} 
Output:
-1
Explanation:
Since, each element in 
{1,2,3} appears only once so there 
is no majority element.
Example 2:

Input:
N = 5 
A[] = {3,1,3,3,2} 
Output:
3
Explanation:
Since, 3 is present more
than N/2 times, so it is 
the majority element.

Your Task:
The task is to complete the function majorityElement() which returns the majority element in the array. If no majority exists, return -1.
 

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
 

Constraints:
1 ≤ N ≤ 107
0 ≤ Ai ≤ 106

*/

int majorityElement(int arr[], int n)
{
        
    // your code here
    
    int res = 0, count = 1; // initialize res and count variable to 0

    	for(int i = 1; i < n; i++)
    	{
    		if(arr[res] == arr[i])
    			count++;              // increment count if previous elemnt is same as current element
    		else 
    			count --;             // else decrement the count

    		if(count == 0)
    		{
    			res = i; count = 1;    // if count is 0 then assign current element index to res
    		}
    	}

    	count = 0; // again assign 0 to count element to count exact occurence of potential mejority element

    	for(int i = 0; i < n; i++)
    		if(arr[res] == arr[i])
    			count++;               // exact count of potential mejority element

    	if(count <= n /2)
    		res = -1;  
    	else
    	    res = arr[res];         // if count is less than equal to n/2 then assign -1 to res

    	return res;                  // return res

        
}
