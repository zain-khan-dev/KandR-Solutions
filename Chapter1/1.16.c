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
void copy(char s1[],char s2[]){
	int index=0;
	while((s1[index]=s2[index])!='\0'){
		index++;
	}
}
int main(){
	char line[SIZE];
	char longest[SIZE];
	int size;
	int max_size=0;
	while((size=getline1(line))>0){
		printf("%s\n",line);
		if(max_size<size){
			copy(longest,line);
			max_size=size;
		}
	}
	printf("%d",max_size);
	return 0;
}
