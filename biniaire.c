#include "biniaire.h"

//Opérateur ET.
unsigned char AND(unsigned char a, unsigned char b)
{
	return (a & b);
}

//Opérateur OU.
unsigned char OR(unsigned char a, unsigned char b)
{
	return (a | b);
}

//Opérateur OU exclusif.
unsigned char XOR(unsigned char a, unsigned char b)
{
	return (a ^ b);
}

//Déclage à droite.
unsigned char SHL(unsigned char a, unsigned char b)
{
	return (a << b);
}

//Déclage à gauche
unsigned char SHR(unsigned char a, unsigned char b)
{
	return (a >> b);
}

//Inverse la valeur passée en argument.exo00
unsigned char inverse(unsigned char a)
{
	unsigned i = 0,  mod = 0;
	unsigned  b = 0, e = 1;
	
	while( a != 0 && i < 8)
	{	
		mod = a%2;
		
		if( mod == 0) b = b << 1;
		else 
		{
			b = b << 1;
			b = OR(b, 1);
		}
		a = a >> 1;
		i++;
	}
	
	printf("\nb = %d\n", b);
	
	if(i != 8)
	 b = SHL(b, (i - 7));
	
	printf("\nb = %d\n", b);
	 
	return b;
}
