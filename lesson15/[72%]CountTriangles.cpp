// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    if(A.size()<3) return 0 ;
    vector<vector<int>> v;
    for(int i=0;i<A.size()-2;++i)
    {
        for(int j=i+1;j<A.size()-1;++j)
        {
            for(int k=j+1;k<A.size();++k)
            {
                if( (A[i]+A[j]>A[k]) &&(A[j]+A[k]>A[i]) &&(A[k]+A[i]>A[j]) )
                {
                    v.push_back({i,j,k});
                }
            }
        }
        
    }
    //for(auto a:v) cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    return v.size();
}