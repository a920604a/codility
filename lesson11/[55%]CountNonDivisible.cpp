// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<map>
vector<int> solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector <int >res(A.size(),0);
    for(int i=0;i<A.size();++i)
    {
        for(int j=0;j<A.size() ;++j)
        {
            if(i==j) continue;
            if(A.at(j)==1) continue;
            if(A.at(j)>A.at(i)) 
            {
                res.at(i)++;
            }
            else if(A.at(j)<A.at(i) &&A.at(i)%A.at(j)!=0)
            {
                res.at(i)++;
            }
        }
    }
    

    
    return res;
}
