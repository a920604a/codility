// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<stack>
int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size()==1) return 1;
    int c=0;
    for(int i:B) c+=i;
    if(c==0 || c==B.size()) return B.size();
    stack<int> s;  //stack 0 
    //s.push(A[0]);
    stack<int> eat;  //stack 1 
    int res=A.size();
    int j =0;
    int k=A.size()-1;
    while(A[j]==0) j++;
    while(A[k]==1) k--;
    for(int i=j;i<=k;++i)  // eat or be eaten or keep to swim
    {
        if(B[i]==0)
        {
            while(!eat.empty())
            {
                if(A[i] >eat.top())
                {
                    res--;
                    eat.pop();
                }
                else if(A[i]<eat.top())
                {
                    res-- ;
                    break;
                }
            }
        }
        else if(B[i]==1)
        {
            eat.push(A[i]);
        }
    }
    return res;
}