#include<stdio.h>
#define OUT 0
#define IN 1
int main(){
	int c;
	int state=OUT;
	while((c=getchar())!=EOF){
		if(c=='\n'||c=='\t'||c==' '){
			if(state==IN){
				putchar('\n');
			}
			state=OUT;
		}
		else{
			state=IN;
			putchar(c);
		}
	}
}
