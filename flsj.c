#include<stdio.h>
#include<math.h>
main()
{
	int p,n,b;
	double i=0,f;
	printf("����ı���:");
	scanf("%d",&p);
	printf("Ͷ��������Ϊ:");
	scanf("%lf",&i);
	printf("����Ϊ:");
	scanf("%d",&n);
	printf("�긴��������");
	scanf("%d",&b);
	f=p*pow((1+i/b),b*n);
	printf("��ֵΪ%.4lf",f);
}