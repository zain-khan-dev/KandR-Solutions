#include<stdio.h>
int main(){
	int c,prev;
	c=getchar();
	while(c!=EOF){
		if(!(prev==' '&&c==' ')){
			putchar(c);
			prev=c;
		}
		c=getchar();
	}
	return 0;
}
