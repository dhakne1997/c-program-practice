# include<stdio.h>

int main ()

{
	
	int i,n,sum=0,a,b,c;
	
	printf("\n enter the range:");
	scanf("%d",&n);
	
	a =0;
	b =1;
	sum =a+b;
	
	printf("\n %d%d",a,b);
	
	for(i=2;i<=n-2;i++)
	
	{
		c=a+b;
		printf("%d",c);
		
		
		sum =sum+c;
		
		a =b;
		b =c;
		
		
	}
	
	printf("\n sum of range =%d",sum);
	
}