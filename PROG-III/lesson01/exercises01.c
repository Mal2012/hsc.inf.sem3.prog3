#include <stdio.h>

void typesize(void){

    printf("short int: %d\n", sizeof(short int));
    printf("int: %i\n", sizeof(int));
    printf("long int: %i\n", sizeof(long int));
    printf("long long: %d\n", sizeof(long long));
    printf("float: %d\n", sizeof(float));
    printf("double: %d\n", sizeof(double));
    printf("long double: %d\n", sizeof(long double));
}

void printperson(void){

	printf("Name: Konstaintin Jung\n");
	printf("Adresse: Kraibergstr. 8\n");
	printf("E-Mail: kj88@gmx.net\n");
}

void chars(void){

   char c = 'x'; // x wird bei %d als int ausgewertet -> 4 Bytes statt 1 Byte

   printf("char-Konst.: %d Bytes, char-Var: %d, int: %d Bytes\n", sizeof('x'), sizeof(c), sizeof(10));
   printf("Inhalt der char-Var.: %c, int-Konstante: %i\n", c, 10);
}

void output(void){

	printf("\tHauptmenue\n");
	printf("\t==========\n\n");
	printf("(A)endern\n");
	printf("(B)eenden\n");
	printf("(D)ruecken\n");
	printf("(E)ingeben\n");
	printf("(L)oeschen\n\n");
	printf("Was wuenschen Sie zu tun?");
}

void comments(void){

   printf("Kommentare werden in C mit /*..*/ geklammert.\n");
   printf("Beachte jedoch:");
   printf("\n  - Kommentare innerhalb von Anfuehrungszeichen\n");
   printf("    werden als Text und nicht als Kommentar interpretiert\n");
     /* printf("Ende\n"); */
}

void test1() {

  printf("Hey, los geht's");
}

void test2(void) {

  printf("Wie, wer, was ist %d?", 0);
}

void test3(){

  printf("Das war's fuer heute\n");
}

void printascii(void){

	int i;

	for(i = 66; i < 99; i++){
		printf("%c", i);
	}
}
