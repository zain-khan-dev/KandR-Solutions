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
