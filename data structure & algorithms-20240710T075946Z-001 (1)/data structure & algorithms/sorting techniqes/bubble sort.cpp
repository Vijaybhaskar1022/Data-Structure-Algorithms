#include<bits/stdc++.h>
using namespace std;
int main(){
    int te;
    cin>>te;
    while(te--)
    {
        int n,c=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0 ; i<n; i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1-i;j++)
            {
                if(v[j]>v[j+1])
                {
                    swap(v[j],v[j+1]);
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
}
