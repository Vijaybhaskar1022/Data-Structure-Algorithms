#include <bits/stdc++.h>

using namespace std;

int main()
{
  long  int min=0,max=0;
    vector<int>v(5);
    for(int i=0;i<5;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end()); 
     for(int i=0;i<5;i++)
    {
        cin>>v[i];
        if(i!=4)
        {
            min +=v[i];
        }
        if(i!=0)
        max +=v[i];
    }
    cout<<min<<" "<<max<<endl;
}

