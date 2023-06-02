#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
string firstName, lastName;
int accountNumber,amt;
double Amount,depAmt,withAmt;



void inputDetails(string fName,string lName,int acctNum,double amt)
{
	firstName=fName;
	lastName=lName;
	accountNumber= acctNum;
	Amount=amt;
}




void depositAddition(double amt)
{  depAmt= amt;
	Amount += depAmt;
	cout<<"\n\n\t\t You have deposited : GHC " << depAmt;
	
}

void withdrawal(double amt)
{
	withAmt=amt;
	if(Amount<withAmt)
	{
		cout<<"\n\n\t\t INSUFFICIENT FUNDS!";
	}
	else
	{
		Amount -=withAmt;
		cout<<"\n\n\t\t Amount Withdrawn : GHC "<<withAmt;
	}
}


double balance()
{
	return Amount;
}


void outputCustDetails()
{
	cout<<"\n\n\t\t =============== ACCOUNT DETAILS ============= ";
	cout<<"\n\n\t\t ============== Account number : "<<accountNumber;
	cout<<"\n\n\t\t ============== Account name : "<<firstName<<" "<<lastName;
	cout<<"\n\n\t\t ============== Amount : GHC "<<Amount;
	
	
}
int main(int argc, char** argv) {
	string fn,ln;
	int accNum;
	double amount,dep,withdraw;
	
	cout<<"\n\n\t\t Enter first name : ";
	cin>>fn;
	
	cout<<"\n\n\t\t Enter last name : ";
	cin>>ln;
	
	cout<<"\n\n\t\t Enter Accout number : ";
	cin>>accNum;
	
	cout<<"\n\n\t\t Enter intial amount : ";
	cin>>amount;
	
	
	inputDetails(fn,ln,accNum,amount);
	outputCustDetails();
	cout<<"\n\n\t\t_________________________________________________________ ";
	
	int choice;
	    cout<<"\n\n\t\t ======= 1.DEPOSIT ======= ";
		cout<<"\n\n\t\t ======= 2.WITHDRAW ======= ";
		cout<<"\n\n\t\t ======= 3.EXIT======= ";
			cout<<"\n\n\t\t ======= ENTER :";
			cin>>choice;
		
	if(choice==1)
	{
	cout<<"\n\n\t\t Enter amount to deposit : ";
	cin>>dep;
	depositAddition(dep);
	}
	
		
	else if(choice==2)
	{
	cout<<"\n\n\t\t Enter amount to Withdraw : ";
	cin>>withdraw;
	withdrawal(withdraw);
	}
	else if(choice==3)
	{
	cout<<"\n\n\t\t THANK YOU FOR BANKING WITH US : ";
    exit(0);
	}
	
    cout<<"\n\n\t\t Account Balance : "<<balance();
	return 0;
}
