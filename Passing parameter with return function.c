#include<stdio.h>

int sub(int, int);
int add(int, int);
int mul(int, int);
int div(int, int);

int main(){
	int a,b;
	printf("Enter two nums:");
	scanf("%d %d",&a,&b);
	sub(a,b);
	add(a,b);
	mul(a,b);
	div(a,b);
	return 0;
}

int sub(int x,int y){
	printf("Difference = %d\n",x-y);
}

int add(int x,int y){
	printf("Addition = %d\n",x+y);
}

int mul(int x,int y){
	printf("Product = %d\n",x*y);
}

int div(int x,int y){
	printf("Division = %d\n",x/y);
}
