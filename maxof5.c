#include<stdio.h>
	int main()
	{
		int a,b,c,d;
		printf("\nenter a");
		scanf("%d",&a);
		printf("\nenter b");
		scanf("%d",&b);
		printf("\nenter c");
		scanf("%d",&c);
		printf("\nenter d");
		scanf("%d",&d);
		if(a>b)
		{
			if(a>c)
			{
				if(a>d)
				{
					printf("a is greater %d",a);
				}
				else
				{
					printf("d is greater %d",b);
				}
			}
				else if(c>d)
				{
					printf("c is greater %d",c);
				}
				else
				{
					printf("d is greater %d",d);
				}
			}
			else if(b>c)
			{
				if(b>d)
				{
					printf("b is grater %d",b);
				}
				else
				{
				printf("d is greater %d",c);
			}
			
		}
		return 0
		;
	}
