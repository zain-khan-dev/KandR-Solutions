#include<stdio.h>
int any(char s1[],char s2[]){
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
		if(alpha[s1[i]]==1){
			return i;
		}
	}
	return -1;
}
int main(){
	char s1[]="hello\0";
	char s2[]="world\0";
	printf("%d",any(s1,s2)+1);
	return 0;
}
