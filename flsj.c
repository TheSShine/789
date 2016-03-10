#include<stdio.h>
#include<math.h>
main()
{
	int p,n,b;
	double i=0,f;
	printf("存入的本金:");
	scanf("%d",&p);
	printf("投资年利率为:");
	scanf("%lf",&i);
	printf("年限为:");
	scanf("%d",&n);
	printf("年复利次数：");
	scanf("%d",&b);
	f=p*pow((1+i/b),b*n);
	printf("终值为%.4lf",f);
}