#include<stdio.h>
int main()
{
	int i,j,s;

	for(i=0; i<5; i++)
	{
        	for(j=0; j<5; j++)
		{
			if(i==j || j==0 || j==4)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
				for(s=0; s<2; s++)
		{
			printf(" ");
		}
        		printf("\n");
	}

return 0;

}