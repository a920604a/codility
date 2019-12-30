// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int A, int B, int K) {
    // write your code in C++14 (g++ 6.2.0)
    int res = 0 ;
   // map<int,bool> m = {B-A+1 , False};
    for(int i=A;i<=B ;++i)
    {
        if(i%K==0) res++;
        /*for(int j =i;i*j<B+l;++j)
        {
            m[j*k] = true;
        }*/  
    }
    return res;
    
}