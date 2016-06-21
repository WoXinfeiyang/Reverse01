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
	while(p<q)
	{
		char t=*p;
		*p++=*q;/*注意运算符优先级,*指针运算符与++自加运算符是处于同一级的运算符,优先级结合方式是从右自左*/
		*q--=t;
	}
	return s;	
} 



int main(int argc, char *argv[]) {
	
	char a[]="hello";
	printf("原字符串:%s\n",a);
	printf("逆序之后的字符串:%s\n",Reverse(a));
	
	return 0;
}
