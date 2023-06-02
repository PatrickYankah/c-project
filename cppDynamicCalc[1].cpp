#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	double firstNumber,secondNumber,answer=0;
	int choice;
	start:
	system("color 47");
	cout<<"\n\n\t\t ~~~~~~~~~~~~~~~~ DYNAMIC CALCULATOR ~~~~~~~~~~~~~~~~~~~~~~~~ ";
		cout<<"\n\n\t\t ~~~~~~~~~~~~~ Enter first number : ";
		cin>>firstNumber;
		cout<<"\n\n\t\t ~~~~~~~~~~~~~ Enter second number : ";	
	cin>>secondNumber;
	     selectchoice: 
		cout<<"\n\n\t\t _________________________________________";
		cout<<"\n\n\t\t ~~~~~~~~~~~~~~~~ Select an operator ~~~~~~~~~~~~~~~~~~~~~~~~ ";
		cout<<"\n\n\t\t ~~~~~~~~~~~~~ 1. ADDITION [ + ]";
		cout<<"\n\n\t\t ~~~~~~~~~~~~~ 2. SUBTRACTION [ - ]";
		cout<<"\n\n\t\t ~~~~~~~~~~~~~ 3. DIVISION[ / ]";
		cout<<"\n\n\t\t ~~~~~~~~~~~~~ 4. MULTIPLICATON [ * ]";
		cout<<"\n\n\t\t ~~~~~~~~~~~~~ 5. MODULO [ % ]";
		cout<<"\n\n\t\t ~~~~~~~~~~~~~~~~ Select an operator : ";
		cin>>choice;
		if(choice ==1)
		{
			answer = firstNumber + secondNumber ;
		}
		else if (choice ==2)
		{
			answer = firstNumber - secondNumber ;
	
		}
	else if(choice==3)
       {
	   answer = firstNumber / secondNumber ;
	   } 
	   	
	   	else if(choice==4)
       {
	   answer = firstNumber * secondNumber ;
	   } 
	   else 
	   {
	   	cout<<"\n\n\t\t PLEASE SELECT BETWEEN 1 AND 4 ";
	   	cout<<"\n\n\t\t please wait ...............";
	   	goto selectchoice;
	   	
	   }
	   
	   //output
	   cout<<"\n\n\t\t _________________________________________________";
	   cout<<"\n\n\t\t ANSWER = "<<answer;
	    char proceed;
	    cout<<"\n\n\t\t  press [Y/y] to continue";
	    cout<<"\n\n\t\t  press [N/n] to Exit";
	    cout<<"\n\n\t\t  Enter here ";
	    cin>>proceed;
	         
	         if(proceed == 'y'|| proceed =='y')
	         {
	         	system("cls");
	         	goto start;
	         	
			 }
			 
			 
			 else
			 {
			 	cout<<"\n\n\t\t thank you for using this application";
			 
			 }
			 
			 
	return 0;
}
