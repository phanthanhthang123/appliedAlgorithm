#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Xin moi nhap n = ");
    scanf("%d",&n);

    int arr[n];

    for(int i = 0;i<=n-1;i++){
        printf("Xin moi nhap phan tu thu %d cua mang: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i =0;i<n;i++){
        sum += arr[i];
    }
    printf("Tong cac phan tu trong mang la: %d",sum);

    return 0;
}
