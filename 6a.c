#include<stdio.h>
int main(){
   
   int num;
   

   scanf("%d",&num);
   int a[num];
    a[0]=0;
    a[1]=1;

   for(int i=2; i<=num-1;i++){
       a[i]=a[i-1]+a[i-2];

   }

   for(int i=0; i<=num-1;i++){
       printf("%d\n",a[i]);
       
   }
   printf("\n");

   printf("%d\n",a[num-1]);


    return 0;
}