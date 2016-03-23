#include <stdio.h>
#include <stdlib.h>

char *Reverse(char *s)
{
	char *p=s;
	char *q=s;
	while(*q)
	{
		++q;
	}
	q--;
	if(p<q)
	{
		char t=*p;
		*p++=*q;
		*q--=t;
	}
	return s;	
} 



int main(int argc, char *argv[]) {
	
	char a[]="hello";
	printf("Ô­×Ö·û´®:%s\n",a);
	printf("ÄæÐòÖ®ºóµÄ×Ö·û´®:%s\n",Reverse(a));
	
	return 0;
}
