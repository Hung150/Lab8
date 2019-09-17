#include<stdio.h>
#include<math.h>

int main(){
	float xa,ya,xb,yb,xc,yc,ab,ac;
	printf("enter the coordinates of point a");
	scanf("%f", &xa);
	printf("enter the degrees of point a");
	scanf("%f", &ya);
	printf("enter the coordinates of point b");
	scanf("%f", &xb);
	printf("enter the degrees of point b");
	scanf("%f", &yb);
	printf("enter the coordinates of point c");
	scanf("%f", &xc);
	printf("enter the degrees of point c");
	scanf("%f", &yc);
	ab = sqrt(pow(xa-xb,2)+pow(ya-yb,2));
	ac = sqrt(pow(xa-xc,2)+pow(ya-yc,2));
	if(ab>ac){
		printf("the closest point to point A is point C");
	}else
	{
		if(ab<ac){
			printf("the closest point to point A is point B");
		}else
		{
			printf("the distance from A to B and C is equal");
		}
	}
	printf("The distance %f, %f, %f, %f, %f, %f = %f", xa, ya, xb, yb, xc, yc, fmin(ab,ac));
	return 0;
}
