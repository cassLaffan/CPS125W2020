#include <stdio.h>
#include "textQuestFunctions.h"

int saveGame(Player player, int exp, int nextLvl, float days, Item inventory[], int quantities[], int inventorySize){

	char filename[33];

	print("Enter filename to write: ");
	scanf("%s", filename);

	FILE *saveGameFile = NULL;

	int flag;

	saveGameFile = fopen(filename, "w");

	if(saveGameFile == NULL){
		while(saveGameFile == NULL){
			printf("Invalid save file!\n");
			flag = 0;
			}
		}

	else{
		flag = 1;
		fprintf(saveGameFile, "%d," , player->strength);
		fprintf(saveGameFile, "%d," , player->defense);
		fprintf(saveGameFile, "%d," , player->speed);
		fprintf(saveGameFile, "%d," , player->intelligence);
		fprintf(saveGameFile, "%d," , player->luck);
		fprintf(saveGameFile, "%d," , player->level);

		fprintf(saveGameFile, "%d," , player->currentHP);
		fprintf(saveGameFile, "%d," , player->maxHP);

		fprintf(saveGameFile, "%d," , exp);

		fprintf(saveGameFile, "%d," , nextLvl);

		fprintf(saveGameFile, "%.2f," , days);

		int i;

		for(i = 0; i < inventorySize; i++){
			fprintf(saveGameFile, "%d," , inventory->itemType[i]);
			fprintf(saveGameFile, "%d," , inventory->itemPower[i]);
		}

	}

	fclose(saveGameFile);

	return flag;

}
