#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float amount,interestAmount,investmentAmount,rate;

class Bank{
	public:
		float interestRate(float rate)
		{
		return rate;
		}
};


class Gcb:public Bank{
	public:
		void investment()
		{   cout<<"\n\n\t\t\t GCB BANK ";
		    cout<<"\n\t          ________________________ ";
			cout<<"\n\n\t\t Enter amount :  ";
			cin>>amount;
			
			rate = 0.0178;
			interestAmount = rate * amount ;
			cout<<"\n\n\t\t Your interest rate : "<<interestAmount;
				investmentAmount= interestAmount +  amount ;
			cout<<"\n\n\t\t Investment : "<<investmentAmount;
		}
};

class Calbank:public Bank{
	public:
		void investment()
		{    cout<<"\n\n\t\t\t CALBANK  ";
		     cout<<"\n\t  ________________________ ";  
			cout<<"\n\n\t\t Enter amount :  ";
			cin>>amount;
			
			rate = 0.0381;
			interestAmount = rate * amount ;
			cout<<"\n\n\t\t Your interest amount : "<<interestAmount;
			
			
			investmentAmount = interestAmount +  amount ;
			cout<<"\n\n\t\t Investment : "<<investmentAmount;
		}
};


		

int main(int argc, char** argv) {
//	Gcb g = Gcb();
//	g.investment();
	
	Calbank c = Calbank();
	c.investment();
	
	
	return 0;
}
