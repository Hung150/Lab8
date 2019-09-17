#include<stdio.h>
#include<math.h>

int main(){
	float x,y;
	printf("enter the coordinates x");
	scanf("%f", &x);
	printf("enter the coordinates y");
	scanf("%f", &y);
	if(fmin(x,y)>0){
	        printf("the point is in the first quadrant");
	}else
	{
	        if(fmax(x,y)<0){
	                printf("the point is in the third quadrant");
            }else
            {
	                if((x < 0)&&(y > 0)){
	                        printf("the point is in the second quadrant");
                    }else
                    {
	                        printf("the point is in the fourth quadrant");
                    }
            }
    }
    return 0;
}
