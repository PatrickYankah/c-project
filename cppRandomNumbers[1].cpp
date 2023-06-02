#include <iostream>
using namespace std;
#include <cstdlib>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	srand(time(0));
	//int random = rand();
//	int random = (rand()%3)+1;
//	int random = rand()%501;

//	int random = (rand()%500)+1;
	//	cout<<random;
	
	int random = (rand()%5)+1;

int guess;
int i=0 ;
begin:
cout<<"\n\n\t\t\ \xb2\xb2\xb2\xb2\xb2\xb2\xb2\  GUESSING GAME \xb2\xb2\xb2\xb2\xb2\xb2\xb2\  ";



do
{
	cout<<"\n\n\t\t\ \xb2\xb2\xb2\xb2\xb2\xb2\xb2\  Guess a number 1 and 100 ?  ";
	cin>>guess;
	
	i++;
	
	if(guess>random)
	{
		cout<<"\n\n\t\t\ GUESS TOO HIGH!!!!!  ";
	}
	else if(guess<random)
	{
		cout<<"\n\n\t\t\ GUESS TOO LOW !!!!!  ";
	}
	else
	{
		cout<<"\n\n\t\t\ CONGRATULATIONS YOU GUESSED IT RIGHT AFTER "<<i<<"attempts";
	}

	 
}
	while( i<5);
	cout<<"\n\n\t\t\ ___________________________________________________";
	
	
	cout<<"\n\n\t\t\ YOU LOST !!!  ";
	
	char choice;	  
		  
 cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Press[Y/y] to continue application : ";
	  cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Press[N/n] to exit : ";
	  cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 select choice ";
	   cin>>choice;
	   if (choice =='Y' || choice == 'y' )
	  {system("cls");
	    system("color 17");
	  	goto begin;
	  }
	  else
	   { 
	   	 cout<<"\n\n\t\t  ------ Thank you for using this application ------- ";
	   	 exit(0);
	  }

	  
	  




		  
		  
		 
	  
	  
	  
		
	 		
	 
	
	return 0;
}
