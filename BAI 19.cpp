#include<stdio.h>
#include<conio.h>
void check(float n){
	if (n > 3 && n < 5){
		printf("%.1f ", n);
	}
}
int main(){
	float x, y, z;
	printf("Nhap 3 so thuc x, y, z: ");
	scanf("%f%f%f", &x, &y, &z);
	printf("cac so thuoc khoang (3;5) la: ");
	check(x);
	check(y);
	check(z);
	return 0;
}
