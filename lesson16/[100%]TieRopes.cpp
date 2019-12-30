// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int K, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(K==1) return A.size() ;
    int res= 0;
    int temp =0;
    for(int i=0;i<A.size() ; ++i)
    {
        temp +=A[i];
        if(A[i]>= K )
        {
            res++;
            temp = 0;
        }
        else if(temp>=K)
        {
            res++;
            temp =0;
        }
    }
    return res;
}