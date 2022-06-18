#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>

int n,m,k,l,op;
pii dot = make_pair(1,1);

void find(int idx){
    int need;
    vector<pii> ar;
    if(idx == k - 1) need = n*m - (k-1)*l;
    else need = l;

    while (need > 0)
    {
        ar.push_back(dot);
        dot.second+=op;
        if(dot.second > m || dot.second < 1){
            op *= -1;
            dot.first++;
            dot.second+=op;
        }
        need--;
    }
    cout<<ar.size()<<" ";
    for(auto p : ar){
        cout<<p.first<<" "<<p.second<<" ";
    }
    cout<<endl;
}

int main(){
    cin>>n>>m>>k;
    l = (n*m)/k;
    op = 1;
    for (int i = 0; i < k; i++) find(i);   
}