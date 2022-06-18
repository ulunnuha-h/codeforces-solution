#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,cut=0;
    scanf("%d",&n);
    vector<int> ar(n);
    for(int &i : ar) cin>>i;

    for (int i = 1; i < n; i++)
    {
        if(ar[i] < ar[i-1]){
            if(!cut) cut = n - i;
            else{
                printf("-1");
                exit(0);
            }
        }
    }
    if(ar.back() > ar.front() && cut != false) printf("-1");
    else printf("%d",cut);
}