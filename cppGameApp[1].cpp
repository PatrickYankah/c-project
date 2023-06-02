#include <iostream>
using namespace std;
#include <cstdlib>
#include <time.h>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	string playerName;
	int i,rounds,playerScore= 0,computerScore=0,playerChoice,computerChoice;
	
	cout<<"\n\n\t\t\t ROCK,PAPER AND SCISSORS GAME ";
	cout<<"\n\t\t ___________________________________________";
	
	cout<<"\n\n\t\t Enter player name :";
	cin>>playerName;
	
	system("cls");
	cout<<"\n\n\t\t How many rounds do you want to play :";
	cin>>rounds;
	 for (i=1;i<=rounds;i++)
	 {
	
	    system("cls");
	    cout<<"\n\n\t\t Player name      : "<<playerName;
	    cout<<"\n\n\t\t Number of Rounds : "<<i<<"/"<<rounds;
	    cout<<"\n\n\t\t computer score   : "<<computerScore;
	    cout<<"\n\n\t\t player score     : "<<playerScore;
	    
	    
	     cout<<"\n\n\t\t  1. ROCK ";
         cout<<"\n\n\t\t  2. PAPER ";	
		 cout<<"\n\n\t\t  3. SCISSORS "; 
		 cout<<"\n\n\t\t  CHOOSE BETWEEN ROCK,PAPAER AND SCISSORS : ";   
		 cin>>playerChoice;
		  cout<<"\n\n\t\t Please wait for final results...";
		   Sleep(2000);
		  cout<<"...";
     Sleep(2000);
		 srand(time(0));
		  computerChoice = (rand()%3)+1;
		   
		  
		  if(playerChoice == 1 && computerChoice ==1)
		  { 
			cout<<"\n\n\t\t computer chooses rock";
			cout<<"\n\n\t\t user chooses rock";
		  	cout<<"\n\n\t\t player draws ";  
		  	playerScore++;
		  	 Sleep(2000);
		  }
		  
		  else if (playerChoice == 1 && computerChoice == 2 )
          {     cout<<"\n\n\t\t computer chooses paper";
               cout<<"\n\n\t\t user chooses paper";
          		cout<<"\n\n\t\t computer wins";
          		playerScore++;
          		 Sleep(2000);
          		
	    	}	
				  
		 else if (playerChoice == 1 && computerChoice == 3)
          {     cout<<"\n\n\t\t computer chooses scissors";
                cout<<"\n\n\t\t user chooses rock";
          		cout<<"\n\n\t\t player loss ";
          		computerScore++;
          		 Sleep(2000);
          		
	    	}	
	    	 else if (playerChoice == 2 && computerChoice == 1 )
          {     cout<<"\n\n\t\t computer chooses rock";
          		cout<<"\n\n\t\t player wins";
          		playerScore++;
          		 Sleep(2000);
          		
	    	}	
				  
		 else if (playerChoice == 2 && computerChoice == 2)
          { 	cout<<"\n\n\t\t computer chooses paper";
          		cout<<"\n\n\t\t player loss ";
          		computerScore++;
          		 Sleep(2000);
          		
	    	}	
	    	 else if (playerChoice == 2 && computerChoice == 3 )
          {  	cout<<"\n\n\t\t computer chooses scissors";
          		cout<<"\n\n\t\t player wins";
          		playerScore++;
          		 Sleep(2000);
          		
	    	}	
				  
		 else if (playerChoice == 3 && computerChoice == 1)
          {  	cout<<"\n\n\t\t computer chooses rock";
          		cout<<"\n\n\t\t player loss ";
          		playerScore++;
          		 Sleep(2000);
          	}
        else if (playerChoice == 3 && computerChoice == 2 )
          {   	cout<<"\n\n\t\t computer chooses paper";
          		cout<<"\n\n\t\t player wins";
          		playerScore++;
          		 Sleep(2000);
          		
	    	}	
				  
		 else if (playerChoice == 3 && computerChoice == 3)
          {  	cout<<"\n\n\t\t computer chooses scissors";
          		cout<<"\n\n\t\t player plays draw ";
          		computerScore ++;
          		 Sleep(2000);
          		
	    	}	
          		
	    	
	    else 
	    {
	    	cout<<"\n\n\t\t computer wins ";
	    	computerScore++;
	    	cout<<"\n\n\t\t Press any key to continue ";
	    	 Sleep(2000);
	    	
		}
	}

				  

	
	
	
		
		
		
		
	
	
	


	return 0;

}
