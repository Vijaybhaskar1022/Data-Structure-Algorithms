#include <iostream>
#include<queue>
#include<vector>
using namespace std;
int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    int n,k,i;
    cin>>n>>k;
    priority_queue<int>pq;
    vector<int>v(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
        pq.push(v[i]);
    }
    for(i=0;i<n;i++)
    {
        int sum=0;
     for(int j=i;j<n;j++)
       {
           sum +=v[j];
           pq.push(sum);
       }
    }
    for(i=0;i<k;i++)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
