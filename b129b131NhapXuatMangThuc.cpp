#include<stdio.h>
#include<conio.h>

#define MAX 100


void nhap (float a[], int &n){

	do{
		printf("Nhap so phan tu (0 < n < 100): ");
		scanf("%d",&n);

		if (n<0 || n>100){
			printf("\nSo phan tu toi da la 100!\nVui long nhap lai!\n");
		}
		}while(n<0 || n>100);

		for(int i=0; i<n; i++){
			printf("a[%d]= ", i);
			scanf("%f", &a[i]);
		}

	}

void xuat(float a[], int n){

	printf("Mang THUC vua nhap la:\n");

	for(int i=0; i<n; i++){
		printf("%8.2f", a[i]);
		}
}

int main(){

	int n;
	float a[MAX];

	nhap(a, n);
	xuat(a, n);
		
	getch();
	return 0;
}