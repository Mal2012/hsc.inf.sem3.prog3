#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int countGame(int *z, int *n){

	if(*n > *z){
		return (1);
	}
	else if(*n < *z){
		return (-1);
	}
	return (0);
}

void countGameIO() {

	srand(time(0));
	int z = rand() % 10;

	int n;
	int i;

	for (i = 0; i < 3; ++i) {
		printf("Input: ");
		scanf("%d", &n);
		if(countGame(&z, &n) == 1){
			printf("too big\n");
			continue;
		}
		else if(countGame(&z, &n) == -1){
			printf("too small\n");
			continue;
		}
		else if(countGame(&z, &n) == 0){
			printf("bingo\n");
			break;
		}
	}
	printf("Die Lösung war: %d", z);
}

int islandsArray(){

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
	getchar();

	return (0);
}

float fahrenheitToCelsius(float *n){

	float result = (5 * (*n - 32)) / 9;

	return (result);
}

float celsiusToFahrenheit(float *m){

	float result = ((9 * *m) / 5) + 32;

	return (result);
}



void fahrenheitAndCelsiusIO(){

	float m, n;
	printf("Geben Sie Temperatur in °C ein: ");
	scanf("%f", &n);
	printf("Die angegebene Temperatur in °F: %0.1f\n", celsiusToFahrenheit(&n));
	printf("Geben Sie Temperatur in °F ein: ");
	scanf("%f", &m);
	printf("Die angegebene Temperatur in °C: %0.1f\n", fahrenheitToCelsius(&m));
}

void compilerTest(){

	int a = 4;
	double b = 8;
	int c = b;

	printf("%1f\n",(a * b / c));
	printf("%1f\n", (a / c * b));
	printf("%1f\n", a  / b * c);
	printf("%1f\n", (1 / (c / a * b)));
}
