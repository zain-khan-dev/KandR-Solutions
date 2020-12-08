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
void reverse(char s[]){
	int index=0;
	while(s[index])index++;
	int start=0;
	while(start<index/2){
		char temp=s[start];
		s[start]=s[index-start-1];
		s[index-start-1]=temp;
		start++;
	}
}
int main(){
	char line[SIZE];
	int size;
	int max_size=0;
	while((size=getline1(line))>0){
		if(line[0]!='\0'){
			reverse(line);
			printf("%s\n",line);
		}	
	}
	return 0;
}
