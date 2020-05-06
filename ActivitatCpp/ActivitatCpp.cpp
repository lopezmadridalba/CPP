#include <iostream>
#include "BasePlayer.h"

using namespace std;


int main()
{
	BasePlayer player(300.0f);
	BasePlayer EnrageEnemy(200.0f);
	
	BasePlayer* punterPlayer = &player;
	
	EnrageEnemy.ApplyDamage(punterPlayer, 40.0f);
	
	cout << "Player life: " << punterPlayer->getLife() << endl;

	char str[50], ch;
	int i;

	printf("Per començar aquesta aventura, digues el teu nom: ");

	i = 0;
	ch = getchar();

	while (ch != '\n')
	{
		str[i] = ch;
		i++;
		ch = getchar();
	}

	str[i] = '\0';

	printf("Hola %s", str);
	printf(" ,estas preparat/da per l'aventura?");

	printf("\nS o N: \n");
	char volJugar;

	volJugar = getchar();
	if (volJugar == 'S')
	{
		BasePlayer EnrageEnemy2(150.0f);
		BasePlayer* punterPlayer2 = &player;
		EnrageEnemy.ApplyDamage(punterPlayer2, 110.0f);

		printf("\nJordi és un dels metges els quals està ajudant amb la pandemia del COVID-19, el qual cada dia, arrisca la seva vida");
		printf("\nJordi comença entrant en la planta 2, amb 2 mascarilles, 2 guants, una mascara protectora i la vestimenta adequada");
		printf("\nHa d'atendre a 20 pacients, els quals estan fent cua per fer-se les proves del COVID-19.");
		printf("\nAmb cada cop mes cansanci, passa a la planta 3, on es troba amb els altres 20 pacients, els quals començen a estar més greus");
		printf("\ni porten dies ingressats i amb risc de poder anar a UCI.");
		printf("\nQuan sent que han passat molts pacients, molt cansanci i quan s'aixuga les gotes de suor... Va a planta 3");
		printf("\non es troba amb altres 20 malalts en situació critica pero... sent que no pot mes... S'esta marejant...");
		printf("\n");
		printf("\nDegut a les situacions que està passant, decideixen fer una prova de COVID-19 per veure si s'ha contagiat,");
		printf("\nEl resultat de les proves son obvies, el virus ataca als pulmons reduint a la meitat la seva capacitat.");
		printf("\nPulmons afectats amb 300 de capacitat queden a = %f", punterPlayer->getLife());
		printf("\n");
		printf("\nUn simple error com aixugar-se la suor, ha provocat tot això, sigues mes conscient pel Jordi i per tots.");
		printf("\n");
	}
	else {
		printf("Com has dit que no... Quedes eliminat, no volem cobards... Fins un altre... ");
	}
}