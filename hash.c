#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int hacher(char *s);
int main(void)
{   printf("%d\n", 'A' + 'A' );
    printf("AA : %2d\n", hacher("AA"));
    printf("AC : %2d\n", hacher("AC"));
    printf("AG : %2d\n", hacher("AG"));
    printf("AT : %2d\n", hacher("AT"));
    printf("A- : %2d\n", hacher("A-"));
    printf("CC : %2d\n", hacher("CC"));
    printf("CG : %2d\n", hacher("CG"));
    printf("TC : %2d\n", hacher("TC"));
    printf("C- : %2d\n", hacher("C-"));
    printf("GG : %2d\n", hacher("GG"));
    printf("TG : %2d\n", hacher("TG"));
    printf("G- : %2d\n", hacher("G-"));
    printf("TT : %2d\n", hacher("TT"));
    printf("T- : %2d\n", hacher("T-"));
    return EXIT_SUCCESS;
}

int hacher(char *s) {
	int accum = 0;
	int len;
	len = strlen(s);
	accum = 0;
	for (;len > 0; len--) {
		accum >>= 1;
		accum += (unsigned) (*s++ & 0xFF);        
	}
	return (accum - 77)%15;
}
