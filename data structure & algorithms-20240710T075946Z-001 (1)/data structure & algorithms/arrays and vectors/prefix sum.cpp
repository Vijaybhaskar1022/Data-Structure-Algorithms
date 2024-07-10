
//prefix sum
#include <iostream>
#include <vector>
using namespace std;
int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    int t,n,i,q,l,r,sum;
    cin>>t;
    while(t--) 
    {
      cin>>n;
        vector<long int> v(n);
        for (i=0; i<n;i++) 
        {
            cin>>v[i];
        }
        for(i=1;i<n;i++) 
        {
            v[i]+=v[i-1];
        }
       cin>>q;
       while(q--)
       {
          cin>>l>>r;
            l--;r--;
            if(l==0)
                cout<<v[r]<<"\n";
            else
                cout<<v[r]-v[l-1]<<"\n";
        }
    }
    return 0;
}
/*sample input
2
4
10 20 30 40
2
1 4
2 3
5
1 1 1 1 1 
3
1 2
2 5 
5 5 
/*
