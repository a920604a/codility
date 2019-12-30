// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<set>
int solution(int M, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int l=0;
    int r=A.size()-1;
    set<int> s;
    vector<vector<int>> v;
    int res =0 ;
    for(int i=0;i<A.size();++i)
    {
        
        int l =i;
        
        while(l<=r)
        {
            if(s.find(A[l])!= s.end()) break;
            else s.insert(A[l]);
            l++;   
        }
        for(int j=i;j<l;++j)
        {
            //v.push_back({i ,j});
            res++ ;
            if(res>1000000000) return 1000000000;
        }
        s.clear();
    }
    //for(auto a:v) cout<<a[0]<<" "<<a[1]<<endl;
    //return v.size() ;
    return res;
}