#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,c=0,c1=0,c2=0;
    cin>>n;
    float arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>0)
        c++;
        else if(arr[i]==0)
        c2++;
        else
         c1++;
    }
  double a,b,d;
 a=(double)c/n;
 b=(double)c1/n;
 d=(double)c2/n;
  cout<<fixed<<setprecision(6)<<a<<endl;
  cout<<fixed<<setprecision(6)<<b<<endl; 
  cout<<fixed<<setprecision(6)<<d<<endl;
}
/*sample input
STDIN           Function
-----           --------
6               arr[] size n = 6
-4 3 -9 0 4 1   arr = [-4, 3, -9, 0, 4, 1]
*/
