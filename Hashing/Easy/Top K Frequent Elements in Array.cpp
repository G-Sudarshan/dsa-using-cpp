/*

platform: GFG

Top K Frequent Elements in Array - | 
Easy Accuracy: 50.04% Submissions: 10992 Points: 2
Given a non-empty array of integers, find the top k elements which have the highest frequency in the array. If two numbers have the same frequency then the larger number should be given preference. 

Example 1:

Input:
nums = {1,1,1,2,2,3},
k = 2
Output: {1, 2}
Example 2:

Input:
nums = {1,1,2,2,3,3,3,4},
k = 2
Output: {3, 2}
Explanation: Elements 1 and 2 have the
same frequency ie. 2. Therefore, in this
case, the answer includes the element 2
as 2 > 1.
User Task:
The task is to complete the function topK() that takes the array and integer k as input and returns a list of top k frequent elements.

Expected Time Complexity : O(NlogN)
Expected Auxilliary Space : O(N)

Constraints:
1 <= N <= 105
1<=A[i]<=105

*/

class Solution {
  public:
    // Back-end complete function Template for C++

    static bool compare(pair<int, int> p1, pair<int, int> p2) {
        // If 2 elements have same frequency then return larger element
        if (p1.second == p2.second) return (p1.first > p2.first);

        // Else return element with larger frequency
        else
            return (p1.second > p2.second);
    }

    vector<int> topK(vector<int>& nums, int k) {
        vector<int>
            result; // vector to store elements that have top k frequencies
        unordered_map<int, int> ump; // frequency map

        // add all elements to frequency map
        for (int i = 0; i < nums.size(); i++) ump[nums[i]]++;

        // convert frequency map to vector
        vector<pair<int, int> > frequency(ump.begin(), ump.end());

        // sort frequency vector using user defined compare function
        sort(frequency.begin(), frequency.end(), compare);

        // add first k elements from sorted vector to result
        for (int i = 0; i < k; i++) result.push_back(frequency[i].first);

        return result;
    }
};
