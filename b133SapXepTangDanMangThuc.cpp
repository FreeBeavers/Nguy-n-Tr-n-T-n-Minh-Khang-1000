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

void sapxepTangDan(float a[], int n){
   
    for(int i=0; i<n; i++){

        float trungian;

        for(int y=i+1; y<n; y++){
            if(a[i]>a[y]){
                trungian = a[i];
                a[i] = a[y];
                a[y] = trungian;
            }
        }
    }
    printf("\nMang vua sap xep theo thu tu tang dan:\n");
    for(int i= 0; i<n; i++){
        printf("%8.3f", a[i]);
    }
}

int main(){

	int n;
	float a[MAX];

	nhap(a, n);
	xuat(a, n);
	sapxepTangDan(a, n);

	getch();
	return 0;
}