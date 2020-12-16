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

void nhapPhanTuVaViTriThem (int &vitri, int &giatri, int n){
    do{
        printf("\nNhap vi tri muon them: ");
        scanf("%d", &vitri);

        if(vitri<0 || vitri>n){
            printf("Vi tri phai nam trong khoang tu 0 den n.\nVui long nhap lai!");
        }
    }while(vitri< 0 || vitri >n);

    printf("Nhap gia tri cua phan tu muon them: ");
    scanf("%d", &giatri);
}

void themPhanTu (int a[], int &n, int vitri, int giatri){
    for(int i=n; i>vitri; i--){
        a[i]=a[i-1];
    }
    a[vitri]=giatri;
    n++;
}

int main(){
    
	int n;
	int a[MAX];

	nhap(a, n);
	xuat(a, n);

    int vitriThem;
    int giatriThem;

    nhapPhanTuVaViTriThem(vitriThem,giatriThem,n);
    themPhanTu(a,n,vitriThem,giatriThem);
    xuat(a,n);

	getch();
	return 0;
}
