#include<stdio.h>
int main()
{
int i,j;

	for( i=1;i<=10;i++)
  printf("%4d",i);

	for(j=1;j<=10;j++)
	{
  printf("%d\n",j);
	for(i=1;i<=10;i++)
  printf("%4d",i*j);
     printf("\n");
	}


return 0;
}
