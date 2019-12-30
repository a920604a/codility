// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<algorithm>
#include<set>
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    sort(A.begin(), A.end());
    if(A.back()<0) return 1;
    int res = 1;
    set <int> s;
    for(auto a:A) s.insert(a);
    //for(auto a:s) cout<<a<<endl;
    //set<int>::iterator iter;
    
    for(int i = 0 ;i<int(s.size());++i)
    {
        if((s.find(res)) == s.end()) return res;
        else res++;
    }
    return res;
    
}