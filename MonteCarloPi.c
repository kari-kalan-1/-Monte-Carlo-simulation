#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
	int circle1 = 0;
	int i;
	srand(time(0));
	for(i=0;i<1000000;i++){
		float RandNumX = (float)rand()/RAND_MAX*2.0 - 1.0;
		float RandNumY = (float)rand()/RAND_MAX*2.0 - 1.0;
		float r = sqrt(RandNumX*RandNumX + RandNumY*RandNumY);
	    if(r<1.0){
			circle1=circle1 + 1 ;
		}
	}
	printf("Total circle points are: %d\n ", circle1);
	float ThePi = (circle1/1000000.0)*4;
	printf("The value of Pi is: %.2f",ThePi);
}