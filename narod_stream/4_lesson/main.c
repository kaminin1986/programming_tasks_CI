#include <stdio.h>

int main()
{
   char c1, c2;
	unsigned char c3;
	short ns1;
	unsigned short ns2;
	int ni1;
	unsigned int ni2;
	long nl1;
	unsigned long nl2;
	long long nll1;
	unsigned long long nll2;
	float f;
	double d;
    c1 = 'r';
	c2 = -115;
	c3 = 195;
	ns1 = -31511;
	ns2 = 63699;
	ni1 = -2011242517;
	ni2 = 4000000000;
	nl1 = -2011242517;
	nl2 = 4000000000;
	nll1 = -8446744073709551615;
	nll2 = 18446744073709551234ULL;
	f = 12.456f;
	d = 1.5364e-20;
    
    printf("Char symbol: ");
	printf("%crn\n",c1);
	printf("Signed char: ");
	printf("%hdrn\n",c2);
	printf("Unsigned char: ");
	printf("%hdrn\n",c3);
	printf("Signed short: ");
	printf("%hdrn\n",ns1);
	printf("Unsigned short: ");
	printf("%hurn\n",ns2);
	printf("Signed integer: ");
	printf("%drn\n",ni1);
	printf("Unigned integer: ");
	printf("%urn\n",ni2);
	printf("Signed long: ");
	printf("%ldrn\n",nl1);
	printf("Unsigned long: ");
	printf("%lurn\n",nl2);
	printf("Signed long long: ");
	printf("%I64drn\n",nll1);
	printf("Unsigned long long: ");
	printf("%I64urn\n",nll2);
	printf("Float: ");
	printf("%frn\n",f);
	printf("Double: ");
	printf("%.24lfrn\n",d);
	printf("Hex: ");
	printf("0x%Xrn\n",ni2);
     
    return 0;

}