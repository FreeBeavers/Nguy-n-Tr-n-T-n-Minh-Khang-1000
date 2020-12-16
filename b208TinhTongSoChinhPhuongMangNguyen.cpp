#include<stdio.h>
#include<conio.h>
#include<math.h>

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

int kiemtrasochinhphuong (int a){
    return sqrt((float)a) == (int)sqrt((float)a);
}

int tinhtongsochinhphuong (int a[], int n){

    int tong=0;
    for(int i=0; i<n; i++){
        if(kiemtrasochinhphuong(a[i])==1){
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
    
    printf("\nTong cac so chinh phuong trong mang nguyen la: %d", tinhtongsochinhphuong(a, n));
	getch();
	return 0;
}