#include<stdio.h>
int main(){
	long blank=0,tabs=0,new_line=0;
	int c;
	while((c=getchar())!=EOF){
		if(c=='\t'){
			tabs++;
		}
		else
		if(c==' '){
			blank++;
		}
		else
		if(c=='\n')
		{
			new_line++;
		}
	}
	printf("number of tabs = %ld number of blank = %ld number of new line= %ld\n",blank,tabs,new_line);
}
