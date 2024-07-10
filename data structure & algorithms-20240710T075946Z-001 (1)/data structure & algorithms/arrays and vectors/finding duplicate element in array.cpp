//D - Find duplicate element in array
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
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[i]==v[j])
            cout<<v[i]<<" ";
            else
            continue;
        }
    }

    return 0;
}
/*sample input
6
5 4 10 9 21 10
*/
