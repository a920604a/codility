// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
//method 1
#include<algorithm>
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.empty()) return 0 ;
    sort(A.begin() ,A.end());
    int res = 1;
    for(int i =0;i<A.size()-1;++i)
    {
        if(A[i]!=A[i+1]) res++;
    }
    return res;
}
//method 2
#include<set>
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    set<int>s;
    for(int i:A) s.insert(i);
    return s.size();
    
}