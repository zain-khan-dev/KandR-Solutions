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
