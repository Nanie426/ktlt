#include<stdio.h>
#include <limits.h>

#define MAX 100
void Matran(int A[MAX][MAX], int* n){
	printf("nhap cap cua ma tran: ");
	scanf("%d", n);
	if (*n <= 0 || *n > MAX){
        printf("Cap ma tran khong hop le.\n");
    return;
    }
	for(int i=0; i<*n; i++){
		for(int j=0; j<*n; j++){
			printf("A[%d][%d]= ", i, j);
			scanf("%d", &A[i][j]);
		}
	}
}

void xuatMatran(int A[MAX][MAX], int n) {
    printf("Ma tran A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
}

int TimMAX(int A[MAX][MAX], int n, int hang){
	int max = INT_MIN;
	for(int j=0; j<n; j++){
		if(A[hang][j] > max){
			max = A[hang][j];
		}
	}
	return max;
}

int SUMDuongCheoPhu(int A[MAX][MAX], int n){
	int sum = 0;
	for(int i=0; i<n; i++){
		int max = TimMAX(A, n, i);
		A[i][n-1-i] = max;
		sum += max;
	}
	return sum;
}

int main(){
	int A[MAX][MAX], n;
    Matran(A, &n);
    xuatMatran(A, n);
    int SUM = SUMDuongCheoPhu(A, n);
    printf("\nMa tran sau khi thay doi:\n");
    xuatMatran(A, n);
    printf("\nTong cac phan tu lon nhat cua tung hang: %d\n", SUM);
return 0;
}
