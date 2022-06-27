#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>

int k = 0;

void printCommand(pii a){
    if(a.first != 0) {
        (a.first < 0) ? printf("1 %d L",abs(a.first)) : printf("1 %d R",a.first);
        printf("\n");
    }
    if(a.second != 0){
        (a.second < 0) ? printf("1 %d D",abs(a.second)) : printf("1 %d U",a.second);
        printf("\n");
    }
    printf("2\n");
    if(a.second != 0){
        (a.second < 0) ? printf("1 %d U",abs(a.second)) : printf("1 %d D",a.second);
        printf("\n");
    }
    if(a.first != 0) {
        (a.first < 0) ? printf("1 %d R",abs(a.first)) : printf("1 %d L",a.first);
        printf("\n");
    }
    printf("3\n");
}

bool compare(pii a,pii b){
    if(a.first != b.first) {
        if(a.first <= 0 && b.first <= 0){
            return a.first > b.first;
        }
        else{
            return a.first < b.first;
        }
    }
    else{
        if(a.second <= 0 && b.second <= 0){
            return a.second > b.second;
        }
        else{
            return a.second < b.second;
        }
    }
}

int main(){
    int n,a,b;
    scanf("%d",&n);
    vector<pii> ar;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d",&a,&b);
        ar.push_back(make_pair(a,b));
        if(a != 0) k+=2;
        if(b != 0) k+=2;
        k+=2;
    }
    sort(ar.begin(),ar.end(),compare);
    printf("%d\n",k);
    for(auto i : ar){
        printCommand(i);
        // cout<<i.first<<" "<<i.second<<endl;
    }
}