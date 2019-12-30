// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.empty()) return 0 ;
    int res = 0 ;
    
    for(int i =0;i<A.size();++i)
    {
        for(int j= 0;j<A.size();++j)
        {
            if(i==j) continue;
            else if( abs(i-j) <=A[i]+ A[j]) res++;
            if(res>20000000) return -1;
        }
    }
    res/=2;
    return res> 10000000? -1:res;
}