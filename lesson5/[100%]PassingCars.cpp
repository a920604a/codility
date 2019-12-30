// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int c0 = 0 ;
    int c1 = 0 ;
    int res = 0 ;
    for(int a:A)
    {
        if(a==0) c0++;
        else c1++;
    }
    for(int i = A.size()-1 ; i>=0;--i)
    {
        if(A[i] == 1)
        {
            res =res + c0;    
        }
        else //A[i]==0
        {
            c0--;
        }
        
    }
    return abs(res)>1000000000 ? -1:res;
}