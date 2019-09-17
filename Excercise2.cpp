#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c;
	printf("enter a");
	scanf("%f", &a);
	printf("enter b");
	scanf("%f", &b);
	printf("enter c");
	scanf("%f", &c);
	printf("Sum of the two largest numbers of the three numbers %f, %f, %f = %f",a, b, c, a+b+c-fmin(fmin(a,b),c));
	return 0;
}
