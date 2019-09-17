#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	printf("enter a");
	scanf("%i", &a);
	printf("enter b");
	scanf("%i", &b);
	
	if(a==b){
	printf("new values of a and b = %i",a, b, a=b=0);
	}else
	{
		printf("new values of a and b = %i",a, b, a=b=fmax(a,b));
	}
	return 0;
}
