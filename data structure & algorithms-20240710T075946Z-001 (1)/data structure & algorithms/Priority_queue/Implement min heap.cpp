#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t,val; cin>>t;
    priority_queue <int, vector<int>, greater<int> > pq; 
   while(t--){
       
       string str;
      cin>>str;
       if(str=="delMin"){
           if(!pq.empty())
          pq.pop();
           }
           else if(str=="getMin")
           {
               if(!pq.empty())
               cout<<pq.top()<<endl;
               else
               cout<<"Empty"<<"\n";
           }
       else{
         cin>>val;
         pq.push(val);
       }
   }
}
