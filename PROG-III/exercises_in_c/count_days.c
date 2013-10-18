///*
// * test.c
// *
// *  Created on: 10.09.2013
// *      Author: kjung
// */
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#include "count_days.h"
//
///*
// * vs. #define typsicher => diese Lösung benutzen
// */
//const int TRUE = 1;
//const int FALSE = 0;
//
//int maim/* n */(int argc, char **argv) {
//
//	time_t my_time = time(0);
//	struct tm * jetzt = localtime( &my_time );
//
//	int kauf_tag, kauf_monat, kauf_jahr;
//
//	int jetzt_tag 	= jetzt -> tm_mday;
//	int jetzt_monat = jetzt -> tm_mon + 1;
//	int jetzt_jahr 	= jetzt -> tm_year + 1900;
//
//	printf("Tag: ");
//	scanf("%d", &kauf_tag);
//
//	if(kauf_tag <= 0 || kauf_tag > 31){
//		printf("WRONG INPUT");
//		return (0);
//	}
//	else{
//		printf("Monat: ");
//		scanf("%d", &kauf_monat);
//		if(kauf_monat <= 0 || kauf_monat > 12){
//			printf("WRONG INPUT");
//			return (0);
//		}else{
//			printf("Jahr: ");
//			scanf("%d", &kauf_jahr);
//
//			if((kauf_tag == 29 && kauf_monat == 2 && !ist_schaltjahr(&kauf_jahr))){
//				printf("WRONG INPUT");
//				return (0);
//			}
//			else{
//				int result = tage_vergangen(&kauf_tag, &kauf_monat, &kauf_jahr, &jetzt_tag, &jetzt_monat, &jetzt_jahr);
//
//				if(korrekt_input(&kauf_tag, &kauf_monat, &kauf_jahr, &jetzt_tag, &jetzt_monat, &jetzt_jahr) == TRUE){
//					printf("Produkt gekauft/verliehen seit: %d Tagen", result);
//				}
//				else{
//					printf("WRONG INPUT");
//				}
//			}
//			return (0);
//		}
//	}
//}
//
//int korrekt_input(int *kauf_tag, int *kauf_monat, int *kauf_jahr, int *jetzt_tag, int *jetzt_monat, int *jetzt_jahr){
//
//	if ((*jetzt_tag < *kauf_tag) && (*jetzt_monat < *kauf_monat) && (*jetzt_jahr <= *kauf_jahr)){
//		return (FALSE);
//	}
//	else{
//		return (TRUE);
//	}
//}
//
//int ist_schaltjahr(int *kauf_jahr){
//
//	if((*kauf_jahr % 400) == 0 || ((*kauf_jahr % 4) == 0 && (*kauf_jahr % 100) != 0)){
//		return (TRUE);
//	}
//	else {
//		return (FALSE);
//	}
//}
//
//int tage_vergangen(int *kauf_tag, int *kauf_monat, int *kauf_jahr, int *jetzt_tag, int *jetzt_monat, int *jetzt_jahr){
//
//	/*
//	 * Für dyn. Arrays: int *feld = (int *) calloc(100, sizeof(int));
//	 */
//	int monate[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//
//	int tage_berechnet = 0;
//
//	/*
//	 * Übergabe des Zeigers an die Funktion ist_schlatjahr, nicht den Wert,
//	 * da kauf_jahr bereits ein Zeiger ist -> keine Dereferenzierung
//	 */
//	if(*kauf_jahr < *jetzt_jahr){
//		while(*kauf_jahr < *jetzt_jahr){
//			if(ist_schaltjahr(kauf_jahr)){
//				monate[2] = 29;
//			}
//			else{
//				monate[2] = 28;
//			}
//			while(*kauf_monat < (sizeof(monate) / sizeof(int))){
//				while(*kauf_tag <= monate[*kauf_monat]){
//					tage_berechnet += 1;
//					*kauf_tag += 1;
//				}
//				*kauf_tag = 1;
//				*kauf_monat += 1;
//			}
//			*kauf_monat = 1;
//			*kauf_jahr += 1;
//		}
//		while(*kauf_monat < *jetzt_monat){
//			while(*kauf_tag <= monate[*kauf_monat]){
//				tage_berechnet += 1;
//				*kauf_tag += 1;
//			}
//			*kauf_tag = 1;
//			*kauf_monat += 1;
//		}
//		while(*kauf_tag < *jetzt_tag){
//			tage_berechnet += 1;
//			*kauf_tag += 1;
//		}
//		return (tage_berechnet -= 1);
//	}else if(*kauf_jahr == *jetzt_jahr){
//		if(ist_schaltjahr(kauf_jahr)){
//			monate[2] = 29;
//		}
//		else{
//			monate[2] = 28;
//		}
//		while(*kauf_monat < *jetzt_monat){
//			while(*kauf_tag <= monate[*kauf_monat]){
//				tage_berechnet += 1;
//				*kauf_tag += 1;
//			}
//			*kauf_tag = 1;
//			*kauf_monat += 1;
//		}
//		while(*kauf_tag < *jetzt_tag){
//			tage_berechnet += 1;
//			*kauf_tag += 1;
//		}
//	}
//	return (tage_berechnet);
//}
