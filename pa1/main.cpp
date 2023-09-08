#include main.h

int main void()
{
	int selection =-1;
	profile newProfile;
	profile* pp;

	while(selection != 0)
	{
		selection = menu();
		switch (selection)
		{
			case 1:
				displayRules();
				break;
			case 2:
				playGame(profile);
				break;
			case 3:
				LoadGame(fstream profiles,profile* pp);
				break;
			case 4: addCommand(commandList);
				break;
			case 5:
				removeCommand(commandList);
				break;
			case 6: exit(commandList, profiles);
				break;
		}
	}
}



	}

