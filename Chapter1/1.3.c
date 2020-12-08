#include<stdio.h>
#define lower 0
#define upper 300
#define step 20
int main(){
	float far,cel;
	far=lower;
	printf("Farenheit   Celsius\n");
	while(far<=upper){
		cel=(5.0/9.0)*(far-32);
		printf("%4.0f%12.1f\n",far,cel);
		far+=step;
	}
}
