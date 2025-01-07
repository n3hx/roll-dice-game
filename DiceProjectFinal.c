#include <stdio.h> // To scan functions 
#include <stdlib.h> // Standard library to generate random numbers
#include <time.h> // To seed the time value as to generate the random values 
#include <string.h> // To read characters

void red() //represent the colour red
{
	printf("\033[1;31m");
}

void green() //represent the colour green
{
	printf("\033[1;32m");
}

void yellow() //represent the colour yellow
{
	printf("\033[1;33m");
}

void blue()  //represent the colour blue
{
	printf("\033[1;34m");
}

void purple()  //represent the colour purple
{
	printf("\033[1;35m");
}

void cyan()  //represent the colour cyan
{
	printf("\033[1;36m");
}

void white()  //represent the colour white 
{
	printf("\033[1;37m");
}

//*NumArray : a pointer to an array of integers, where each element represents the number of occurrences of a particular face on the dice
void game_history(int Faces, int Throws, int* NumArray)
{
	FILE *history;
	history = fopen("game_history.txt", "a"); //open file for append 
	
	fprintf(history, "The dice had %d faces.\n", Faces);
	fprintf(history, "It was thrown %d times.\n", Throws);
	fprintf(history, "\n");
	
	for (int i = 1; i<= Faces; i++)
      	{
      		fprintf(history,"Occurences of %d : %d\n", i, NumArray[i]);
      	}
      	
      	fprintf(history, "___________________________________________\n");
      	fclose(history); 	
}

void view_history()
{
	char reader[150];
	FILE *history;
	history = fopen("game_history.txt", "r"); //open file for read 
	
	blue();
	printf("\nHISTORY:\n");
	
	while(fgets(reader, sizeof(reader), history)) //read every line in the file
	{
		white();
		printf("%s", reader);
	}
	
	fclose(history);
}

//*NumArray : a pointer to an array of integers, where each element represents the number of occurrences of a particular face on the dice
void dice_roll(int Faces, int Throws, int* NumArray) 
{
	int Roll;
		
	// Initialise random values generator algorithm  
      	srand( time(NULL) ); // NULL = Number of seconds elasped
      	
      	for (int i = 1; i<= Throws; i++)
      	{
      		Roll = rand() % Faces + 1;
      		printf("Throw %d: \n", i);
      		
      		switch(Roll){
      			case 1:
      				purple();
      				printf("┌─────────┐\n");      
				printf("|         |\n");		
				printf("|    1    |\n");
				printf("|         |\n");  
				printf("└─────────┘\n");
				white();
				break;
      			case 2:
      				yellow();
      				printf("┌─────────┐\n");      
				printf("|         |\n");		
				printf("|    2    |\n");
				printf("|         |\n");  
				printf("└─────────┘\n");
				white();
				break;
      			case 3: 
      				blue();
      				printf("┌─────────┐\n");      
				printf("|         |\n");		
				printf("|    3    |\n");
				printf("|         |\n");  
				printf("└─────────┘\n");
				white();
				break;
      			case 4:
      				green();
      				printf("┌─────────┐\n");      
				printf("|         |\n");		
				printf("|    4    |\n");
				printf("|         |\n");  
				printf("└─────────┘\n");
				white();
				break;
      			case 5:
      				cyan();
	 			printf("┌─────────┐\n");      
				printf("|         |\n");		
				printf("|    5    |\n");
				printf("|         |\n");  
				printf("└─────────┘\n");
				white();
				break;
      			case 6:
      				purple();
      				printf("┌─────────┐\n");      
				printf("|         |\n");		
				printf("|    6    |\n");
				printf("|         |\n");  
				printf("└─────────┘\n");
				white();
				break;
      			case 7:
      				yellow();
      				printf("┌─────────┐\n");      
				printf("|         |\n");		
				printf("|    7    |\n");
				printf("|         |\n");  
				printf("└─────────┘\n");
				white();
				break;
      			case 8:
      				blue();
      				printf("┌─────────┐\n");      
				printf("|         |\n");		
				printf("|    8    |\n");
				printf("|         |\n");  
				printf("└─────────┘\n");
				white();
				break;
      			case 9:
      				green();
      				printf("┌─────────┐\n");      
				printf("|         |\n");		
				printf("|    9    |\n");
				printf("|         |\n");  
				printf("└─────────┘\n");
				white();
				break;
      			case 10:
      				cyan();
      				printf("┌─────────┐\n");      
				printf("|         |\n");		
				printf("|    10   |\n");
				printf("|         |\n");  
				printf("└─────────┘\n");
				white();
				break;
      			case 11:
      				purple();
      				printf("┌─────────┐\n");      
				printf("|         |\n");		
				printf("|    11   |\n");
				printf("|         |\n");  
				printf("└─────────┘\n");
				white();
				break;
      			case 12:
      				yellow();
      				printf("┌─────────┐\n");      
				printf("|         |\n");		
				printf("|    12   |\n");
				printf("|         |\n");  
				printf("└─────────┘\n");
				white();
				break;
      			case 13:
      				blue();
      				printf("┌─────────┐\n");      
				printf("|         |\n");		
				printf("|    13   |\n");
				printf("|         |\n");  
				printf("└─────────┘\n");
				white();
				break;
      			case 14:
      				green();
      				printf("┌─────────┐\n");      
				printf("|         |\n");		
				printf("|    14   |\n");
				printf("|         |\n");  
				printf("└─────────┘\n");
				white();
				break;
      			case 15:
      				cyan();
      				printf("┌─────────┐\n");      
				printf("|         |\n");		
				printf("|    15   |\n");
				printf("|         |\n");  
				printf("└─────────┘\n");
				white();
				break;
      			case 16:
      				purple();
      				printf("┌─────────┐\n");      
				printf("|         |\n");		
				printf("|    16   |\n");
				printf("|         |\n");  
				printf("└─────────┘\n");
				white();
				break;
      			case 17:
      				yellow();
      				printf("┌─────────┐\n");      
				printf("|         |\n");		
				printf("|    17   |\n");
				printf("|         |\n");  
				printf("└─────────┘\n");
				white();
				break;
      			case 18:
      				blue();
      				printf("┌─────────┐\n");      
				printf("|         |\n");		
				printf("|    18   |\n");
				printf("|         |\n");  
				printf("└─────────┘\n");
				white();
				break;
      			case 19:
      				green();
      				printf("┌─────────┐\n");      
				printf("|         |\n");		
				printf("|    19   |\n");
				printf("|         |\n");  
				printf("└─────────┘\n");
				white();
				break;
      			case 20:
      				cyan();
      				printf("┌─────────┐\n");      
				printf("|         |\n");		
				printf("|    20   |\n");
				printf("|         |\n");  
				printf("└─────────┘\n");
				white();
				break;
      			case 21:
      				purple();
      				printf("┌─────────┐\n");      
				printf("|         |\n");		
				printf("|    21   |\n");
				printf("|         |\n");  
				printf("└─────────┘\n");
				white();
				break;
      			case 22:
      				yellow();
      				printf("┌─────────┐\n");      
				printf("|         |\n");		
				printf("|    22   |\n");
				printf("|         |\n");  
				printf("└─────────┘\n");
				white();
				break;
      			case 23:
      				blue();
      				printf("┌─────────┐\n");      
				printf("|         |\n");		
				printf("|    23   |\n");
				printf("|         |\n");  
				printf("└─────────┘\n");
				white();
				break;
      			case 24:
      				green();
      				printf("┌─────────┐\n");      
				printf("|         |\n");		
				printf("|    24   |\n");
				printf("|         |\n");  
				printf("└─────────┘\n");
				white();
				break;
      			case 25:
      				cyan();
      				printf("┌─────────┐\n");      
				printf("|         |\n");		
				printf("|    25   |\n");
				printf("|         |\n");  
				printf("└─────────┘\n");
				white();
				break;
		}
    		NumArray[Roll]++; //increment the number of count for the generated number    
      	}
}

//*NumArray : a pointer to an array of integers, where each element represents the number of occurrences of a particular face on the dice
void occurrences(int Faces, int Throws, int* NumArray) 
{
	float Occurrence;
	// Calculating the occurences as a percentage
      	for (int i = 1; i<= Faces; i++)
      	{
      		Occurrence = (float)NumArray[i]/Throws*100;
      		printf("Occurences of %d : %.2f%%\n", i, Occurrence);
      	}
}

//*NumArray : a pointer to an array of integers, where each element represents the number of occurrences of a particular face on the dice
void user_input(int Faces, int Throws, int* NumArray)
{
	green();
      	printf("Welcome to this twisted dice roll game\n\n");
      	purple();
      	printf("┌─────────┐  ┌─────────┐  ┌─────────┐\n");
      	white();
      	printf("|         |  |         |  |         |\n");
      	purple();
      	printf("|    ?    |  |    ?    |  |    ?    |\n");
      	white();
      	printf("|         |  |         |  |         |\n");
      	purple();
      	printf("└─────────┘  └─────────┘  └─────────┘\n");
      	printf("\n");
      	
      	cyan();
      	printf("Rules are simple\n");
      	printf("1. Your dice can have a maximum of 25 faces\n");
      	printf("2. You can roll your dice up to 500 times \n\n");
      	yellow();
      	printf("LET'S PLAY\n\n");
      	white();
      	
      	do
		{
		printf("Enter the number of faces: ");
		scanf("%d", &Faces);
			
			if (Faces < 1 || Faces > 25)
			{
			red();
			printf("WARNING: This number is out of range\n");
			printf("Please enter a value between 1-25.\n");
			white();
			}				      		
	      	} while (Faces < 1 || Faces > 25);
		      	
		do
	      	{
      		printf("Enter the number of throws: ");
    		scanf("%d", &Throws);
    		      		
			if (Throws < 1 || Throws > 500)
		      	{
		      	red();
			printf("WARNING: This number is out of range\n");
		      	printf("Please enter a value between 1-500.\n");
		      	white();
		      	}
		} while (Throws < 1 || Throws > 500);
      	
      dice_roll(Faces, Throws, NumArray);
      occurrences(Faces, Throws, NumArray);
      game_history(Faces, Throws, NumArray);   
}

void time_played()
{
	char* TimeArray;
	time_t seconds;
	struct tm *current;

	seconds = time(NULL);
	
	current = localtime(&seconds);	
	
	TimeArray= calloc(100, sizeof(char));
	
	blue();
	strftime(TimeArray, 100, "\nYou played this game on %A, %B %d.\n", current);
	printf("%s", TimeArray);
	strftime(TimeArray, 100, "The time you finished this game is %I:%M %p.\n", current);
	printf("%s", TimeArray);
	white();
	
	free(TimeArray);
}

void play_again()
{
	int Faces, Throws; 
	int* NumArray;  //*NumArray : a pointer to an array of integers, where each element represents the number of occurrences of a particular face on the dice
	char choice;
		
	do 
	{ 
	yellow();
	printf("\n1.To roll again (Y)");
	printf("\n2. To view history (H)");
	printf("\n3. To exit the game (N)");
	white();
	printf("\nChoice: ");
	scanf("%s", &choice);
	
		if (choice == 'y' || choice =='Y')
		{
			NumArray= calloc(25, sizeof(int));
			user_input(Faces,Throws,NumArray);
			play_again();
			free(NumArray);
		}
		else if (choice == 'h' || choice =='H')
		{
			view_history();
		}
		else if (choice == 'n' || choice =='N')
		{ 
			green();		
		 	printf("\n\nThank you for playing,\n");
		 	printf("See you next time.\n");
		 	white();
		 	time_played();
		 	exit(0);
		}
	}while ((choice == 'n' || choice =='N') || (choice == 'y' || choice =='Y') || (choice == 'h' || choice =='H'));
	 
	red();
	printf("WARNING: This character is invalid\n");
	printf("Please enter 'y' or 'n'.\n");
	white();
	play_again(); // calling play_again() funtion until valid input is given
}

int main()
{ 
	int Faces, Throws;
	int* NumArray;  // to store occurences of each number
	
	NumArray= calloc(25, sizeof(int));
	
      	user_input(Faces, Throws, NumArray);  
      	play_again();	
	
	free(NumArray);

      	return 0;  
 }     
