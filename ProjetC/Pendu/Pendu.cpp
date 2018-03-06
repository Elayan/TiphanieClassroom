#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"
#include "time.h"


int main()
{
	char lettre = 0;
	char motSecret[50][50] = { "marron", "bonjour", "anthropomorphique", "polythyrene", "curcubitace", "rhododendron", "cuniculiculture", "sternuation", "sympathicectomie", "thaumaturge", "amélanchier", "epactase", "trichollomanie", "paraskevidekatriaphobie", "hippopotomonstrosesquippedaliophobie" };
	int taillemots[50] = {6, 7, 17, 11, 11, 12, 15, 11, 16, 11, 11, 8, 14, 23, 36};
	int mottire = 0;
	char motTrouve[50] = "*************************************************";
	int lettreTrouvee = 0;
	int vie = 10;
	int i = 0;
	int gagne = 0;
	bool lettreBonne = false;

	srand(time(NULL));
	mottire = rand() % 15;

	motTrouve[taillemots[mottire]] = '\0';


	printf("Bienvenu au : Jeu du pendu");
	while (vie > 0 && gagne == 0)
	{
		lettreBonne = false;
		printf("Il reste %d vie", vie);
		if (vie > 1)
			printf("s");
		printf("\n");
		printf("Quel est le mot secret ? %s\n", motTrouve);
		printf("Choisissez une lettre : \n");
		scanf_s(" %c", &lettre);
		for (i = 0; i < taillemots[mottire]; i++)
		{
			if (motSecret[mottire][i] == lettre)
			{
				motTrouve[i] = lettre;
				lettreBonne = true;
				lettreTrouvee = lettreTrouvee + 1;
			}
		}

		if (lettreBonne == false)
			vie = vie - 1;
		

		
		if (lettreTrouvee == taillemots[mottire])
		{

			printf("Bravo ! C'est bien le mot : %s \n", motSecret[mottire]);
			gagne = 1;
		}
			if (vie == 0)
			printf("Dommage... le mot etait : %s \n", motSecret[mottire]);


	}


system("pause");
    return 0;


	
}

