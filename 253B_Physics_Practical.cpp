#include<bits/stdc++.h>
using namespace std;

vector<int>ar;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,in,mi;
    cin>>n;
    mi=n;
    for (int i = 0; i < n; i++)
    {
        cin>>in;
        ar.push_back(in);
    }
    sort(ar.begin(),ar.end());
    int l=0,r=0;
    if(ar.front()*2 == ar.back()){
        cout<<0;
        exit(0);
    }
    else while(r!=n){
        // cout<<ar[l]<<" "<<ar[r]<<endl;
        if(ar[l]*2 >= ar[r])r++;
        else l++; 
        // cout<<mi<<endl;
        mi = min(mi,n-r+l);
    }   
    cout<<mi;
}