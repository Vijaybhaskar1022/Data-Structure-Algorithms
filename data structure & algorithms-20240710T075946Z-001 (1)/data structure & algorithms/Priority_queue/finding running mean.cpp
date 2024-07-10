#include <iostream>
#include<bits/stdc++.h>
#include<queue>
#include<iomanip>
using namespace std;

int main() {
    int n,i,a;
    float b,c;
    cin>>n;
    priority_queue<float>pq;
    priority_queue<float,vector<float>,greater<int>>p1;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(pq.empty()||a<=pq.top())
        {
             pq.push(a);
        }
        else
        {
            p1.push(a);
        }
    if(pq.size() > p1.size()+1)
      {
        p1.push(pq.top());
        pq.pop();
      }
      else if(p1.size()>pq.size())
      {
         pq.push(p1.top());
         p1.pop();
      }
     if(pq.size() > p1.size())
     {
          b=pq.top();
        cout<<fixed << setprecision(1)<<b<<"\n"; 
     }
     else 
     {
         c=(pq.top()+p1.top())/2;
        cout<<fixed << setprecision(1)<<c<<"\n";
     }
    }
}
