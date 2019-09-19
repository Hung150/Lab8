#include<stdio.h>
#include<math.h>

int main(){
	int x,i,sum=0,count=0;
	printf("enter integer x"); scanf("%i", &x);
	for(i=1;i<=x/2;i++){
		if(x%i==0)
		sum+=i;
	}
	if(sum==x){
		printf(" perfect number");
	}
	if(x>0){
		printf(" positive integer");
	}
	if(x%2==0){
		printf(" even number");
	}
	if(sqrt((float)x) == (int)sqrt((float)x)){
		printf("square root");
	}
	if(x%2==1){
		printf(" odd number");
	}
	if(x<0){
		printf(" negative integer");
	}
	if(x>=2){
	    for(i=2;i<=sqrt(x);i++){
			if(x%i==0)
			count++;
		}
		if(count==0){
			printf(" prime number");
		}
    }   
	return 0;
}
