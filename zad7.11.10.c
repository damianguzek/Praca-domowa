#include <stdio.h>

main()
{
   int a,i=1;
   int k;
   printf("Podaj liczbe calkowita. \n");
   scanf("%d",&a);
   printf("Dzielnikami liczby %d sa\n",a);
   
   for(i=1;i<a;i++){
      if(a%i==0){
         printf("%d\n",i);
      }
   }
   printf("%d\n",a);
}

