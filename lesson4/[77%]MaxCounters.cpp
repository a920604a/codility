// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(int N, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int max_ =0;
    vector<int> res(N,0);
    for(int i= 0;i<A.size() ;++i)
    {
        
        if(A[i]==N+1) 
        {
            for(int k=0;k<res.size();++k) res[k] = max_;
        }
        else
        {
            res[A[i]-1]++;   
            if(i!=0) max_ = max(max_ ,res[A[i]-1]); 
            
        }
    }
    return res;
}