// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<climits>
#include<map>
vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    // write your code in C++14 (g++ 6.2.0)
    int m = min(P.size(),Q.size());
    vector<int> res;
    map<char,int> dict ={{'A' , 1},{'C',2},{'G',3},{'T',4}};
    for(int i =0;i<m ;++i)
    {
        int s = P[i];
        int e = Q[i];
        int min_factor = INT_MAX;
        for(int j =s;j<=e ;++j)
        {
            min_factor = min(dict[S[j]] , min_factor) ;
        }
        res.push_back(min_factor);
    }
    return res;
}