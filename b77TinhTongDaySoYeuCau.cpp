#include<stdio.h>
#include<conio.h>

int main(){
    int n;

    do {
        printf("Nhap n: ");
        scanf("%d",&n);
        if(n<0){
            printf("Nhap n la so nguyen duong\n");
        }
    }while(n<0);

    int tong=0;
    for(int i=0; i<=n; i++){
        tong+=i;
    }

    printf("Tong cua day so la: %d", tong);
    getch();
    return 0;
}