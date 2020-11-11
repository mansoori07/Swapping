#include <stdio.h>
 main()
{
	printf("Enter two no.");
	int a=0,b=0;
	scanf("%d",&a);
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Swap words are: %d",a);
	printf(" and %d",b);
}
