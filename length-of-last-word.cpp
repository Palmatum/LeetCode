/*
Length of Last Word

Given a string s consists of some words separated by spaces, return the length of the last word in the string. If the last word does not exist, return 0.
A word is a maximal substring consisting of non-space characters only.
*/

class Solution {
public:
    int lengthOfLastWord(string s) {

        int len = 0, tail = s.length()-1;
        
        while(tail>=0 && s[tail]==32) tail--;  //for cases like "a  " (tail = 2), it'll remove the spaces, so the tail would be 0 
        while(tail>=0 && s[tail--]!=32) len++; //to count the length of the last word
        
        return len;
    }
};