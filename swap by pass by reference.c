#include<stdio.h>
void swap(int n){
	printf("befor adding in function %d\n",n);
	n=n+10;
	 printf("After adding in function %d \n",n);  
}
int main() {    
    int x;
    printf("enter the value of x\n");
    scanf("%d",&x);
    printf("Before function call %d\n", x);    
    swap(x);    
    printf("After function call %d\n", x);    
return 0;  
}    
