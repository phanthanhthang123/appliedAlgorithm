#include<bits/stdc++.h>

using namespace std;

//cho day A[n] gom n phan tu, 1 truy van, 1 truy van in ra tong tu chi so l->r 
int sumlr(int arr[],int l,int r){
    --l;--r;
    if(l==0) return arr[r];
    return arr[r] - arr[l-1];
}

int main(){
    int n;
    cin>>n;
    int arr[n],F[n];
    for(int &x : arr) cin>>x;
    for(int i=0;i<n;i++){
        if(i==0) F[i] = arr[i];
        else{
            F[i] = F[i-1] + arr[i];
        }
    }
    // for(int x: arr){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // for(int x: F){
    //     cout<<x<<" ";
    // }
     int q;cin>>q;
     while(q--){
         int l,r;
         cin>>l>>r;
         cout<<sumlr(F,l,r)<<endl;
     }    
    return 0;
}
