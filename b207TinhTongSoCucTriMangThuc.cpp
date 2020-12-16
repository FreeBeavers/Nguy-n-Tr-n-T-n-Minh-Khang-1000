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

int tinhtongSoCucTri (int a[], int n){
    int tong=0;
    for(int i=0; i<n; i++){

        if( i == 0 && a[i+1] != 0){
            tong+=a[i];
        }else if(( a[i-1] > a[i] && a[i+1] > a[i]) || (a[i-1] < a[i] && a[i+1] < a[i])){
            tong+=a[i];
        }else if( i == (n-1) && a[i-1] != 0){
            tong+=a[i];
        }
    }
    return tong;
}

int main(){
    
	int n;
	int a[MAX];

	nhap(a, n);
	xuat(a, n);

    printf("\nTong cac so cuc tri trong mang thuc tren la: %3d",tinhtongSoCucTri(a,n));

	getch();
	return 0;
}