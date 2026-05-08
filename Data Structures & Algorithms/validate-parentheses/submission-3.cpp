class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            // opening bracket
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            }
            // closing bracket
            else {
                if (st.empty()) return false;

                char top = st.top();
                st.pop();

                if ((c == ']' && top != '[') ||
                    (c == ')' && top != '(') ||
                    (c == '}' && top != '{')) {
                    return false;
                }
            }
        }

        return st.empty();
    }
};
