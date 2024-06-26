class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(auto &str:tokens){
            if(str=="+"){
                int a=(s.top());
                s.pop();
                int b=(s.top());
                s.pop();
                s.push(a+b);
            }
            else{
            if(str=="-"){
                int a=(s.top());
                s.pop();
                int b=(s.top());
                s.pop();
                s.push(b-a);
            }
            else{
            if(str=="*"){
                int a=(s.top());
                s.pop();
                int b=(s.top());
                s.pop();
                s.push(b*a);
            }
            else{
            if(str=="/"){
                int a=(s.top());
                s.pop();
                int b=(s.top());
                s.pop();
                s.push(b/a);
            }
            else{
                s.push(stoi(str));
            }
            }
            }
            }
        }
        return s.top();
    }
};
