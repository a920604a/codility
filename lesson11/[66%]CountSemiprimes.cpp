// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(int N, vector<int> &P, vector<int> &Q) {
    // write your code in C++14 (g++ 6.2.0)
    vector<bool> v(N+1,true);
    v[0] = false; // 1 is not prime
    v[1] = false;
    for(int i =2;i*i<=N ; ++i)
    {
        if(!v[i]) continue;   // false  >> continue
        for(int j=2;i * j<=N ;++j)
        {
            v[i*j] = false;
        }
    }
    vector<int> prime;
    for(int i=0;i<N+1;++i)
    {
        if(v[i]) prime.push_back(i);
    }
    vector<bool> semiprime(N+1,false);
    
    for(int i=0;i<prime.size();++i)
    {
        for(int j=0;j<prime.size() && prime[i]*prime[j]<=N;++j)
        {
            semiprime[prime[i]*prime[j]] =true;
        }
    }
    vector<int> res;
    int max_ ;
    for(int i=0;i<P.size(); ++i)
    {
        max_ =0; 
        for(int j =P[i] ;j<=Q[i] ;++j)
        {
            
            if(semiprime[j]) 
            {
                max_++;
            }
        }
        res.push_back(max_);
    }
    return res;
  
    
}