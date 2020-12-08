Exercise 1.3

#include<stdio.h>
#define lower 0
#define upper 300
#define step 20


int main(){
	float far,cel;
	far=lower;
	printf("Farenheit   Celsius\n");
	while(far<=upper){
		cel=(5.0/9.0)*(far-32);
		printf("%4.0f%12.1f\n",far,cel);
		far+=step;
	}
}

Exercise 1.4

#include<stdio.h>
#define lower 0
#define upper 300
#define step 20


int main(){
	float far,cel;
	cel=lower;
	printf("Farenheit   Celsius\n");
	while(cel<=upper){
		far=(9.0/5.0)*(cel)+32;
		printf("%4.0f%12.1f\n",far,cel);
		cel+=step;
	}
}

Exercise 1.5

#include<stdio.h>

int main(){
	int far;
	printf("Farenheit  Celsius\n");
	for(far=300;far>=0;far-=20){
		float cel=(5.0/9.0)*(far-32);
		printf("%3d\t%9.1f\n",far,cel);
	}
}

Exercise 1.6

#include<stdio.h>

int main(){
    int r=EOF,c;
	c=r!=EOF;//checking c when r is EOF
	printf("%d\n",c); //prints 0
	r=0;
	c=r!=EOF;//checking c when r is not EOF
	printf("%d\n",c); //prints 1
}

Exercise 1.7

#include<stdio.h>

int main(){
    printf("%d",EOF);
}

Exercise 1.8

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

Exercise 1.9

#include<stdio.h>

int main(){
	int c,prev;
	c=getchar();
	while(c!=EOF){
		if(!(prev==' '&&c==' ')){
			putchar(c);
			prev=c;
		}
		c=getchar();
	}
	return 0;
}

Exercise 1.10

#include<stdio.h>
int main(){

	int c;
	while((c=getchar())!=EOF){
		if(c=='\t'){
			putchar('\\');
			putchar('t');
		}
		else
		if(c=='\\'){
			putchar('\\');
			putchar('\\');
		}
		else
		if(c=='\b'){
			putchar('\\');
			putchar('b');
		}
		else{
			putchar(c);
		}
	}
	return 0;
}

Exercise 1.11

Multiple tabs and multiple newline can be fed to test the program for bugs

Exercise 1.12

#include<stdio.h>
#define OUT 0
#define IN 1

int main(){
	int c;
	int state=OUT;
	while((c=getchar())!=EOF){
		if(c=='\n'||c=='\t'||c==' '){
			if(state==IN){
				putchar('\n');
			}
			state=OUT;
		}
		else{
			state=IN;
			putchar(c);
		}
	}
}

Exercise 1.13

#include<stdio.h>
#define OUT 0
#define IN 1
int main(){
	int c;
	int state=OUT;
	int ws=0;
	int max_ws=0;
	while((c=getchar())!=EOF){
		if(c=='\n'||c=='\t'||c==' '){
			if(state!=OUT){
				printf("\n");
				for(int i=0;i<ws;i++){
					printf("--");
				}
				printf("\n");
				for(int i=0;i<ws;i++){
					printf("  ");
				}
				printf("|\n");
				for(int i=0;i<ws;i++){
					printf("--");
				}
				printf("\n");
				state=OUT;
			}
			ws=0;
		}
		else{
			state=IN;
			ws++;
			if(ws>max_ws){
				max_ws=ws;
			}
		}
	}
	printf("0");
	for(int i=1;i<max_ws+5;i++){
		printf("%2d",i);		
	}
	return 0;
}

Exercise 1.14

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

Exercise 1.15

#include<stdio.h>
#define UPPER 300
#define LOWER 0
#define STEP 20

float getC(int far){
	return (5.0/9.0)*(far-32);
}

int main(){
	printf("Fahrenheit  Celsius\n");
	for(int i=LOWER;i<UPPER;i+=STEP){
		printf("%5d%12.1f\n",i,getC(i));
	}
	return 0;
}

Exercise 1.16

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

Exercise 1.17

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

Exercise 1.18

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

Exercise 1.19

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

Exercise 1.20

#include<stdio.h>
#define N 3
int main(){
	int c;
	int count=0;
	while((c=getchar())!=EOF){
		if(c=='\n'){
			putchar('\n');
			continue;
		}
		if(c=='\t'){
			for(int i=0;i<N-count;i++){
				putchar(' ');
			}
			count=0;
		}
		else{
			putchar(c);
			count++;
		}
		count%=N;
	}
	return 0;
}

Exercise 1.21




Exercise 1.22

#include<stdio.h>
#define N 14
#define SIZE (int)1e6
#define ON 1
#define OFF 0

int main(){
	int c;
	int index=0;
	char temp[SIZE];
	int print=ON;
	int tempindex=0;
	while((c=getchar())!=EOF){
		if(c==' '||c=='\t'){
			if(index>=N){
				index=0; //if now index becomes greater or equal to N then start from new line
				putchar(' ');
				if(print==OFF){
					for(int i=0;i<tempindex;i++){
						putchar(temp[i]);
					}
				}
				putchar('\n');
				tempindex=0;
				print=ON;
			}
			else{
				if(print){
					tempindex=0; //if prining  is still going on stop the printing and start saving the chars in temp
					print=OFF;
				}
				else{
					putchar(' '); //put the previous space that was left and then put all the characters before previous space to same line
					for(int i=0;i<tempindex;i++){
						putchar(temp[i]);
					}
					tempindex=0;
				}
				
			}
		}
		else //if element is not a blank then check wether printing is on if it is then putchar else save in temp
		{
			if(c=='\n'){
				if(index>=N){
					putchar('\n');
				}
				else{
					putchar(' ');
				}
				if(print==OFF){
					for(int i=0;i<tempindex;i++){
						putchar(temp[i]);
					}
				}
				tempindex=0;
				index=0;
				print=ON;
			}
			if(print){
				putchar(c);
			}
			else{
				temp[tempindex]=c;
				tempindex++;
			}
		}
		index++; //increment the index to see on which column we are
	}
	if(index>=N){
		putchar('\n');	
	}
	else{
		putchar(' ');
	}
	if(print==OFF){
		for(int i=0;i<tempindex;i++){ //check if temp is still empty		
			putchar(temp[i]);
		}
	}
	return 0;
}




Exercise 1.23


#include<stdio.h>
#define MAXLENGTH (int)1e6
#define OFF 0
#define ON 1

int main(){
	char prev;
	char c;
	int index;
	int scmode=OFF,mcmode=OFF;
	int quotes=OFF;  
	while((c=getchar())!=EOF){
		if(scmode==ON||mcmode==ON){
			if(scmode==ON){
				if(c=='\n')
				{
					scmode=OFF;
					putchar('\n');
				}
				continue;
			}
			else{
				if(c=='*'){
					c=getchar();
					if(c=='/'){
						mcmode=OFF;
					}
				}
			}
		}
		else{
			if(quotes){
				if(c=='\\'){
					putchar('\\');
					c=getchar();
					if(c==EOF){
						break;
					}
					else{
						if(c=='\"'){
							putchar('\"');
							continue;
						}
					}
				}
				if(c=='\"'){
					quotes=OFF;
				}
				putchar(c);
				continue;
			}
			if(c=='\"'){
				quotes=ON;
				putchar(c);
				continue;
			}
			if(c=='/'){
				c=getchar();
				if(c==EOF){
					putchar('/');
					break;
				}
				else{
					if(c=='/'){
						if(!mcmode)
						scmode=ON;
					}
					else
					if(c=='*'){
						if(!scmode)
						mcmode=ON;
					}
					else{
						putchar(c);
					}
				}
			}
			else{
				putchar(c);
			}
		}
	}
	return 0;
}


