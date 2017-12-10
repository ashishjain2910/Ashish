#include<stdio.h>

int main()
{


	int a[6]={-5,2,5,-3,2,3};
	int i,j,temp,com=1;

	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)                 //for(j=i;j<6;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for(i=0;i<6;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("......................\n");
	for(i=0;i<6;i++)
	{
		if(a[i]>0)
		{

			if(a[i]!=com)
			{
				if(a[i]==1)		
					printf("%d\n",com);
				else
					printf("i = %d  %d\n",i,com+1);
				break;
			}
			else
			{
				if(a[i+1]==com+1)
					com++;
			}
		}
	}	




	return 0;
}
