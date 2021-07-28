/*
Valid Palindrome

Given a string s, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
*/

class Solution {
public:
    bool isPalindrome(string s) {

        int len = s.length()-1;
        for(int i=0, j=len; i<j; i++, j--) {
            while(!isalnum(s[i]) && i<j) i++;
            while(!isalnum(s[j]) && i<j) j--;
            if(tolower(s[i])!=tolower(s[j])) return false;
        }
        
        return true;
        
    }
};