/*

platform: GFG

Reverse words in a given string 
Easy Accuracy: 50.0% Submissions: 51105 Points: 2
Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

Example 1:

Input:
S = i.like.this.program.very.much
Output: much.very.program.this.like.i
Explanation: After reversing the whole
string(not individual words), the input
string becomes
much.very.program.this.like.i
Example 2:

Input:
S = pqr.mno
Output: mno.pqr
Explanation: After reversing the whole
string , the input string becomes
mno.pqr

Your Task:
You dont need to read input or print anything. Complete the function reverseWords() which takes string S as input parameter and returns a string containing the words in reversed order. Each word in the returning string should also be separated by '.' 


Expected Time Complexity: O(|S|)
Expected Auxiliary Space: O(|S|)


Constraints:
1 <= |S| <= 2000

*/

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        string result = "";
        string curr_word = "";
        vector<string> words;
    
        //initially reversing individual words of the given string one by one.
        for (int i = 0; i < s.length(); ++i)
        {
            //if '.' is encountered, we store the word in list.
            if(s[i] == '.')
            {
                words.push_back(curr_word);
                curr_word = "";
            }
            //else adding the characters in current word in such
            //a way that original words get reversed.
            else
                curr_word += s[i];
        }
        //storing the last remaining word in list.
        words.push_back(curr_word);
        
        //now reversing the whole modified string by adding all 
        //the elements of list in a single string in reverse order.
        for (int i = words.size()-1; i>=0; --i)
        {
            result += words[i];
            if(i!=0)
                result += '.';
        }
        //returning the result.
        return result;
    } 
};
