#include<stdio.h>
int main()
{
	int a[10][10],i,j,m,n;
	printf("enter the no of rows and columns");
	scanf("%d %d",&m,&n);
	printf("enter the elements in the matrix");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("transpose of the matrix\n");
	    for(i=0;i<m;i++)
	    {
	    	for(j=0;j<n;j++)
	    	{
	    		printf("%d",a[j][i]);
			}
			printf("\n");
		}
	return 0;
}
