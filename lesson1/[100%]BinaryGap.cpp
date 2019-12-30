// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<vector>
int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> v;
    while(N)
    {
        if(N&1) v.insert(v.begin(),1);
        else v.insert(v.begin(),0);
        N =N>>1;
    }
    int res = 0 , temp = 0;
    for(int i=0;i<v.size();++i)
    {
        if(v[i]==1) 
        {
            res = max(res , i-temp-1);
            temp = i;
        }
    }
    return res;
}
