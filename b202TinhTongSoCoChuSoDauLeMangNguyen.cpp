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

bool socoChuSoDauLe (int a){
    a=abs(a);

    while(a/10 != 0){
        a/=10;
    }

    if(a%2 != 0){
        return true;
    }

    return false;
}

int tongsocoChuSoDauLe (int a[], int n){

    int tong=0;
    for(int i=0; i<n; i++){
        if(socoChuSoDauLe(a[i])){
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
    printf("\nTong so co chu so dau tien le la: %d", tongsocoChuSoDauLe(a, n));

	getch();
	return 0;
}