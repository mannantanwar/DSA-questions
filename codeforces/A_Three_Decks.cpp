#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>nums(3);
        for( int i=0;i<3;i++){
            cin>>nums[i];
        }
        int a= nums[0];
        int b = nums[1];
        int c =nums[2];
        int diff= b-a;
        int nc = c-diff;
        int extra=nc-b;
        if(nc>=b && extra%3==0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}