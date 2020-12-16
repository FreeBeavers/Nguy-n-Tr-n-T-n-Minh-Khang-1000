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
		printf("%8d", a[i]);	
	}	
}

bool kiemtraSoDoiXung (int a){
    int truoc=a;
    int sau=0;
    int donvi=0;
    
    while(a != 0){
        donvi = a%10;
        sau= sau*10 + donvi;
        a/=10;
    }
    
    if(truoc == sau){
        return true;
    }
        return false;
}

int tinhtongSoDoiXung (int a[], int n){
    int tong=0;
    for(int i=0; i<n; i++){
        if(kiemtraSoDoiXung(a[i])){
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

    printf("\nTong cua cac so doi xung cua mang nguyen tren: %d", tinhtongSoDoiXung(a,n));

	getch();
	return 0;
}