#include<stdio.h>

void nhap_mang(int A[], int *n){
    printf("Nhap so luong phan tu: ");
    scanf("%d", &(*n));
    printf("Nhap cac phan tu: ");
    for (int i = 0; i < *n; i++) {
        scanf("%d", &A[i]);
    }
}

void xuat_mang(int A[], int n){ 
	for(int i=0; i<n; i++){
		printf("%d ", A[i]);
	}
}

long long UCLNof2so(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

long long UCLN(int A[], int n){
	int uc = A[0];
	for(int i=1; i<n; i++){
		uc = UCLNof2so(A[i],uc);
	}
	return uc;
}

long long Max(int A[], int n){
	long long Max = A[0];
	for(int i=1; i<n; i++)
		if(A[i] > Max){
			Max = A[i];
		}
	return Max;
}

long long BCNN(int A[], int n){
	long long Boiso = Max(A,n);
	for(int i=0; i<n; i++){
		if(Boiso % A[i] != 0){
			Boiso += Max(A,n);
			i = -1;
		}
	}
	return Boiso;
}

int main(){
    int A[100000], n;
    nhap_mang(A, &n);
    printf("\nCac phan tu trong mang: ");
    xuat_mang(A, n);
    printf("\nUCLN cua mang: %lld\n", UCLN(A, n));
    printf("BCNN cua mang: %lld\n", BCNN(A, n));
    return 0;
}


	




	


