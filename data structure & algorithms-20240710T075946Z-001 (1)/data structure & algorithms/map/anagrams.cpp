#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
    string s1,s2;
    cin>>s1>>s2;
    unordered_map<char,int>mp;
    if(s1.length()!=s2.length())
    {
        cout<<"False\n";
        continue;
    }
    for(i=0;i<s1.length();i++)
    {
       mp[s1[i]]++;
    }
  for(i=0;i<s2.length();i++)
    {
       mp[s2[i]]--;
    }
    bool flag=true;
    for(auto p:mp)
    {
        if(p.second!=0)
        {
            flag=false;
            break;
        }
    }
    if(flag)
    cout<<"True\n";
    else
    cout<<"False\n";
}
}
/* sample input
4
a a
b h
stop post
hi hey
*/
