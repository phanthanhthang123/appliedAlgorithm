#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
const int oo = 1e9 + 7;
const int maxN = 999 + 100;
int arr[maxN][maxN];
int n,m,r,c;
queue<ii> qe;
int dx[] = {1 , 0 , -1 , 0},
    dy[] = {0, 1 , 0 , -1 } ; // phai len trai xuong

void initArr(){
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>arr[i][j];
}
int solve(){
    qe.push(ii(r,c));
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    cin>>n>>m>>r>>c;
    initArr();

    int ans = solve();
    cout<<ans;

    return 0;
}
