// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<algorithm>
vector<int> solution(int N, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> v(N,0);
    for(int i =0;i<A.size();++i)
    {
        if(A[i] == N+1)
        {
            auto it = *max_element(v.begin(), v.end());
            for(int k=0 ;k<v.size();++k) v[k] =it;
        }
        else //A[i] <= N
        {
            v[A[i]-1] ++;   
        }
    }
    return v;
}