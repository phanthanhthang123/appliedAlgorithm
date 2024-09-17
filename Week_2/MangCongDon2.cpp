#include<bits/stdc++.h>
using namespace std;

//cho mang 2 chieu,co q truy van=>moi truy van tinh tong cua hcn tu hang x1->x2, cot y1->y2
//Moi truy van mat O(1) -> mang cong don # 2 vong for O(n*m || n^2) ;
int arr[1005][1005];
int prifix[1005][1005];

int sumHcn(int x1,int x2,int y1,int y2){
    int Sum = prifix[x2][y2] - prifix[x1-1][y2] - prifix[x2][y1-1] + prifix[x1-1][y1-1];
    return Sum;
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            prifix[i][j] = prifix[i-1][j] + prifix[i][j-1] - prifix[i-1][j-1] + arr[i][j];
        }
    }
    int q;
    cin>>q;
    while (q--)
    {
        int x1,x2,y1,y2;
        cin>>x1>>x2>>y1>>y2;
        cout<<sumHcn(x1,x2,y1,y2)<<endl;
    }
    

    return 0;
}