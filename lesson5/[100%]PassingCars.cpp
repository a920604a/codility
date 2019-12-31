// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    int total =0;
    for(int i:A) total+=i;
    int res = 0;
    for(int i=0;i<A.size()-1;++i)
    {
        total -=A[i];
        if(A[i]==0)
        {
            res +=  total;
        
        }
        if(res>1000000000) return -1;
        
    }
    return res;
}