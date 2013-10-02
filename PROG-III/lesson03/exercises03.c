#include <stdio.h>

#define PI 3.1415927
#define HOCHZWEI(wert) ((wert) * (wert))
#define HOCHDREI(wert) ((wert) * (wert) * (wert))

#define SWAP(wert1, wert2, typ) { typ tmp = wert1; wert1 = wert2; wert2 = tmp; }

#define ARRAY_SIZE 24
char my_bitvec[ARRAY_SIZE / 8];

float kugelOberflaeche(float radius){

	float flaeche = (4 * PI * HOCHZWEI(radius));

	return (flaeche);
}

float kugelVolumen(float radius){

	float volumen =  (float) 4/3 * (PI * HOCHDREI(radius));

	return (volumen);
}

void kugelBerechnungIO(){

	float radius;
	printf("Bitte Radius eingeben: ");
	scanf("%f", &radius);
	printf("O = %0.3f, wenn r = %0.3f\n", kugelOberflaeche(radius), radius);
	printf("V = %0.3f, wenn r = %0.3f\n", kugelVolumen(radius), radius);
}

/*
 * Um ein Array zu übergeben/zurückzugeben,
 *  gebe den Zeiger auf den 1. Element als param ein
 *
 */

int *bubbleSort(int *zahlen){

	int n, j;

	for(n = 5; n > 1; n--){
		for(j = 0; j < n - 1; j++){
			if(zahlen[j] > zahlen[j + 1]){
				SWAP(zahlen[j], zahlen[j + 1], int);
			}
		}
	}

	return (zahlen);
}

int berechneMedian(int *zahlen){

	bubbleSort(zahlen);

	return (zahlen[2]);
}

void berechneMedianIO(){

	int zahlen[5];
	int j;

	for(j = 0; j < 5; j++){
		scanf("%d", & zahlen[j]);
	}
	printf("Median der Eingabe ist %d", berechneMedian(zahlen));
}

void knobelei(char **argv) {

	char *z;
	char code[] = "SKIANZUG";

	z = *++argv;
	z += 4;

	while(*z - '7'){
		printf("%c", code[*z-- - '0']);
	}
	printf("\n");
}

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

char get(char *bitvec, int index){

	if(index < ARRAY_SIZE){
	  return (bitvec[index/8] & (1 << index%8) ? 1 : 0);
	}else{
		printf("ERROR");
		return (-1);
	}
}

void set(char *bitvec, int index){

	if(index < ARRAY_SIZE){
		my_bitvec[index / 8] |= (1 << index % 8);
	}
	else{
		printf("ERROR");
	}
}

void reset(char *bitvec, int index){

	if(index < ARRAY_SIZE){
		my_bitvec[index / 8] &= (1 << index % 8);
	}
}

int berechneDatum(int t, int m, int j, int h){


	int w;

	if(m == 1){
		m = 13;
		j -= 1;
	}
	else if(m == 2){
		m = 14;
		j -= 1;
	}

	w = ((t + (((m + 1) * 26) / 10) + ((5 * j) / 4) + (h / 4) - (2 * h) - 1) % 7);

	if(w < 0){
		while(w < 0){
			w+= 7;
		}
	}

	return (w);
}

void berechneDatumIO(){

	int t, m, j, h;

	printf("Tag: ");
	scanf("%d", &t);
	printf("Monat: ");
	scanf("%d", &m);
	printf("Jahr: ");
	scanf("%d", &j);

	h = j / 100;
	j %= 100;

	int w = berechneDatum(t, m, j, h);
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
}
