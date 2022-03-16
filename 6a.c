#include<stdio.h>
int main(){
   
   long num;
   

   scanf("%ld",&num);
   long a[num];
    a[0]=0;
    a[1]=1;

   for(int i=2; i<=num-1;i++){
       a[i]=a[i-1]+a[i-2];

   }

   for(int i=0; i<=num-1;i++){
       printf("%ld\n",a[i]);
       
   }
   printf("\n");

   printf("%ld\n",a[num-1]);


    return 0;
}