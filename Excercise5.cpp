#include<stdio.h>

int main(){
	int x;
	printf("enter integer x");
	scanf("%i", &x);
	if(x>0){
		printf("positive integer");
	}else
	{
		if(x % 2 == 0){
			printf("even number");
		}
	}
	return 0;
}
