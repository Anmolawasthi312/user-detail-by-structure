#include<stdio.h>
int main()
{
	int row ,col,i,j,a[10][10],count=0;
	printf("enter the row\n");
	scanf("%d",&row);
	printf("enter the column\n");
	scanf("%d",&col);
    printf("enter the matrix\n");
    for(i=0;i<row;i++)
    {
    	for(j=0;j<col;j++)
	{
	
	scanf("%d",&a[i][j]);
	}
	}
	printf("elements are:\n");
	for(i=0;i<row;i++)
    {
    	for(j=0;j<col;j++)
	{
	printf("%d ",a[i][j]);
	printf("\t");
	} 
	printf("\n");
	}
	/*checking the matix is spare or not */
	for(i=0;i<row;i++)
    {
    	for(j=0;j<col;j++)
    	{
    		if(a[i][j]==0)
    		count=count+1;
       }
   }
   if(count>(row*col)/2)
   printf("matrix is spare matrix\n");
   else
   printf("matrix is not spare atrix\n");
	return 0;
	
}
