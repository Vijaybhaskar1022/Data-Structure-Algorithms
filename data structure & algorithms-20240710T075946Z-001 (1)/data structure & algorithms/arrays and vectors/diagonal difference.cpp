#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum=0,sum1=0,dif;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            if(i==j)
            {
                sum +=arr[i][j];
            } 
            if(i+j==n-1)
            {
                sum1 +=arr[i][j];
             } 
        }
    }
    if(sum>sum1)
    cout<<sum-sum1<<endl;
    else
    cout<<sum1-sum<<endl;
}
/*sample input
3
11 2 4
4 5 6
10 8 -12
*/
