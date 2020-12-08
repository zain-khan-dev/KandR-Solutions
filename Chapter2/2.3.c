#include<stdio.h>
#define LIMIT (int)1e6
int htoi(char r[]){
	int index=0;
	while(r[index])index++;
	int sum=0;
	for(int i=0;i<index;i++){
		int digit;
		sum*=16;
		if((r[i]>='A'&&r[i]<='F')){
			digit=r[i]-'A';
			digit+=10;
		}
		else
		if(r[i]>='a'&&r[i]<='f'){
			digit=r[i]-'a';
			digit+=10;
		}
		else{
			digit=r[i]-'0';
		}
		sum+=digit;
	}
	return sum;
}
int main(){
	int c;
	char s[LIMIT];
	int len=0;
	while((c=getchar())!='\n'){
		s[len]=c;
		len++;
	}
	s[len]='\0';
	printf("The int conversion of hexadecimal number is %d",htoi(s));
	return 0;
}
