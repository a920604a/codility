
// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <math.h> 
#include<algorithm>
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.empty()) return -1;
    if(A.size() == 1) return 0;
    vector<int> B = A;
    sort(B.begin(),B.end());
    int count =0;
    int half = ceil(A.size()/2) ;
    int value =B[half] ;
    for(int i=0 ;i<B.size() ;++i)
    {
        if(value == B[i]) count++;
        else count-- ;
    }
    if(count<=0) return -1;
    int res =0;
    int i;
    for(i =0;i<A.size() ;++i)
    {
        if(A[i] == value ) break;
    }
    return i;
}



