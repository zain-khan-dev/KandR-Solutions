#include<stdio.h>
#define SIZE (int)1e6
int getline1(char s[]){
	int c;
	int index;
	for(index=0;((c=getchar())!=EOF&&c!='\n'&&index<SIZE);index++){
		s[index]=c;
	}
	if(c=='\n'){
		s[index]='\0';
	}
	return index;
}
int main(){
	char line[SIZE];
	char longest[SIZE];
	int size;
	int max_size=0;
	while((size=getline1(line))>0){
		if(size>80){
			printf("%s\n",line);
		}
	}
	return 0;
}
