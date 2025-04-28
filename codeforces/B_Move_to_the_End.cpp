#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        vector<long long>prefix;
        vector<long long>ans;
        long long sum=0;
        for( int i=0;i<n;i++){
            sum+=nums[i];
            prefix.push_back(sum);
            pq.push({nums[i],i});//pq created
        }
        //now for every k ki value 
        for( int k=0;k<n;k++){
            if(k==n-1){
                // cout<<"k=n-1 thus sum is all "<<prefix[n-1];
                ans.push_back((long long)prefix[n-1]);
                continue;
            }
            int count =0;
            vector<pair<int,int>>store;
            while(!pq.empty() && count<=k){
                auto a= pq.top();
                int maxi = a.first;
                int index =a.second;
                if(index!=n-k-1){
                    if(index> n-k-1 && index<n){
                        count++;
                        pq.pop();
                        // cout<<"maxi elemnt is inside the range thus storing it inside the vector"<<endl;
                        store.push_back(a);
                        continue;
                    }else{
                        // cout<<"maxi element in not inside the range "<<n-k-1<<"to "<<n-1<<endl;
                        // cout<<"pushing "<<prefix[n-1]-prefix[n-k-1] + maxi<<endl;
                        ans.push_back((long long)prefix[n-1]-prefix[n-k-1] + maxi);
                        break;
                    }
                }
                else{
                    //take the sum as it is
                    // cout<<"maxi element is ont the edge thus storing the sum as it is"<<endl;
                    // cout<<"the sum is "<<prefix[n-1]-prefix[n-k-2]<<endl;
                    ans.push_back( (long long)prefix[n-1]-prefix[n-k-2]);
                    break;
                }
            }
            for( int i=0;i<store.size();i++){
                pq.push(store[i]);
            }
            store.clear();
        }
        for( int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}