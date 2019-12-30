// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <climits>  
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    for(int i = 1;i<A.size();++i)
    {
        int key = A[i];
        int j = i-1;
        while(j>=0 && key<A[j])
        {
            A[j+1] = A[j];   
            j--;
        }
        A[j+1] = key;
    }

    int n=1;
    for(auto a: A) 
    {
        if(a!=n) return 0;
        n++;
    }
    return 1;
}