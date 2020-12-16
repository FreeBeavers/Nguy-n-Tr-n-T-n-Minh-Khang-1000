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
float tinhtongSoLonHonCacSoXungQuangMangThuc (float a[], int n){
    int tong=0;
    for(int i=0; i<n; i++){
		if(i==0 && a[i] > a[i+1]){
			tong+=a[i];
		}else if(a[i] > a[i-1] && a[i] > a[i+1]){
            tong+=a[i];
        }else if(a[i] > a[i-1] && i==n-1){
			tong+=a[i];
		}
    }
    return tong;
}
int main(){

	int n;
	float a[MAX];

	nhap(a, n);
	xuat(a, n);
    printf("\nTong cac so lon hon cac so xung quanh trong cua mang thuoc mang thuc nay la: %0.3f", tinhtongSoLonHonCacSoXungQuangMangThuc(a,n));
		
	getch();
	return 0;
}