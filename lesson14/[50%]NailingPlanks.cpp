/ you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<set>
int solution(vector<int> &A, vector<int> &B, vector<int> &C) {
    // write your code in C++14 (g++ 6.2.0)
    int i;
    set<int> s;
    set<int>::iterator it;
    for(i=0;i<C.size();++i)
    {
        int c=0;
        s.insert(C[i]);
        for(int j=0;j<A.size();++j)
        {
            for(it = s.begin() ;it!=s.end() ;++it)
            {
                if(*it>=A[j] && *it<=B[j]) 
                {
                    c++;
                    break;
                }
            }
        }
       if(c==A.size()) return i+1;
    }
    return -1;
}