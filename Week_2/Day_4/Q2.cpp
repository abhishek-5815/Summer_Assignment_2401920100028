class Solution {
public:
    string decodeString(string s) {
        stack<int> num;
        stack<string> st;

        string curr = "";
        int k = 0;

        for (char ch : s) {
            if (isdigit(ch)) {
                k = k * 10 + (ch - '0');
            }
            else if (ch == '[') {
                num.push(k);
                st.push(curr);

                k = 0;
                curr = "";
            }
            else if (ch == ']') {
                string temp = curr;

                curr = st.top();
                st.pop();

                int repeat = num.top();
                num.pop();

                while (repeat--) {
                    curr += temp;
                }
            }
            else {
                curr += ch;
            }
        }

        return curr;
    }
};