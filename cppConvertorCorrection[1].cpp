#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double rate ,amount,convertedAmt;
string to,from;
int convertFrom,convertTo;
void input()
{   
	cout<<"\n\n\t\t \xb2\xb2\xb2\ Enter Amount : ";
	cin>>amount;
	
	cout<<"\n\n\t\t \xb2\xb2\xb2\  CONVERT FROM \xb2\xb2\xb2\ : ";
	cout<<"\n\n\t\t \xb2\xb2\xb2\ 1. US DOLLAR($) ";
	cout<<"\n\n\t\t \xb2\xb2\xb2\ 2. POUNDS ";
	cout<<"\n\n\t\t \xb2\xb2\xb2\ 3. EURO(Eu) ";
	cout<<"\n\n\t\t \xb2\xb2\xb2\ 4. CEDI(GHC) ";
	cout<<"\n\n\t\t \xb2\xb2\xb2\ 5. NAIRA(N) ";
	cout<<"\n\n\t\t \xb2\xb2\xb2\ Select currency converting from :";
	cin>>convertFrom;
	cout<<"\n\n\t\t _____________________________________________________________________________________ ";
	
	
	cout<<"\n\n\t\t \xb2\xb2\xb2\ CONVERT TO \xb2\xb2\xb2\ : ";
	cout<<"\n\n\t\t \xb2\xb2\xb2\ 1. US DOLLAR($) ";
	cout<<"\n\n\t\t \xb2\xb2\xb2\ 2. POUNDS ";
	cout<<"\n\n\t\t \xb2\xb2\xb2\ 3. EURO(Eu) ";
	cout<<"\n\n\t\t \xb2\xb2\xb2\ 4. CEDI(GHC) ";
	cout<<"\n\n\t\t \xb2\xb2\xb2\ 5. NAIRA(N) ";
	cout<<"\n\n\t\t \xb2\xb2\xb2\ Select currency converting to  :";
	cin>>convertTo;
	

}

void  conversion()

{	//dollar conversion start
	
	if(convertFrom==1 && convertTo==1)
	{  from="USD";
	to="USD";
		rate=1;
		convertedAmt=amount*rate;
		}
	
	

else if (convertFrom==1 && convertTo==2)
	{ from="USD";
	to="POUNDS";
		rate=17.2;
		convertedAmt=amount*rate;
		
	}
	else if (convertFrom==1 && convertTo==3)
	{ from="USD";
	to="EURO";
		rate=0.87;
		convertedAmt=amount*rate;
		
	}
	else if (convertFrom==1 && convertTo==4)
	{  from="USD";
	to="CEDI";
		rate=14.8;
		convertedAmt=amount*rate;
		
	}
	else if (convertFrom==1 && convertTo==5)
	{  from="USD";
	to="NAIRA";
		rate=442.5;
		convertedAmt=amount*rate;
		
	}
//pounds conversion start
	
	else if(convertFrom==2 && convertTo==1)
	{  from="POUNDS";
	to="USD";
		rate=0.0023;
		convertedAmt=amount*rate;
		}
	
	

else if (convertFrom==2 && convertTo==2)
	{ from="POUNDS";
	to="POUNDS";
		rate=1;
		convertedAmt=amount*rate;
		
	}
	else if (convertFrom==2 && convertTo==3)
	{ from="POUNDS";
	to="EURO";
		rate=1.15;
		convertedAmt=amount*rate;
		
	}
	else if (convertFrom==2 && convertTo==4)
	{  from="POUNDS";
	to="CEDI";
		rate=17.75;
		convertedAmt=amount*rate;
		
	}
	else if (convertFrom==2 && convertTo==5)
	{  from="POUNDS";
	to="NAIRA";
		rate=527.53;
		convertedAmt=amount*rate;
		
	}

	//POUNDS conversion ends here
	


	//EURO conversion start
	
	else if(convertFrom==3 && convertTo==1)
	{  from="EURO";
	to="USD";
		rate=0.0023;
		convertedAmt=amount*rate;
		}
	
	

else if (convertFrom==3 && convertTo==2)
	{ from="EURO";
	to="POUNDS";
		rate=0.87;
		convertedAmt=amount*rate;
		
	}
	else if (convertFrom==3 && convertTo==3)
	{ from="EURO";
	to="EURO";
		rate=1;
		convertedAmt=amount*rate;
		
	}
	else if (convertFrom==3 && convertTo==4)
	{  from="EURO";
	to="CEDI";
		rate=15.35;
		convertedAmt=amount*rate;
		
	}
	else if (convertFrom==3 && convertTo==5)
	{  from="EURO";
	to="NAIRA";
		rate=458.35;
		convertedAmt=amount*rate;
		
	}

	//CEDI conversion ends here
	else if(convertFrom==4 && convertTo==1)
	{  from="CEDI";
	to="USD";
		rate=0.068;
		convertedAmt=amount*rate;
		}
	
	

else if (convertFrom==4 && convertTo==2)
	{ from="CEDI";
	to="POUNDS";
		rate=0.058;
		convertedAmt=amount*rate;
		
	}
	else if (convertFrom==4 && convertTo==3)
	{ from="CEDI";
	to="EURO";
		rate=0.065;
		convertedAmt=amount*rate;
		
	}
	else if (convertFrom==4 && convertTo==4)
	{  from="CEDI";
	to="CEDI";
		rate=1;
		convertedAmt=amount*rate;
		
	}
	else if (convertFrom==4 && convertTo==5)
	{  from="CEDI";
	to="NAIRA";
		rate=29.87;
		convertedAmt=amount*rate;
	//CEDI conversion ENDS here	
	}

	//NAIRA conversion STARTS here
	else if(convertFrom==5 && convertTo==1)
	{  from="NAIRA";
	to="USD";
		rate=0.0023;
		convertedAmt=amount*rate;
		}
	
	

else if (convertFrom==5 && convertTo==2)
	{ from="NAIRA";
	to="POUNDS";
		rate=0.058;
		convertedAmt=amount*rate;
		
	}
	else if (convertFrom==5 && convertTo==3)
	{ from="NAIRA";
	to="EURO";
		rate=0.0022;
		convertedAmt=amount*rate;
		
	}
	else if (convertFrom==5 && convertTo==4)
	{  from="NAIRA";
	to="CEDI";
		rate=0.033;
		convertedAmt=amount*rate;
		
	}
	else if (convertFrom==5 && convertTo==5)
	{  from="NAIRA";
	to="NAIRA";
		rate=1;
		convertedAmt=amount*rate;
	//NAIRA conversion ENDS here	
	}
}
	
	void output()
{
	cout<<"\n\n\t\t \xb2\xb2\xb2\  CONVERSION  \xb2\xb2\xb2\ ";
		cout<<"\n\n\t\t \xb2\xb2\xb2\ CONVERSION FROM : " <<from;
			cout<<"\n\n\t\t \xb2\xb2\xb2\ CONVERSION FROM to : " <<to;
	cout<<"\n\n\t\t \xb2\xb2\xb2\ RATE : " <<rate;
	cout<<"\n\n\t\t \xb2\xb2\xb2\ CONVERTED AMOUNT : " <<amount * rate ;	
		}

int main(int argc, char** argv) {
	 cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2\xb2\ DERRICK CURRENCY CONVERTOR \xb2\xb2\xb2\xb2\xb2\xb2\ : ";
	 input();
	 conversion();
	 output();
	return 0;
}
