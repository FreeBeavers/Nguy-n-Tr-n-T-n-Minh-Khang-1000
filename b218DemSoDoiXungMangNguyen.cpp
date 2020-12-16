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
		printf("%5d", a[i]);	
	}	
}

bool kiemtraSoDoiXung( int n){
    int dau=n;
    int sau=0;
    int donvi=0;

    while( n != 0 ){
        donvi = n%10;
        sau= sau*10 +donvi;
        n/=10;
    }
    
    if( dau == sau){
        return true;
    }
    return false;
}

int demSoDoiXung (int a[], int n){
    int dem=0;
    for(int i=0; i<n; i++){
        if(kiemtraSoDoiXung(a[i])){
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

	getch();
	return 0;
}
