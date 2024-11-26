#include<stdio.h>
#include<conio.h>
double luythua(double a, int n){
	double result = 1.0;
	for (int i=0; i<n; i++){
		result *= a;
	}
	return result;
}

double tich(double a, int n){
	double result = 1.0;
	for (int i=0; i<n; i++){
		result *= (a + i);
	}
	return result;
}

double tong(double a, int n){
	double tich = 1.0;
	double result = 0;
	for (int i=0; i<=n; i++){
		tich *= 1/(a + i);
		result += tich;
	}
	return result;
}
int main(){
	double a;
	int n;
	printf("nhap vao so thuc a: ");
	scanf("%lf", &a);
	printf("nhap vao so nguyen n: ");
	scanf("%d", &n);
	double resulta = luythua(a, n);
	printf("gia tri cua bieu thuc %lf^%d la: %.1lf\n", a, n, resulta);
	double resultb = tich(a, n);
	printf("gia tri cua bieu thuc b la: %.1lf\n", resultb);
	double resultc = tong(a, n);
	printf("gia tri cua bieu thuc c la: %.3lf", resultc);
return 0;
}
