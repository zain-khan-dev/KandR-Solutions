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
void removeTrailing(char s[],int size){
	int i;
	for(i=size-1;i>=0;i--){
		if(!(s[i]==' '||s[i]=='\t')){
			break;
		}
	}
	s[i+1]='\0';
}
int main(){
	char line[SIZE];
	int size;
	int max_size=0;
	while((size=getline1(line))>0){
		removeTrailing(line,size);
		if(line[0]!='\0'){
			printf("%s\n",line);
		}
		
	}
	return 0;
}
