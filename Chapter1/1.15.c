#include<stdio.h>
#define UPPER 300
#define LOWER 0
#define STEP 20
float getC(int far){
	return (5.0/9.0)*(far-32);
}
int main(){
	printf("Fahrenheit  Celsius\n");
	for(int i=LOWER;i<UPPER;i+=STEP){
		printf("%5d%12.1f\n",i,getC(i));
	}
	return 0;
}
