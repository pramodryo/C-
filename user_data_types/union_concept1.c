
#include<stdio.h>
union A
{
	int i;
	char ch;
	double d;
};

void main()
{
	union A o1, o2;

	printf("sizeof union is = %ld bytes\n", sizeof(o1)); // size is 8 byte because dobble size is 8 byte

	o1.i = 0xabcdef;  
	o2.i = 0xabab7a;

	printf("o1.i = %x   o2.i = %x\n", o1.i, o2.i);       // o1.i = abcdef , o2.i = abab7a
	printf("o1.ch = %x  o2.ch = %x\n", o1.ch, o2.ch);     // o1.ch = ffffffef (because 7th bit of o1.ch is 1) ,  o2.ch = 7a (7th bit of o2.ch is not 1) 
	printf("o1.d = %f   o2.d = %f\n", o1.d, o2.d);       // o1.d 0.00000, o.2 = 0.0000 (because data is not in IEEE format)
}
