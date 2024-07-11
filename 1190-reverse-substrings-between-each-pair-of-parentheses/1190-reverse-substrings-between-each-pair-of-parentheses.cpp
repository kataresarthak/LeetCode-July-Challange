class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> st;
        string temp = "";
        
        for (char c : s) {
            if (c == '(') {
                st.push(temp);
                temp = "";
            }
            else if (c == ')') {
                string prev = st.top();
                st.pop();
                reverse(temp.begin(), temp.end());
                temp = prev + temp;
            }
            else {
                temp += c;
            }
        }
        return temp;
    }
};