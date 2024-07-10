#include <iostream>
#include<unordered_set>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    string str;
    cin>>str;
    unordered_set<char>s;
    for(i=0;i<n;i++)
    {
        str[i]=tolower(str[i]);
        s.insert(str[i]);
    }
    if(s.size()==26)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}
