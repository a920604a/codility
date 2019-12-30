// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
  int res =(1000000000+1)*2+1;
   int i;
    for(i=1 ; i*i<N ; ++i)
    {
        if(N%i==0)
        {
            res = min(res, 2* (i + (N/i)  ) );
        }
    }
    if(i*i ==N) res =min(res , 2*(i+i)) ;
    return res;
}
