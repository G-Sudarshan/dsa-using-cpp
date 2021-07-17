/*

platform: GFG

Bitonic Point 
Easy Accuracy: 52.84% Submissions: 24836 Points: 2
Given an array arr of n elements which is first increasing and then may be decreasing, find the maximum element in the array.
Note: If the array is increasing then just print then last element will be the maximum value.

Example 1:

Input: 
n = 9
arr[] = {1,15,25,45,42,21,17,12,11}
Output: 45
Explanation: Maximum element is 45.
Example 2:

Input: 
n = 5
arr[] = {1, 45, 47, 50, 5}
Output: 50
Explanation: Maximum element is 50.
Your Task:  
You don't need to read input or print anything. Your task is to complete the function findMaximum() which takes the array arr[], and n as parameters and returns an integer denoting the answer.

Expected Time Complexity: O(logn)
Expected Auxiliary Space: O(1)

Constraints:
3 ≤ n ≤ 106
1 ≤ arri ≤ 106

*/

class Solution{
public:
	int findMaximumUtil(int *arr, int low, int high) {

	    /* Base Case: Only one element is present in arr[low..high]*/
	    if (low == high) return arr[low];

	    /* If there are two elements and first is greater then
	        the first element is maximum */
	    if ((high == low + 1) && arr[low] >= arr[high]) return arr[low];

	    /* If there are two elements and second is greater then
	        the second element is maximum */
	    if ((high == low + 1) && arr[low] < arr[high]) return arr[high];

	    int mid = (low + high) / 2; /*low + (high - low)/2;*/

	    /* If we reach a point where arr[mid] is greater than both of
	        its adjacent elements arr[mid-1] and arr[mid+1], then arr[mid]
	        is the maximum element*/
	    if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]) return arr[mid];

	    /* If arr[mid] is greater than the next
	        element and smaller than the previous
	        element then maximum lies on left side of mid */
	    if (arr[mid] > arr[mid + 1] && arr[mid] < arr[mid - 1])
	        return findMaximumUtil(arr, low, mid - 1);

	    // when arr[mid] is greater than arr[mid-1]
	    // and smaller than arr[mid+1]
	    else
	        return findMaximumUtil(arr, mid + 1, high);
	}
public:
	int findMaximum(int arr[], int n) {
	    return findMaximumUtil(arr, 0, n - 1);
	}
};


