class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(string token : tokens){
            if(token == "+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int val = b+a;
                st.push(val);
            }
            else if(token == "-"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int val = b-a;
                st.push(val);
            }
            else if(token == "*"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int val = b*a;
                st.push(val);
            }
            else if(token == "/"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int val = b/a;
                st.push(val);
            }
            else{
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};
