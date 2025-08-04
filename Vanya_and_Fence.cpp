#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, h;
    cin >>n>>h;
    int totalWith = 0;
    for(int i = 0; i<n; i++)
    {
        int a;
        cin>>a;
        if(a>h)
        {
            totalWith += 2;
        }else{
            totalWith += 1;
        }
    }
    cout<<totalWith;
    return 0;
}