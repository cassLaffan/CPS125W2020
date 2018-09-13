#include<stdio.h>

void clearScreen()
{
	int ClearVariable = 0;

	while(ClearVariable <  40){
		printf("\n");
	}
}

int validate(int low, int high, int UserInput)
{
	return (low <= UserInput && high >= UserInput);

}


void rest_at_inn(float *days_remaining, int *hp_remaining, int max_hp){

	*days_remaining -= 1;
	*hp_remaining = max_hp;
	printf("You rested up at the inn.\n\n");

	}

void train(float *days_remaining, int *hp_remaining, int *experience){

	*days_remaining -= 0.5;
	*hp_remaining -= 2;
	*experience += 10;
	printf("You did some traning!\n\n");

	}

void newgame()
{
    int Strength;
    int Speed;
    int Defense;
    int Intelligence;

    float StrengthRatio;
    float SpeedRatio;
    float DefenseRatio;
    float IntelligenceRatio;

    int AttributeSum;

    int FinalStrength;
    int FinalSpeed;
    int FinalDefense;
    int FinalIntelligence;
    int Luck;

    printf("Character Creation\n");
    printf("Please enter your desired stats for your character:\n ");
    printf("\n");

    printf("Enter strength: ");
    scanf("%d", &Strength);
    printf("Enter speed: ");
    scanf("%d", &Speed);
    printf("Enter defense: ");
    scanf("%d", &Defense);
    printf("Enter intelligence: ");
    scanf("%d", &Intelligence);

    //Assume that user input is valid

    AttributeSum = Strength + Speed + Defense + Intelligence;

    StrengthRatio = (float)Strength / (float)AttributeSum;
    SpeedRatio = (float)Speed / (float)AttributeSum;
    DefenseRatio = (float)Defense / (float)AttributeSum;
    IntelligenceRatio = (float)Intelligence / (float)AttributeSum;

    FinalStrength = (int)(StrengthRatio * 100) ;
    FinalSpeed = (int)(SpeedRatio * 100);
    FinalDefense = (int)(DefenseRatio * 100);
    FinalIntelligence = (int)(IntelligenceRatio * 100);

    Luck =  AttributeSum % 30;

    printf("Your player's final stats are:\n");
    printf("\n");
    printf("Strength: %d \n", FinalStrength);
    printf("Speed: %d \n", FinalSpeed);
    printf("Defense: %d \n", FinalDefense);
    printf("Intelligence: %d \n", FinalIntelligence);
    printf("Luck: %d \n", Luck);

	//Enemy Stats
	int eStrength = 30;
	int eDefense = 40;
	int eIntelligence = 25;
	int eHP = 10;

	//Player Health

	int pHP = 10;

	int UserInput;

	printf("Battle Start!\n");

	while((pHP > 0) && (eHP > 0))

{
		printf("Your HP: %d ", pHP);
		printf("Enemy HP: %d\n", eHP);

		printf("1 - Attack\n2 - Magic\n");
		printf("Select your move: ");
		scanf("%d", &UserInput);

		if(UserInput == 1){
			float AttackPower = (float)FinalStrength/(float)eDefense;
			eHP = (int)(eHP - (AttackPower*5));
			printf("You attacked the enemy!\n");
		}
		else if(UserInput == 2){
			float MagicPower = (float)FinalIntelligence/(float)eIntelligence;
			eHP = (int)(eHP - (MagicPower*5));
			printf("You shocked the enemy!\n");
		}
		if(eHP > 0){
			float eAttackPower = (float)eStrength/(float)FinalDefense;
			pHP = (int)(pHP - (eAttackPower*5));
			printf("The enemy attacked you!\n");
		}
		if(pHP <= 0)
			printf("You died!\n");
		if(eHP <= 0)
			printf("You won!\n");


}

}

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