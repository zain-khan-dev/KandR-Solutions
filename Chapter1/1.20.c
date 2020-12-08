#include<stdio.h>
#define N 3
int main(){
	int c;
	int count=0;
	while((c=getchar())!=EOF){
		if(c=='\n'){
			putchar('\n');
			continue;
		}
		if(c=='\t'){
			for(int i=0;i<N-count;i++){
				putchar(' ');
			}
			count=0;
		}
		else{
			putchar(c);
			count++;
		}
		count%=N;
	}
	return 0;
}
