#include<bits/stdc++.h>
using namespace std;

int n, M;
int arr[1005]; // a1->an
int x[1005];   // x1-> xn
long long f = 0;
int cnt = 0;

void init() {
    cin >> n >> M;
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
}

// xet phan tu thu k tu (a1->ak)
void Try(int k) {
    // duyet theo x1,x2,....xi
    for(int v = 1; v <= M / arr[k]; v++) {
        x[k] = v;
        long long new_f = f + arr[k] * v;
        
        if(new_f <= M) {
            if(k < n) {
                f = new_f;
                Try(k + 1);
                f = f - arr[k] * v;  // Backtrack
            } else if(new_f == M) {
                cnt++;
            }
        } else {
            break;  // Optimize: stop if exceeding M
        }
    }
}

int main() {
    init();
    Try(1);
    cout << cnt;
    
    return 0;
}
