//B - Reverse array
#include <bits/stdc++.h>
using namespace std;
int main()
{
  long int n,i;
    cin>>n;
    vector<long int>v(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(i=0;i<n/2;i++)
    {
        swap(v[i],v[n-1-i]);
    }
    for(long int a:v)
    {
        cout<<a<<" ";
    }

    return 0;
}
/*sample input
	5
	2 19 8 15 4
	*/
