#include "textQuestFunctions.h"

void load()
{
	printf("Not Implemented!\n\n");
}

int main()
{
	printf("+------------------------+\n");
    printf("|                        |\n");
    printf("|       CODE QUEST       |\n");
    printf("|                        |\n");
    printf("+------------------------+\n\n");

	printf("--Main Menu--\n\n");
	printf("1 - New Game\n");
	printf("2 - Load Game\n");
	printf("3 - Exit\n\n");

	int UserInput;

	printf("Select: ");
	scanf("%d", &UserInput);

	while(UserInput != 3){

		if(validate(1,3,UserInput)){
			if(UserInput == 1){
				newgame();
				printf("Select: ");
				scanf("%d", &UserInput);
				}
			else if(UserInput == 2){
				load();
				printf("Select: ");
				scanf("%d", &UserInput);
				}

			}
		else{
			printf("Invalid input, try again: ");
			scanf("%d", &UserInput);
			}
	}

	printf("Good Bye!\n");

	return 0;
}
