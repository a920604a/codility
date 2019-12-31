// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<algorithm>
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size()<3) return 0 ;
    sort(A.begin() ,A.end());
    int i=0,j=1,k=2;
    while(k<A.size())
    {
        
        if( (A[i]>A[k]-A[j]) &&A[i]>0 ) return 1;
        else
        {
            i++;
            j++;
            k++;
        }
    }
    return 0;
    
}