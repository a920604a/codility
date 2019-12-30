// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<stack>
int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    stack<char> sta;
    for(int i=0;i<S.size();++i)
    {
        if(S[i]=='(') sta.push(S[i]);
        else
        {
            if(sta.empty()) return 0;
            else if(sta.top()=='(' &&S[i]==')' ) sta.pop();
            else return 0;
        }
    }
    if(sta.empty()) return 1;
    else return 0;
}