#include<stdio.h>
int main(){
	int a[5]={10,20,30,40,50};
	int *p=a,*q=*(&a+1)-1;
	printf("%d\n",*p++);
	printf("%d\n",*++p);
	printf("%d\n",(*p)++);
	printf("%d\n",++(*p));
	printf("%d\n",++*p);
	printf("%d\n",*(p++));
	printf("%d\n",*(++p));
	printf("%d\n",*q--);
	printf("%d\n",*--q);
	printf("%d\n",--(*q));
	printf("%d\n",--*q);
	printf("%d\n",(*q)--);
	printf("%d\n",*(q--));
	printf("%d\n",*(--q));
}
