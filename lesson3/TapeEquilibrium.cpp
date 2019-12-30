// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <climits>
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int total=0;
    for(int i:A) total+= i;
    int res = INT_MAX ,temp =0;
    for(int i:A)
    {
        temp +=A[i];
        res = min(res, abs(2*temp-total)) ;      
    }
    return res;
}
