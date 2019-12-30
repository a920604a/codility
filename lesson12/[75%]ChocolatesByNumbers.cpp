// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N, int M) {
    // write your code in C++14 (g++ 6.2.0)
    if(M==1) return N;
    if(N%M==0) return N/M;
    int m[N] = {0};
    int eat = 0 ;
    int res = 0;
    while(m[eat]==0)
    {
        m[eat] = 1;
        res++;
        eat = (eat+M)%N ;
    }    
    return res;
    
    
}
