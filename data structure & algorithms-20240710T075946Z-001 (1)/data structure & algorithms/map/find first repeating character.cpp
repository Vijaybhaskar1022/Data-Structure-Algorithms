#include <iostream>
#include<map>
#include<unordered_set>
using namespace std;

int main()
{
    int n,t,i,max=0;
    cin>>t;
    while(t--)
    {
    string str;
    cin>>str;
    n=str.length();
   map<char,int>mp;
    for(i=0;i<n;i++)
    {
       mp[str[i]]++;
    }
  char ch='.';
   for(i=0;i<n;i++)
   {
       if(mp[str[i]]>1)
       {
          ch=str[i];
          break;
       }
   }
   cout<<ch<<"\n";
}
}
/* sample input
4
datastructures
algorithms
smartinterviews
hackerrank
*/
