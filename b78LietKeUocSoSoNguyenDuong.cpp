#include<conio.h>
#include<stdio.h>

int main(){

    int n;
    
    do{
      printf("Nhap n:");
      scanf("%d",&n);

      if(n<0){
          printf("\nNhap n la so nguyen duong!\n");
      }
    }while (n<0);

    printf("Cac uoc cua so nguyen duong tren la: ");

    for(int i=1; i<=n; i++){
        if(n%i==0){
            printf("%3d",i);
        }
        
    }

    getch();
    return 0;
}