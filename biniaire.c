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

//Déclage à gauche.
unsigned char SHL(unsigned char a, unsigned char b)
{
	return (a << b);
}

//Déclage à droite
unsigned char SHR(unsigned char a, unsigned char b)
{
	return (a >> b);
}

//Inverse la valeur passée en argument.<exo00>
unsigned char inverse(unsigned char a)
{
	unsigned i = 0,  mod = 0, b = 0;
	
	while( a != 0 && i < 8)
	{	
		mod = a%2;
		
		if( mod == 0) b = SHL(b, 1);
		else 
		{
			b = SHL(b, 1);
			b = OR(b, 1);
		}
		a = SHR(a, 1);
		i++;
	}
	
	if(i != 8)
	 b = SHL(b, (8 - i));
	
	return b;
}

//Fait une rotation à gauche de r positions des bits de a.<exo02>
unsigned char rotLeft(unsigned char a, unsigned char r)
{
	for(int i = 0; i < r; i++)
	{
		if(a >= 128)
		{
			a = SHL(a, 1);
			a = OR(a, 1);
		}
		else 
			a = SHL(a, 1);
	}
	return a;
}

//Fait une rotation à droite de r positions des bits de a.<exo02>
unsigned char rotRight(unsigned char a, unsigned char r)
{
	for(int i = 0; i < r; i++)
	{
		if((a % 2) == 0)
			a = SHR(a, 1);
		else 
		{
			a = SHR(a, 1);
			a = OR(a, 128);
		}
	}
	return a;
}

//Aggrège tous les bits à 1 à droites.<exo03>
unsigned char separe(unsigned char a)
{
	int nb = 0;
	while(a != 0)
	{
		if((a % 2) != 0)
			++nb;
		a = SHR(a, 1);
	}
	a = 0;
	for(int i = 0; i < nb; i++)
	{
		a = SHL(a, 1);
		a = OR(a, 1);
	}
	printf("\n");
	return a;
}

/* 		==========EXO 0×04 ==============
---Cet algorithme inverse les deux valeur a et b.
*/

