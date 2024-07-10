#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k,i,x,a,b,count=0;
    priority_queue<int,vector<int>,greater<int>> pq;
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>x;
        pq.push(x);
    }
    while(pq.size()>1 && pq.top()<k){
        a=pq.top(); pq.pop();
        b=pq.top(); pq.pop();
        pq.push(a+2*b);
        count++;
    }
    if(pq.top()<k)
        cout<<-1;
    else
        cout<<count;
}

