#include<stdio.h>
#include<math.h>

int main(){
	int x;
	printf("enter integer x"); scanf("%i", &x);
	if(x>0){
		printf("positive integer");
	}
	if(x % 2 == 0){
		printf("even number");
	}
	if(sqrt((float)x) == (int)sqrt((float)x)){
		printf("square root");
	}
	return 0;
}
