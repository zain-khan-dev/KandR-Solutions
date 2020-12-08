#include<stdio.h>
#define lower 0
#define upper 300
#define step 20
int main(){
	float far,cel;
	cel=lower;
	printf("Farenheit   Celsius\n");
	while(cel<=upper){
		far=(9.0/5.0)*(cel)+32;
		printf("%4.0f%12.1f\n",far,cel);
		cel+=step;
	}
}
