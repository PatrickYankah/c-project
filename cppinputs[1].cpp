#include <iostream>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string firstName,lastName;
	int hrsWorked,daysWorked;
	float hrRate=100.00,dailyWage=0,weelyWage=0,monthlyWage=0;
	float taxPercent=0.12,snnitPercent=0.0532,taxAmt=0,snnitAmt=0,netPay=0;
	//input area
	cout<<"\n\n\t\t ~~~~~~ EMPLOYEE SALARY APPLICATION ~~~~~~~~ ";
	cout<<"\n\n\t\t ~~~~~~~ Enter Employee's first name : ";
	cin>>firstName;
	
	cout<<"\n\n\t\t ~~~~~~~ Enter Employee's last name : ";
	cin>>lastName;
	
	cout<<"\n\n\t\t ~~~~~~~ Enter hr(s) worked : ";
		cin>>hrsWorked;
		
	cout<<"\n\n\t\t ~~~~~~~ Enter number of working days : ";
	cin>>daysWorked;
		
	//process area;
	dailyWage = hrRate * hrsWorked;
	weelyWage =dailyWage * daysWorked;
	monthlyWage = weelyWage * 4;
	taxAmt = monthlyWage * taxPercent;
	snnitAmt = monthlyWage * taxPercent;
	netPay = 	monthlyWage - taxAmt - snnitAmt;
	
		 //output
	 cout<<"\n\n\t\t ____________________________________________________";
	 cout<<"\n\n\t\t ~~~~~~ SALARY SLIP ~~~~~~~~~~";
	 	 cout<<"\n\n\t\t ~~~~~~ Employee's Fullname : "<<firstName<<" "<<lastName;
	 	 cout<<"\n\n\t\t ~~~~~~~  Hours worked : "<<hrsWorked;
	 	  cout<<"\n\n\t\t ~~~~~~~  Hourly Rate : GHC " <<hrRate;
	 cout<<"\n\n\t\t ~~~~~~~ Daily Wage : GHC " << dailyWage;
	 	cout<<"\n\n\t\t ~~~~~~~ Number of Days Worked: GHC " << daysWorked;
	  cout<<"\n\n\t\t ~~~~~~~ Weekly Wage : GHC " << weelyWage;
	  	  cout<<"\n\n\t\t ~~~~~~~ Monthly Wage : GHC " << monthlyWage;
	  	   cout<<"\n\n\t\t ~~~~~~~ Tax Amt(12%) : GHC " << taxAmt;
	  	   cout<<"\n\n\t\t ~~~~~~~ SNNIT CONTRIBUTION(5.32%) : GHC " << snnitAmt;
	  	   cout<<"\n\n\t\t ~~~~~~~ Net Salary : GHC " << netPay;
	cin.get();
}
