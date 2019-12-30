// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<algorithm>
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size()<3) return false;
    sort(A.begin(),A.end());
    
    for(int i =0 ;i<A.size()-2;++i)
    {
        int total = A[i]+A[i+1]+A[i+2];
        if((total-A[i]>A[i] && total-A[i+1]>A[i+1] )&& total-A[i+2]>A[i+2]) return true;
    }
    return false;
}