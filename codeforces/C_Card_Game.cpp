#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>alice;
        vector<int>bob;
        for(int i=0;i<n;i++){
            char a;
            cin>>a;
            if(a=='A')alice.push_back(i);
            else bob.push_back(i);
        }
        unordered_map<int,int>A;
        unordered_map<int,int>B;
        for( int i=0;i<alice.size();i++){
            A[alice[i]]++;
        }
        for( int i=0;i<bob.size();i++){
            B[bob[i]]++;
        }
        while(!alice.empty() && !bob.empty()){
            int a = alice.size();
            int b = bob.size();
            if(A.count(0) && A.count(n-1)){
                cout<<"Alice"<<endl;
            }
            else if(B.count(0) && B.count(n-1)){
                cout<<"Bob"<<endl;
            }
            else{
                //0 and n-1 card alag alag bndo par hai
                if(A.count(n-1) && )
            }
        }
    }
    return 0;
}