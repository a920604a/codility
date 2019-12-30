// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    int res=0;
    int temp ;
    for(int i=0;i<A.size() ;++i)
    {
        if(i==0 || temp<A[i] )
        {
            temp = B[i];
            res++;
        }
        else continue;
    }
    return res;
    
}s