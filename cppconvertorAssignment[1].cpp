#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//variables

float amount,amount1,amount3,amount2,amount4,amount5,rate;
int currency,currency1,currency2;
float poundsRate=0.842837,
euroRate=0.964967,cediRate=14.4960,usdRate=1;
int answer =0;
void input()
{ 

     cout<<"\n\n\t\t ======= CONVERTOR APPLICATION =========  "; 
	 cout<<"\n\n\t\t Enter amount to exchange: ";
	cin>>amount;
	cout<<"\n\n\t\t CONVERT FROM: "; 
	
	
	  
	 cout<<"\n\n\t\t \xb2\xb2\xb2  1. USD ";
	  cout<<"\n\n\t\t \xb2\xb2\xb2 2. POUNDS ";
	  cout<<"\n\n\t\t \xb2\xb2\xb2 3. EURO";
	  cout<<"\n\n\t\t \xb2\xb2\xb2 4. CEDI";
	  cout<<"\n\n\t\t \xb2\xb2\xb2 5. NAIRA";
	  cout<<"\n\n\t\t  SELECT CURRENCY  : ";
 
	 
	  cin>>currency;
	  
	  cout<<"\n\n\t\t CONVERT TO : "; 
	  cout<<"\n\n\t\t \xb2\xb2\xb2 1. USD ";
	  cout<<"\n\n\t\t \xb2\xb2\xb2 2. POUNDS ";
	  cout<<"\n\n\t\t \xb2\xb2\xb2 3. EURO";
	  cout<<"\n\n\t\t \xb2\xb2\xb2 4. CEDI";
	  cout<<"\n\n\t\t \xb2\xb2\xb2 5. NAIRA";
	  
	  cout<<"\n\n\t\t  SELECT CURRENCY   : ";
	  cin>>currency2;
	  
	  
	  
	  
     
}

  

  
  
  
  
  
  
  
  void process ()
 {
 
 
 amount2 = amount * 1;
 
 }
 	
	   void output()

{
cout<<"\n\n\t\t AMOUNT CONVERTED = "<<amount2 ;

cout<<"\n\n\t\t RATE = "<<usdRate ;

}

void process1 ()
		{
		amount3 = amount * 0.842837;	 
		}
		


	   void output1()

{
cout<<"\n\n\t\t ANSWER = "<<amount3  ;


}
void process2 ()
		{
		amount4 = amount * 0.964967;	 
		}
		


	   void output2()

{
cout<<"\n\n\t\t ANSWER = "<<amount4 ;


}
 

void process3 ()
		{
		amount5 = amount * 0.964967;	 
		}
		


	   void output3()

{
cout<<"\n\n\t\t ANSWER = "<<amount5 ;


}
	   

int main(int argc, char** argv) {
   input();	
   process();
   output();
  
	return 0;
}

 

 
 
 
 
	
	
	
	   



  
   	   

int tmain(int argc, char** argv) {
   input();	
   process1();
   output1();
	return 0;
}
	
	
