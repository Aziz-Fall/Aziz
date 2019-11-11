#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int hacher(char *s);
int main(void)
{   printf("%d\n", 'A' + 'A' );
	printf("##########################\n");
    printf("AA : %2d\n", hacher("A"));
    printf("AC : %2d\n", hacher("C"));
    printf("AG : %2d\n", hacher("G"));
    printf("AT : %2d\n", hacher("T"));
    printf("A_ : %2d\n", hacher("_"));
    printf("##########################\n");
    printf("CA : %2d\n", hacher("A"));
    printf("CC : %2d\n", hacher("C"));
    printf("CG : %2d\n", hacher("G"));
    printf("CT : %2d\n", hacher("T"));
    printf("C_ : %2d\n", hacher("_"));
    printf("##########################\n");
    printf("GA : %2d\n", hacher("A"));
    printf("GC : %2d\n", hacher("C"));
    printf("GG : %2d\n", hacher("G"));
    printf("GT : %2d\n", hacher("T"));
    printf("G_ : %2d\n", hacher("_"));
    printf("##########################\n");
    printf("TA : %2d\n", hacher("A"));
    printf("TC : %2d\n", hacher("C"));
    printf("TG : %2d\n", hacher("G"));
    printf("TT : %2d\n", hacher("T"));
    printf("T_ : %2d\n", hacher("_"));
    printf("##########################\n");
    return EXIT_SUCCESS;
}

int hacher(char *s) {
	int accum = 0;
		accum += (unsigned) (*s & 0x0F);  
        accum <<= 1;      
	return ((accum)%5);
}
