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
		printf("%8d", a[i]);	
	}	
}

bool socoHangChucLaNam (int a){
    a=abs(a);
    a/=10;
    int chuc = a % 10;

    if(chuc == 5){
        return true;
    }
    return false;
}

int tongsocoHangChucLaNam (int a[], int n){

    int tong=0;
    for(int i=0; i<n; i++){
        if(socoHangChucLaNam(a[i])){
            tong +=a[i];
        }
    }
    return tong;
}
int main(){
    
	int n;
	int a[MAX];

	nhap(a, n);
	xuat(a, n);
    printf("\nTong so co HANG CHUC LA 5 la: %d", tongsocoHangChucLaNam(a, n));

	getch();
	return 0;
}