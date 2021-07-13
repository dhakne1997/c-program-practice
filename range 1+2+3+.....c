#include<stdio.h>

int main()
{


	int n,i,sum=0,t;
	
	
	printf("\n enter the range");
	
	scanf("\n %d",&n);
	
	
	for(i<1;i<=n;i++)
	
	{
		t =(3*i);
		
		if(i%2==0)
		{
		
		printf("%d +",t);
		
			
        sum=sum+(t);
}
else
{
printf("%d",t);

sum =sum+t;
}



       printf("\n sum of range :=%d",sum);
	}
	}
	
	
	