// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <set>
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    set<int> s;
    for(int i:A)
    {
        if(s.find(i)==s.end()) s.insert(abs(i));
    }
    return s.size();
    
}