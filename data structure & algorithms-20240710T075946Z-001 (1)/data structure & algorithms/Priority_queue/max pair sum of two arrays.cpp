#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k,i,j;   cin>>t;
    while(t--){
    cin>>n>>k;
    vector<int> a(n),b(n),res;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end(),greater<int>());
    sort(b.begin(),b.end(),greater<int>());
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(pq.size()<k){
                pq.push(a[i]+b[j]);
            }
            else if(a[i]+b[j]>pq.top()){
                pq.pop();
                pq.push(a[i]+b[j]);
            }
            else{
                break;
            }
        }
    }
    while(!pq.empty()){
        res.push_back(pq.top());
        pq.pop();
    }
    for(i=k-1;i>=0;i--){
        cout<<res[i]<<" ";
    }
    cout<<"\n";
    }
}


