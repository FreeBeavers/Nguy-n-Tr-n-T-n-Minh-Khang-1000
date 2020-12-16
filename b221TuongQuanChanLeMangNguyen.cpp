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

int demchan (int a[], int n){
    int dem=0;
    for(int i=0; i<n; i++){
        if(a[i]%2 == 0){
            dem+=1;
        }
    }
    return dem;
}

int demle (int a[], int n){
    int dem=0;
    for(int i=0; i<n; i++){
        if(a[i]%2 != 0){
            dem+=1;
        }
    }
    return dem;
}

int tuongquanChanLe (int a[], int n){

    printf("\nChan nhieu hon Le: -1\nChan bang Le: 0\nChan it Le: 1"); 
   
    int chan = demchan(a,n);
    int le = demle(a,n);
    
    if(chan > le){
        return -1;
    }else if(chan == le){
        return 0;
    }
    return 1;
}

int main(){
    
	int n;
	int a[MAX];

	nhap(a, n); 
	xuat(a, n);
    printf("\n%d",tuongquanChanLe(a,n));

	getch();
	return 0;
}
