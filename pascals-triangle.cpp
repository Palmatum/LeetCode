/*
Pascal's Triangle

Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
*/


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> result;
        vector<int> temp;
        
        if(numRows>=1) {
            temp.push_back(1);
            result.push_back(temp);
            if(numRows==1) return result;
        }
        
        temp.clear();
        
        if(numRows>=2) {
            temp.push_back(1);
            temp.push_back(1);
            result.push_back(temp);
            if(numRows==2) return result;
        }
        
        temp.clear();
        
        for(int i=3; i<=numRows; i++) {
            for(int j=0; j<i; j++) {
                if(j==0 || j==i-1) temp.push_back(1);
                else {
                    temp.push_back(result[i-2][j-1] + result[i-2][j]);
                }
            }
            result.push_back(temp);
            temp.clear();
        }
        
        return result;
           
    }
};




/*

https://leetcode.com/mzchen
mzchen's solution

class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int>> r(numRows);

        for (int i = 0; i < numRows; i++) {
            r[i].resize(i + 1);
            r[i][0] = r[i][i] = 1;
  
            for (int j = 1; j < i; j++)
                r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
        }
        
        return r;
    }
};

*/