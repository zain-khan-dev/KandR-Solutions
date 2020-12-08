#include<stdio.h>
#define OUT 0
#define IN 1
int main(){
	int c;
	int state=OUT;
	int ws=0;
	int max_ws=0;
	while((c=getchar())!=EOF){
		if(c=='\n'||c=='\t'||c==' '){
			if(state!=OUT){
				printf("\n");
				for(int i=0;i<ws;i++){
					printf("--");
				}
				printf("\n");
				for(int i=0;i<ws;i++){
					printf("  ");
				}
				printf("|\n");
				for(int i=0;i<ws;i++){
					printf("--");
				}
				printf("\n");
				state=OUT;
			}
			ws=0;
		}
		else{
			state=IN;
			ws++;
			if(ws>max_ws){
				max_ws=ws;
			}
		}
	}
	printf("0");
	for(int i=1;i<max_ws+5;i++){
		printf("%2d",i);		
	}
	return 0;
}
