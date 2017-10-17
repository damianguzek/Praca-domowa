#include <stdio.h>

int main()
{
		int wybor;
		while(wybor !=0)
		{
		printf("\n0. wyjdz\n1. +\n2. -\n3. *\n4. / ");
		printf("\nTwoj wybor ");
		scanf("%d", &wybor);
		int a,b;
		int wynik;
		switch(wybor)
		{
			case 0:
				break;
			case 1:
				scanf("%d %d", &a, &b);
				wynik = a+b;
				break;
			case 2:
				scanf("%d %d", &a, &b);
				wynik = a-b;
				break;
			case 3:
				scanf("%d %d", &a, &b);
				wynik = a*b;
				break;
			case 4:
				scanf("%d %d", &a, &b);
				wynik = a/b;
		}
		printf("wynik = %d", wynik);
		}
	while(wybor != 0);
}
