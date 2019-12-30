// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.empty() ||A.size()==1) return 0;
    int profit = 0;
    for(int i=0;i<A.size()-1;++i)
    {
        int sum = 0;
        for(int j = i+1 ; j<A.size() ; ++j)
        {
            sum  = max(sum ,A[j]-A[i]);   
        }
        profit = max(profit , sum) ;
    }
    return profit;
}
