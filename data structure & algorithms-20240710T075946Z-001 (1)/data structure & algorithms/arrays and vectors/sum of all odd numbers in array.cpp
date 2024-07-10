#include <bits/stdc++.h>
using namespace std;
int main()
{
  long int n,i,sum=0;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(i=0;i<n;i++)
    {
        if(v[i]%2!=0)
        {
            sum +=v[i];
        }
    }
    cout<<sum<<endl;

    return 0;
}
/*sample input
5
6 9 8 4 3
/*
