#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//variables
int number1,number2,answer=0,choice;


void input()
{ 
	 cout<<"\n\n\t\t Enter first number : ";
	cin>>number1;
	cout<<"\n\n\t\t Enter second number : "; 
	cin>>number2;
	
	 cout<<"\n\n\t\t ------ SELECET OPERATION ------ : ";  
	 cout<<"\n\n\t\t ------ 1. Addition (+) "; 
	  cout<<"\n\n\t\t ------ 2. Subtraction (-) ";
	  cout<<"\n\n\t\t ------ 3. Multiplication (*) ";
	  cout<<"\n\n\t\t ------ 4. Division(/) ";
	  cout<<"\n\n\t\t ------ SELECT AN OPERATOR ----------- ";
      cin>>choice;
}


void addition()
		{
				answer = number1 + number2 ;
		}
	void subtraction()
		{
			answer = number1 - number2 ;
	
		}
		void multiplication()
       {
	   answer = number1 * number2 ;
	   } 
	   	
	   		void division()
       {
	   answer = number1 / number2 ;
	   } 
	   
	   void process()
	      
	{   if(choice==1)
	    {
		addition();
	   
	   }
	   
	   	else if(choice==2)
	    {
		subtraction();
	   }
	   
	   
	   else if(choice==3)
	    {
		multiplication();
	    
	   }
	   	
		  
		   else if (choice==4)
	    {
		division()	;
	    }
	}

void output()
{
	cout<<"\n\n\t\t ANSWER = "<<answer ;
}


int main(int argc, char** argv) {
	start:
	input();
	process();
	output();
		cout<<"\n\n\t\t Press [1] to continue " ;
		int proceed;
		cin>>proceed;
		if(proceed==1)
		{
		system("cls");
		goto start;
	   }
	   else
	   {
	   	cout<<"\n\n\t\t THANK YOU FOR USING THIS APP " ;
	   	exit(0);
	   }
		
			cout<<"\n\n\t\t Press any key to exit ";
		
	
	return 0;
}
