#include<stdio.h>
#include<conio.h>

#define MAX 100

void nhap (int a[], int &n){
	
	do{
		printf("Nhap so phan tu (0 < n < 100): ");
		scanf("%d", &n);

		if(n<0 || n>100){
			printf("\nSo phan tu toi da la 100!\nVui long nhap lai!\n");
		}
	}while(n<0 || n>100);
	
	for(int i=0; i<n; i++){
		printf("\na[%d]= ", i);
		scanf("%d", &a[i]);
	}
}

void xuat (int a[], int n){
	
	printf("Mang NGUYEN vua nhap la: \n");
	
    for(int i=0; i<n; i++){
		printf("%3d", a[i]);	
	}	
}

int demGiaTriTanCung5 (int a[], int n){
    int dem=0;
    int donvi;
    for(int i=0; i<n; i++){
        donvi= a[i]%10;
        if(donvi == 5){
            dem+=1;
        }
    }
    return dem;
}
int main(){
    
	int n;
	int a[MAX];

	nhap(a, n);
	xuat(a, n);

    printf("\nSo gia tri cac tan cung bang la 5 trong mang nguyen tren la: %6d",demGiaTriTanCung5(a,n));

	getch();
	return 0;
}
