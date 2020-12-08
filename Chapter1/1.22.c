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
