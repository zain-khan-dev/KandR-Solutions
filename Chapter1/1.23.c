

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