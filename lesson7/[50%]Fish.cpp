// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<stack>
#include<set>
int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    
    if(A.size()==1) return 1;  //one fish
    int c= 0 ;
    for(int i:B) c+=i;
    if(c==B.size() || c==0) return A.size(); //all fish run to the smae direction
    set<int> s;
    for(int i =0;i<A.size();++i)
    {
        if(B[i]==1)
        {
            for(int j=i+1;j<A.size();++j)
            {
                if(B[j]==0 && A[j]<A[i])  //fish i eat fish j
                {
                    s.insert(j);
                }
                else if(B[j]==0 && A[j]>A[i] ) //fish i be eaten by fish j
                {
                    s.insert(i);   
                }
            }
        }
    } 
    return A.size() - s.size();
}

