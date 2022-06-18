#include<bits/stdc++.h>
using namespace std;

int m;
vector<int> av,all;

void search(int bal, int bfr, int turn){
    int now = turn % 2;
    if(turn == m+1){
        cout<<"YES"<<endl;
        for(int i : all) cout<<i<<" ";
        exit(0);
    }
    else for (int i = 0; i < av.size(); i++)
    {
        if(av[i]==bfr) continue;
        else{
            int val = av[i];
            if(now == 1) val*=-1;

            if(av[i] > abs(bal)){
                all.push_back(av[i]);
                search(bal+val,av[i],turn+1);
                all.pop_back();
            }
        }
    }
    
}

int main(){
    string s;
    cin>>s>>m;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='1') av.push_back(i+1);
    }
    search(0,0,1);
    cout<<"NO";
}