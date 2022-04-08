//LEETCODE : 22 Generate Parentheses

class Solution {
public:
    void helper(int left, int right, vector<string>& ret, string& s) {
        // no more, add the s to vector and return
        if (!left && !right) {
            ret.push_back(s);
            return;
        }
        
        // always can add '(' if any
        if (left) {
            s.push_back('(');
            helper(left - 1, right, ret, s);
            s.pop_back();
        }
        // can only add ')' if remaining ')' is more than '('
        if (right > left) {
            s.push_back(')');
            helper(left, right - 1, ret, s);
            s.pop_back();
        }
            
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ret;
        string s;
        
        helper(n, n, ret, s);
        
        return ret;
    }
};
