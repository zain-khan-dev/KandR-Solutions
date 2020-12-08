#include<stdio.h>
#define COUNT 256
int main(){
	int a[COUNT];
	int c;
	for(int i=0;i<COUNT;i++){
		a[i]=0;
	}
	while((c=getchar())!=EOF){
		a[c]++;
	}
	for(int i=0;i<COUNT;i++){
		if(a[i]>0&&i!='\n'&&i!='\t'&&i!=' '){
			printf("\n");
			for(int j=0;j<a[i];j++){
				if(j==0){
					printf(" ");
				}
				printf("--");
			}
			printf("\n");
			printf("%c",i);
			for(int j=0;j<a[i];j++){
				
				printf("  ");
			}
			printf("|\n");
			for(int j=0;j<a[i];j++){
				if(j==0){
					printf(" ");
				}
				printf("--");
			}
			printf("\n");
		}
	
	}
}
