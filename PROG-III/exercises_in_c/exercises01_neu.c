/*
 * exercises01_neu.c
 *
 *  Created on: 16.10.2013
 *      Author: kjung
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PI 3.1415927
#define HOCHZWEI(wert) ((wert) * (wert))
#define HOCHDREI(wert) ((wert) * (wert) * (wert))


int exercise01(void){

	printf("short int: %d\n", (int) sizeof(short int));
	printf("int: %d\n", (int) sizeof(int));
	printf("long int: %d\n", (int) sizeof(long int));
	printf("long long: %d\n", (int) sizeof(long long));
	printf("float: %d\n", (int) sizeof(float));
	printf("double: %d\n", (int) sizeof(double));
	printf("long double: %d\n", (int) sizeof(long double));

	return (0);
}

int exercise02(void){

	printf("Name: Konstaintin Jung\n");
	printf("Adresse: Kraibergstr. 8\n");
	printf("E-Mail: kj88@gmx.net\n");

	return (0);
}

int exercise03(void){

	int i;
	for(i = 66; i <= 98; i++){
		printf("%c", i);
	}
	return (0);
}

int exercise04(void){

	char c = 'x';

	printf("char-Konst.: %d Bytes, char-Var: %d, int: %d Bytes\n",
	(int) sizeof('x'),(int) sizeof(c),(int) sizeof(10));

	printf("Inhalt der char-Var.: %c, int-Konstante: %i\n", c, 10);

	return (0);
}

int exercise05(void){

	int in;
	printf("\tHauptmenue"
			"\n\t==========\n"
			"(A)endern\n"
			"(B)eenden\n"
			"(D)rucken\n"
			"(E)ingeben"
			"(L)oeschen\n");
	scanf("%d", &in);

	return (0);
}

int exercise06(void){

	printf("Kommentare werden in C mit /*..*/ geklammert.\n");
	printf("Beachte jedoch:");
	printf("\n- Kommentare innerhalb von Anfuehrungszeichen\n");
	printf("werden als Text und nicht als Kommentar interpretiert\n");
	/* printf("Ende\n"); */

	return(0);
}

int exercise07(void){

	int index[] = {1, 3, 0, 2};
	char inseln[][10] = {"Bermudas", "Fidschi", "Komoren", "Kuba"};

	int y = 0;
	int ref = 0;

	while(y < 4){

		ref = index[y];
		printf("Insel: ");
		printf("%s\n", inseln[ref]);
		y = y + 1;
	}

	return (0);
}

int exercise08(void){

	int in, i=0;

	srand(time(0));
	int z = rand() % 10; /* oder: int z = (int) (10.0*rand()/(RAND_MAX+1.0)); */
	do{
		scanf("%d", &in);
		if(in == z){
			printf("Valid solution!\n");
			break;
		}
		else{
			if(in > z){
				printf("Too big\n");
			}
			else if(in < z){
				printf("Too small\n");
			}
		}
	}while(i++ < 2);
	printf("Right answer is: %d\n", z);

	return (0);
}

int exercise09(void){

	char in;
	float tmp;
	printf("Bitte Auswahl treffen: [a - b]");
	scanf("%c", &in);
	switch(in){
	case 'a' : printf("F -> C\nBitte Temperatur eingeben: ");
			   scanf("%f", &tmp);
			   printf("\nBerechnet: %.2f", ((5 * (tmp - 32)) / 9));
			   break;
	case 'b' : printf("C -> F\nBitte Temperatur eingeben: ");
	   	       scanf("%f", &tmp);
	   	       printf("\nBerechnet: %.2f", (((9 * tmp) / 5) + 32));
	   	       break;
	default  : printf("Wrong Input!\n");
			   break;
	}
	return (0);
}

int exercise10(void){

	float radius;

	printf("Bitte den Radius eingeben: ");
	scanf("%f", &radius);

	printf("Fläche: %.3f\nVolumen: %.3f", (4 * PI * HOCHZWEI(radius)), ((4.0 / 3.0)) * PI * HOCHDREI(radius));

	return (0);
}

int exercise11(void){

	int n = 3, k = 4;
	float a = 0, b = 3.2;
	int m;
	char c, e = 1;

	/* = 3, da n % 2 != 0 -> FALSE => 2. Anweisung ausführen */
	m = (n % 2) ? (-1 + n) : (n);

	/* = 0, da '/' und '*' gleiche Priorität haben -> Links -> Rechts => 1/2 = 0 * x = 0 */
	a = (1 / 2) * b;

	/* TRUE da: 1. left_shift um 3 Stellen => 8, 4 < 8 => TRUE */
	c = 4 < 1 << n;

	/*1 / 1 / 3.2 + 0 = 1 / 3.2 = 0.3125 */
	c = 1/e/b+a;

	return (0);
}

int exercise12(void){

	// TODO

	return (0);
}
