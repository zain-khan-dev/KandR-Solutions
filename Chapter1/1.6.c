#include<stdio.h>
int main(){
    int r=EOF,c;
	c=r!=EOF;//checking c when r is EOF
	printf("%d\n",c); //prints 0
	r=0;
	c=r!=EOF;//checking c when r is not EOF
	printf("%d\n",c); //prints 1
}
