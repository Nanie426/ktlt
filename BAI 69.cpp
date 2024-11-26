#include <stdio.h>

void nhapMang(int A[], int *n){
    for (int i=0; i<*n; i++){
        scanf("%d", &A[i]);
    }
}

void xoaPhanTu(int A[], int *n, int k){
    if(k < 0 || k >= *n){
        printf("Chi so khong hop le!\n");
    return;
    }
    for(int i = k; i < *n - 1; i++){
        A[i] = A[i + 1];
    }
    (*n)--;
}

void xuatMang(int A[], int n){
    for(int i = 0; i < n; i++)
        printf("%d ", A[i]);
}

int main(){
    int n, k;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    int A[100];
    nhapMang(A, &n);
    printf("Nhap chi so cua phan tu can xoa: ");
    scanf("%d", &k);
    xoaPhanTu(A, &n, k);
    xuatMang(A,n);
    return 0;
}
