#include<stdio.h>
void squeeze(char s1[],char s2[]){
	int alpha[256];
	for(int i=0;i<256;i++){
		alpha[i]=0;
	}
	int index=0;
	while(s2[index]){
		alpha[s2[index]]=1;
		index++;
	}
	index=0;
	int start=0;
	while(s1[index]){
		index++;
	}
	for(int i=0;i<index;i++){
		if(alpha[s1[i]]==0){
			s1[start]=s1[i];
			start++;
		}
	}
	s1[start]='\0';
}
int main(){
	char s1[]="hello\0";
	char s2[]="world\0";
	squeeze(s1,s2);
	int index=0;
	while(s1[index]){putchar(s1[index]);index++;}
	return 0;
}
