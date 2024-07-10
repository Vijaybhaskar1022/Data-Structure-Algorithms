//A - Max element in the array
#include <bits/stdc++.h>
using namespace std;
int main()
{
  long  int n,i,max;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    max=v[0];
    for(i=0;i<n;i++)
    {
        if(v[i]>max)
        max=v[i];
    }
    cout<<max<<endl;

    return 0;
}
/*sample input and output
	5
	-2 -19 8 15 4
*/
