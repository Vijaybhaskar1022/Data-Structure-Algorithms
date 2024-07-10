#include <iostream>
#include<map>
using namespace std;

int main()
{
    int n,i,max=0;
    cin>>n;
    string str;
    map<string,int>mp;
    for(i=0;i<n;i++)
    {
       cin>>str;
       mp[str]++;
    }
   for(auto p:mp)
   {
       if(p.second>=max)
       {
           max=p.second;
           str=p.first;
       }
   }
   cout<<str<<" "<<max<<"\n";
}
