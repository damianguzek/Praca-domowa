#include <stdio.h>

int main()
{
	float a,b;
	printf("podaj a i b funkcji y=ax+b\n");
	scanf("%f %f", &a, &b);
	if (a>0)
		{
			if (b>0)
			{
			printf("wykres y=ax+b przechodzi przez cwiartki: II, III, IV");
			}
			else if("b==0")
			{
			printf("wykres y=ax+b przechodzi przez cwiartki: IV, II");
			}
			else if(b<0)
			{
			printf("wykres y=ax+b przechodzi przez cwiartki: I, II, IV");
			}
		}
	else if (a<0)
		{
			if (b>0)
			{
			printf("wykres y=ax+b przechodzi przez cwiartki: I, II, III");
			}
			else if("b==0")
			{
			printf("wykres y=ax+b przechodzi przez cwiartki: III, I");
			}
			else if(b<0)
			{
			printf("wykres y=ax+b przechodzi przez cwiartki: I, III, IV");
			} 
		}
	else if(a==0)
		{
			if (b>0)
			{
			printf("wykres y=ax+b przechodzi przez cwiartki: II, III");
			}
			else if("b==0")
			{
			printf("wykres przechodzi przez os OX");
			}
			else if(b<0)
			{
			printf("wykres y=ax+b przechodzi przez cwiartki: I, IV");
			} 	
		}
	return 0;
}
