#include<stdio.h>
#include<conio.h>

int main(){
    int n;

    do{
      printf("Nhap n: ");
      scanf("%d",&n);

      if(n<0){
          printf("Nhap n la so nguyen duong!\n");
        }
    }while (n<0);

    int dem=0;
    while (n>0){
    n/=10;
    dem+=1;
    }
    printf("So chu so cua so nguyen duong tren la: %d",dem); 
    
}