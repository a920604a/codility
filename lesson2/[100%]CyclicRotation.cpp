// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size()==0 || K==0) return A;
    int start = A.size()-K%A.size();
    vector<int> v;
    for(int i=0;i<A.size();++i)
    {
        v.push_back(A[(start + i)%A.size()]) ;  
    }
    return v;
}

