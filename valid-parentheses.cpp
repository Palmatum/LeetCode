/*
Valid Parentheses

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

1) Open brackets must be closed by the same type of brackets.
2) Open brackets must be closed in the correct order.
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        
        if(s.length()%2!=0) return false;
        if(s.empty()) return false;
            
        int i=0;
        while(s[i]!='\0') {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') stack.push(s[i]);
            else{
                if (stack.empty() || (stack.top()=='(' && s[i]!=')') || (stack.top()=='{' && s[i]!='}') || (stack.top()=='[' && s[i]!=']')) return false;
                stack.pop();
            }
            i++;
        }
        
        return stack.empty();
    }
};