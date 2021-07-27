/*
Repeated Substring Pattern

Given a string s, check if it can be constructed by taking a substring of it and appending multiple copies of the substring together.
*/


class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        int len = s.length();
        
        for(int i=len/2; i>=1; i--) {
            if(len%i==0) {
                int repeats = len/i;
                string sub = s.substr(0, i);
                string res;
                for(int j=0; j<repeats; j++) res.append(sub);
                if(res == s) return true;
            }
        }
        
        return false;   
        
    }
};