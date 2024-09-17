#include<bits/stdc++.h>
using namespace std;

//cho 2 mang da sap xep, tron lai va sap xep
void xep2Mang(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int &x : a) cin>>x;
    for(int &x : b) cin>>x;
    int i=0,j=0;
    while(i<n && j<m){
        if(a[i] <= b[j]){
            cout<<a[i]<<" "; 
            i++;
        }else{
            cout<<b[j]<<" ";
            j++;
        }
    }
    while(i<n){
        cout<<a[i]<<" ";
        i++;
    }
    while(j<m){
        cout<<b[j]<<" ";
        j++;
    }
}
//co bao nhieu ptu be hon b[j] o mang a[]
void demMang(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int &x : a) cin>>x;
    for(int &x : b) cin>>x;
    int i=0,j=0;
    while(i<n && j<m){
        if(a[i] < b[j]){
            i++;
        }else{
            cout<<i<<" ";
            j++;
        }
    }
    while(j<m){
        cout<<i<<" ";
        j++;
    }
}

int main(){
    // xep2Mang();
    demMang();
    return 0;
}