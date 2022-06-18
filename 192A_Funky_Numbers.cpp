#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k=1;
    vector<int> ar;
    scanf("%d",&n);
    int cek = (k * (k + 1))/2;
    while(cek <= 1000000000){
        ar.push_back(cek);
        k++;
        cek = (k * (k + 1))/2;
    }
    
    int i = 0;
    bool exist = false;
    while(ar[i] <= n){
        int j = n - ar[i];
        auto it = lower_bound(ar.begin(),ar.end(),j)-ar.begin();
        if(ar[it] == j){
            exist = true;
            break;
        }
        i++;
    }
    if(exist) printf("YES");
    else printf("NO");

}