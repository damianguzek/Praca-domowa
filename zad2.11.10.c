#include <stdio.h>
#include <math.h>
int main()

{
	
	float a;
	float b;
	float c;
	float d;
	printf("Podaj a,b,c funkcji kwadratowej\n");
	scanf("%f %f %f",&a,&b,&c);
	
	if (a!=0)
	 {
	 	d=(b*b)-4*(a*c);
	 
	if (d==0)
	 {
	 float x=(-1.0*b)/(2*a);
	 printf("wynik =%f",x);
}
else if(d>0)
{
	float p=sqrt(d);
	float x1,x2;
	x1=(-1.0*b-p)/(2*a);
	x2=(-1.0*b+p)/(2*a);
	printf("x1=%f \n x2=%f",x1,x2);
}
else
printf("Nie ma pierwiastkow rzeczywistych");
}
else
{
	printf("Nie jest funkcj¹ kwadratow¹");
	
}
return 0;
system ("pause");
}
