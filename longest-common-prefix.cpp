/*
Longest Common Prefix

Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string answer = "";
        int j, counter, stringLength=INT_MAX;
        
        if(strs.size()==1) {
            return strs[0];
        }
        
        for(int i=1; i<strs.size(); i++) {
            j=0, counter=0;
            while(strs[0][j]!='\0' && strs[i][j]!='\0') {
                if(strs[0][j]==strs[i][j]) {
                    counter++;
                } else break;
                j++;
            }
            if(stringLength>counter) stringLength=counter;
        }
        
        if(stringLength==0) return "";
        
        for(int i=0; i<stringLength; i++) {
            answer.push_back(strs[0][i]);
        }
        
        return answer;
        
    }
};