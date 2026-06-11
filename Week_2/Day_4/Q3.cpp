class Solution {
public:
    vector<string> res;

    void helper(int n, int left, int right, string s) {
        if (left == n && right == n) {
            res.push_back(s);
            return;
        }

        if (left < n) {
            helper(n, left + 1, right, s + '(');
        }

        if (right < left) {
            helper(n, left, right + 1, s + ')');
        }
    }

    vector<string> generateParenthesis(int n) {
        helper(n, 0, 0, "");
        return res;
    }
};