// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int getMax(vector<int> &A, int l ,int r)
{
    if(l>=r) return A[l];
    int mid = (l+r)/2;
    int lmax = getMax(A ,l , mid-1);
    int rmax = getMax(A , mid+1 ,r);
    int mmax = A[mid];
    int temp =mmax ;
    for(int i =mid-1 ; i>=l ;--i)
    {
        temp += A[i];
        mmax = max(temp ,mmax);
    }
    temp = mmax;
    for(int j= mid+1 ; j<=r; ++j)
    {
        temp += A[j];
        mmax = max(temp , mmax);
    }
    
    
    return max(mmax , max(rmax , lmax));
    
}

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    return getMax(A , 0 , A.size()-1);
    
}