/*
Implement strStr()


Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Clarification:

What should we return when needle is an empty string? This is a great question to ask during an interview.

For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().
*/



class Solution {
public:
    
    int strStr(string haystack, string needle) {
        
        
        int lenHay = haystack.length();
        int lenNeed = needle.length();
        
        for(int i=0; i<=lenHay-lenNeed; i++) {
            int j;
            for(j=0; j<lenNeed; j++) {
                if(haystack[i+j]!=needle[j]) break;
            }
            if(j == lenNeed) return i;
        }
        
        return -1;
        
    }

    
    
    
    
//     int strStr(string haystack, string needle) {
        
//         int lenHay = haystack.length(), lenNeed = needle.length();
        
//         if(lenHay == 0 && lenNeed == 0) return 0;
        
//         if(lenHay == 0) return -1;
        
//         if(lenNeed == 0) return 0;
         
//         int i = 0, j = 0, count, pos;
//         while(haystack[i]!='\0') {
//             j = 0, count = 0;
//             if(haystack[i]==needle[0]) {
//                 while(needle[j]!='\0') {
//                     if(needle[j] == haystack[i+j]) {
//                         count = 1;
//                     } else {count = 0; break;};
//                     j++;
//                 }
//                 if(count==1) {
//                     pos = i; break;
//                 }
//                 else pos = -1;
//             }
//             i++;
//         }
        
//         return pos; 
        
//     }
};