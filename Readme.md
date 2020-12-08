Exercise 2.1

#include<limits.h>
#include<stdio.h>
#include<math.h>
#include<float.h>

int main(){
	printf("Char value ranges from %d to %d\n",CHAR_MIN,CHAR_MAX);
	printf("Unsigned Char value ranges from %d to %d\n",0,UCHAR_MAX );
	printf("Int value ranges from %d to %d\n",INT_MIN,INT_MAX);
	printf("Unsigned Int value ranges from %u to %u\n",0,UINT_MAX);
	printf("Unsigned Int value ranges from %ld to %ld\n",LONG_MIN,LONG_MAX);
	printf("Unsigned Int value ranges from %d to %lu\n",0,ULONG_MAX); //values from header file

	printf("Char value ranges from %d to %d\n",-1*(int)pow(2,(sizeof(char))*8)/2+1,(int)pow(2,(sizeof(char))*8)/2);
	printf("Unsigned Char value ranges from %d to %lf\n",0,pow(2,(int)sizeof(char)*8)-1);
	printf("Int value ranges from %d to %d\n",-1*(int)pow(2,(sizeof(int))*8)-1,(int)pow(2,(sizeof(int))*8));
	printf("Unsigned Int value ranges from %u to %u\n",0,(unsigned int)pow(2,(sizeof(unsigned int)+1)*8));
	printf("Unsigned Int value ranges from %ld to %ld\n",-1*(long int)pow(2,sizeof(long)*8)-1,(long int)pow(2,sizeof(long)*8));
	printf("Unsigned Int value ranges from %d to %lu\n",0,(unsigned long)pow(2,sizeof(unsigned long)*8)); //values from header file
}

Exercise 2.2


#include<stdio.h>
int main(){
	int lim=100;
	int c;
	for(int i=0;i<lim-1;i++){
		if((c=getchar()!='\n')){
			if(c!=EOF){
				//do something here
			}
		}
	}
}

Exercise 2.3

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


Exercise 2.4

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

Exercise 2.5

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

Exercise 2.6

unsigned int getbits(unsigned int x, int p, int n) {
    x=(x  & (~(~0 << n)));
	x=x<<(p-n);
	return x;
}


int setbits(unsigned int x,int p,int n,unsigned int y){
	unsigned int r=getbits(y,p,n);
	getBinary(x);
	x=x&((~0<<n)|(~(~0<<(p-n))));
	getBinary(x);
	x=x|r;
	getBinary(x);
	return x|r;
}

Exercise 2.7