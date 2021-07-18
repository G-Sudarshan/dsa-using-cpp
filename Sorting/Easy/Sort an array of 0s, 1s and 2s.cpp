/*

platform: GFG

Sort an array of 0s, 1s and 2s 
Easy Accuracy: 51.36% Submissions: 98108 Points: 2
Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.


Example 1:

Input: 
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s 1s and 2s are segregated 
into ascending order.
Example 2:

Input: 
N = 3
arr[] = {0 1 0}
Output:
0 0 1
Explanation:
0s 1s and 2s are segregated 
into ascending order.

Your Task:
You don't need to read input or print anything. Your task is to complete the function sort012() that takes an array arr and N as input parameters and sorts the array in-place.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 <= N <= 10^6
0 <= A[i] <= 2

*/

void sort012(int a[], int n)
{
    int zero=0, one=0, two=0; // initialize counters for 0, 1 and 2
    int k=0;  // initialize index variable to modify array
    
    for(int i = 0 ; i < n; i++){
        
        // count occurances of 1, 2 and 0
        if(a[i]==0){
            zero++;
        }
        
        if(a[i]==1){
            one++;
        }
        
        if(a[i]==2){
            two++;
        }
    }
    
    // modify array
    
    while(zero){
        a[k] = 0;
        k++;
        zero--;
    }
    
    while(one){
        a[k] = 1;
        k++;
        one--;
    }
    
    while(two){
        a[k] = 2;
        k++;
        two--;
    }
}
