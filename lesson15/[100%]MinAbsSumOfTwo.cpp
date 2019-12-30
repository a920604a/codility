// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<set>
#include<algorithm>
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    sort(A.begin() ,A.end());
    set<int>s;
    int res = abs(A[A.size()-1]*2);
    for(int i:A)
    {
        if(i==0) return 0;
    }
    int l=0;
    int r = A.size()-1;
    while(l<=r)
    {
        if(l!=r && abs(A[l]) == abs(A[r] )) return 0 ;
        else res = min(res ,abs(A[l]+A[r]) ) ;
        
        if(abs(A[l]) > abs(A[r])) l++;
        else  r--;
    }
    return res;
}
