#include<stdio.h>
int main(){
	int far;
	printf("Farenheit  Celsius\n");
	for(far=300;far>=0;far-=20){
		float cel=(5.0/9.0)*(far-32);
		printf("%3d\t%9.1f\n",far,cel);
	}
}
