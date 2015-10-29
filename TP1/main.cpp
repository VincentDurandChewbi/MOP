#include <stdio.h>

int main(){

	int nb_facades = 0;

	printf("Nombre de façades? : ");
	scanf("%i",&nb_facades);

	for(int i = 1;i<=nb_facades;i++){
		int l_facade;
		int h_facade;
		int pignon;
		int h_pignon;
		int nb_fenetres;
		int nb_portes;

		printf("Largeur de la façade n°%d? : ",i);
		scanf("%i",&l_facade);

		printf("Hauteur de la facade n°%d? (hors pignon) : ",i);
		scanf("%i",&h_facade);

		printf("Presence d'un pignon? : ");
		scanf("%i",&pignon);
		
		if(1 == pignon){
			printf("Hauteur du pignon? : ");
			scanf("%i",&h_pignon);
		}
		
		printf("Nombre de fenetres? : ");
		scanf("%i",&nb_fenetres);
		
		for(int j = 1;j<=nb_fenetres;j++){
		
			int l_fenetre;
			int h_fenetre;
			
			printf("Largeur de la fenetre n°%d? : ",j);
			scanf("%i",&l_fenetre);

			printf("Hauteur de la fenetre n°%d? : ",j);
			scanf("%i",&h_fenetre);
		}
		
		printf("Nombre de portes? : ");
		scanf("%i",&nb_portes);
		
		for(int k = 1;k<=nb_fenetres;k++){
			int l_porte;
			int h_porte;
			
			printf("Largeur de la porte n°%d? : ",k);
			scanf("%i",&l_porte);

			printf("Hauteur de la porte n°%d? : ",k);
			scanf("%i",&h_porte);
		}
		
		
	}
	return 0;
}
