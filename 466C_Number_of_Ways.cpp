#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,in,sumall,count=0,sumtemp=0,ans=0;
    scanf("%lld %lld",&n,&in);
    vector<ll> ar,cnt(n,0);
    sumall=in;
    ar.push_back(in);
    for (int i = 1; i <n; i++)
    {
        scanf("%lld",&in);
        ar.push_back(in);
        sumall+=in;
    }
    if(sumall % 3 != 0) printf("0");
    else{
        sumall=sumall/3;
        for (int i = n-1; i >=0; i--)
        {
            sumtemp+=ar[i];
            if(sumtemp == sumall) cnt[i]=1;
        }
        for (int i = n-2; i >=0 ; i--)
        {
            cnt[i]+=cnt[i+1];
        }
        sumtemp = 0 ;
        for (int i = 0; i < n-2; i++)
        {
            sumtemp+=ar[i];
            if(sumtemp == sumall) ans+=cnt[i+2];
        }
        printf("%lld",ans);
        
        
    }
}