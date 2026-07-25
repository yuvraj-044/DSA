class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.length();

        for(int i = 0; i<n; i++){
            if(st.empty()){
                st.push(s[i]);
                continue;
            } 

            if(s[i] == ')'){
                if(st.top() == '('){
                    st.pop();
                } else {
                    return false;
                }
                continue;
            }

            if(s[i] == '}'){
                if(st.top() == '{'){
                    st.pop();
                } else {
                    return false;
                }
                continue;
            }

            if(s[i] == ']'){
                if(st.top() == '['){
                    st.pop();
                } else {
                    return false;
                }
                continue;
            }

            st.push(s[i]);
        }

        if(st.empty()) return true;
        return false;
    }
};