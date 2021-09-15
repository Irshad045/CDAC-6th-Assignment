#include<stdio.h>
#include<conio.h>
void sum(int arr[]);
void main(){
	int ar[5],i;
	printf("enter 3 numbers\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&ar[i]);
	}
	sum(ar);
	getch();
}
void sum(int arr[])
{
	int i,add=0;

for(i=0;i<5;i++)
{
	add=add+arr[i];
}

printf("the sum is %d\n",add);

}
