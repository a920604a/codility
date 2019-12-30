// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int min_pos=0 ;
    int avg = 100001;
    for(int i = 0;i<A.size()-2 ;++i)
    {
        if((A[i]+A[i+1])/2 <avg)
        {
            min_pos = i;
            avg = (A[i]+A[i+1])/2;   
        }
        else if ((A[i]+A[i+1]+A[i+2])<avg*3)
        {
            min_pos = i;
            avg = (A[i] + A[i+1] +A[i+2])/3;
        }

    }
    return min_pos;
}