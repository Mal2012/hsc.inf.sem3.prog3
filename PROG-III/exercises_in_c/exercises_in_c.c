/*
 * exercises01_neu.c
 *
 *  Created on: 16.10.2013
 *      Author: kjung
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRSIZE 24
#define PI 3.1415927
#define HOCHZWEI(wert) ((wert) * (wert))
#define HOCHDREI(wert) ((wert) * (wert) * (wert))
#define SWAP(wert1, wert2, typ) { typ tmp = wert1; wert1 = wert2; wert2 = tmp; }

//void knobelei(char **argv) {
//
//	char *z;
//	char code[] = "SKIANZUG";
//
//	z = *++argv;
//	z += 4;
//
//	while(*z - '7'){
//		printf("%c", code[*z-- - '0']);
//	}
//	printf("\n");
//}

/*
 * S K I A N Z U G  -> Ergebnis: 51, 52, 54, 55 -> 1 3 4 6
 * char *argv = {'7' '6' '4' '3' '1' '2' '3'}
 * char *code = {'S' 'K' 'I' 'A' 'N' 'Z' 'U' 'G' }
 * char *z = *++argv; => 0.Zeihen des 1. Arguments [0. Argument: Name d. Programms] => 7
 * z = z + 4; => '1'
 * while(1 - '7' != 0)
 * -> argv[4] = 1 => 1 - 0 = 49 - 48 = 1 => code[1] = K, z--
 * z = 3 => '3'
 * while(3 - 7 != 0)
 * -> argv[3] = 3 => 3 - 0 = 51 - 48 = 3 => code[3] = A, z--
 * z = 2 => '4'
 * while(4 - 7 != 0)
 * -> argv[2] = 4 => 4 - 0 = 52 - 48 = 4 => code[4] = N, z--
 * z= 1 => '6'
 * while(6 - 7 != 0)
 * -> argv[1] = 6 => 6 - 0 = 54 - 48 = 6 => code[6] = U, z--
 * z = 0 => '7'
 * while(7 - 7 != 0)
 * -> abbruch => KANU
 */


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

	/* int n = 3, k = 4;
	 * float a = 0, b = 3.2;
	 * int m;
	 * char c, e = 1;
	 */

	/* = 3, da n % 2 != 0 -> FALSE => 2. Anweisung ausführen */
	/* m = (n % 2) ? (-1 + n) : (n); */

	/* = 0, da '/' und '*' gleiche Priorität haben -> Links -> Rechts => 1/2 = 0 * x = 0 */
	/* a = (1 / 2) * b; */

	/* TRUE da: 1. left_shift um 3 Stellen => 8, 4 < 8 => TRUE */
	/* c = 4 < 1 << n; */

	/*1 / 1 / 3.2 + 0 = 1 / 3.2 = 0.3125 */
	/* c = 1/e/b+a; */

	return (0);
}

int exercise12(unsigned char c, int n){

	int digit, i;

	printf("Binärformat: ");
	for(i = 0; i <= 7; i++){
		digit = (c >> (7 - i)) & 0x01;
		printf("%d", digit);
	}
	n = n % 8;
	for(i = 1; i <= n; i++){
		if(c >= 128){
			c = (c << 1)+1;
		}
		else{
			c = c << 1;
		}
	}
	printf("\n");
	printf("Binärformat: ");
	for(i = 0; i <= 7; i++){
		digit = (c >> (7 - i)) & 0x01;
		printf("%d", digit);
	}
	return (0);
}

int exercise13(void){

	/*
	 * int a = 10, b, c;
	 *
	 * a *= 5 + 10 => a = a * (5 + 10) = 150
	 * a *= b = c = 20 => a = a * (b = (c = 20)) = 3000
	 * b = b == c => b = (b == c) => b = (b == c) ? 1 : 0 => 1
	 * a >>= b + 2 => a = a >> (b + 2) => a >> 3 -> 3000 >> 3 = 3000 : 2^3 = 375
	 * a &= 0x3e => 375 = 101110111 & 000111110 => 000110110 = 54
	 * a = 3; b = 2;
	 * a *= b += a <<= a + b => a = a << (a + b) => b = b + a; a = a* b; => a = 9408, b = 98
	 */

	int a = 4;
	double b = 8;
	int c = b;

	printf("%lf\n", a*b/c);
	printf("%lf\n", a/c*b);
	printf("%lf\n", a/b*c);
	printf("%lf\n", 1/(c/a*b));

	return (0);
}

int ist_schaltjahr(int *kauf_jahr){

	if((*kauf_jahr % 400) == 0 || ((*kauf_jahr % 4) == 0 && (*kauf_jahr % 100) != 0)){
		return (1);
	}
	else {
		return (0);
	}
}

int exercise14(void){

	int jahr, monat, tag;
	int monate[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	printf("Bitte den Tag eingeben");
	scanf("%d", &tag);

	printf("Bitte Monat eingeben: ");
	scanf("%d", &monat);

	printf("Bitte Jahr eingeben: ");
	scanf("%d", &jahr);

	if(ist_schaltjahr(&jahr)){
		monate[2] = 29;
	}

	int i, tmp;
/*
 * 1.1.2000
 */
	if(monat == 1){
		printf("%d", tag);
		return (0);
	}
	else{
		for(i = 1; i < monat; i++){
			tmp += monate[i];
		}
		printf("%d", tmp + tag);
		return (0);
	}
}

int exercise15(void){

	int n, j, i, c = 5;
	int zahlen[5];

	for(i = 0; i < 5; i++){
		printf("Geben Sie noch %d Zahlen ein: ", c--);
		scanf("%d", &zahlen[i]);
	}

	for(n = 5; n > 1; n--){
		for(j = 0; j < n - 1; j++){
			if(zahlen[j] > zahlen[j + 1]){
				SWAP(zahlen[j], zahlen[j + 1], int);
			}
		}
	}
	printf("%d", zahlen[2]);

	return (0);
}

// TODO

//char exercise16_get(char *bitvec, int index){
//
//	if(index < ARRSIZE){
//	  return (bitvec[index/8] & (1 << index%8) ? 1 : 0);
//	}else{
//		printf("ERROR");
//		return (-1);
//	}
//}
//
//void exercise16_set(char *bitvec, int index){
//
//	if(index < ARRSIZE){
//		bitvec[index / 8] |= (1 << index % 8);
//	}
//	else{
//		printf("ERROR");
//	}
//}
//
//void exercise16_reset(char *bitvec, int index){
//
//	if(index < ARRSIZE){
//		bitvec[index / 8] &= (1 << index % 8);
//	}
//}

int exercise17(void){

	int t, m, j, h;

	printf("Tag: ");
	scanf("%d", &t);
	printf("Monat: ");
	scanf("%d", &m);
	printf("Jahr: ");
	scanf("%d", &j);

	int w;

	if(m == 1){
		m = 13;
		j -= 1;
	}
	else if(m == 2){
		m = 14;
		j -= 1;
	}
	h = j / 100;
	j %= 100;

	w = ((t + (((m + 1) * 26) / 10) + ((5 * j) / 4) + (h / 4) - (2 * h) - 1) % 7);

	if(w < 0){
		while(w < 0){
			w+= 7;
		}
	}
	switch(w){
		case 0 : printf("Sonntag");
			break;
		case 1 : printf("Montag");
			break;
		case 2 : printf("Dienstag");
			break;
		case 3 : printf("Mittwoch");
			break;
		case 4 : printf("Donnerstag");
			break;
		case 5 : printf("Freitag");
			break;
		case 6 : printf("Samstag");
			break;
		default:
			printf("ERROR");
	}
	return (0);
}

int main(void){

	return (0);
}
