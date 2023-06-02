#include <iostream>
#include <windows.h>//helps the computer to sleep for sometime
#include <iomanip>//helps the  user to accept  decimal operation (10.00)
#include <ctime>//helps the user to see the current time
#include <fstream>//helps the programmer to save a file
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
string username,password,itemName[100];
int numtoProcess,quantity[100],i,overAllQty=0;
double price[100],total[100],overAlltotal=0,amtPaid, balance;
char choice;


//time
time_t t=time(0);
char*dt= ctime(&t); 
void login()
{      tryAgain:
		cout<<"\n\n\t\t\t\t   \xb2\xb2\xb2\xb2\xb2\xb2  LOGIN   \xb2\xb2\xb2\xb2\xb2\xb2 ";
	    
	    cout<<"\n\n\t\t  \xb2\xb2\xb2\xb2\xb2\xb2 Enter username : ";
	    cin>>username;
	    
	    cout<<"\n\n\t\t   \xb2\xb2\xb2\xb2\xb2\xb2 Enter Password : ";
	    cin>>password;
	    
	    if(username != "patrick7" || password != "0011")
	    {
	     system("color 47");
	     cout<<"\n\n\t\t Incorrect username and password ";	
	     Sleep(2000);
	     system("cls");
	     Sleep(1000);
	     goto tryAgain; 
		}
		else
		{
		 Sleep(2000);
		 system("cls");
		 system("color 27");
		 cout<<"\n\n\t\t WELCOME "<<username;
		 cout<<"\n\n\t\t Please wait while system loads ";	
		 cout<<".";
		 Sleep(2000);
		 cout<<"..";
		 Sleep(3000);
		 cout<<".....";
		system("color 27");
		 system("cls");
		 system("color 1f");
		 
		 		
		}
}

void enterItems()
{
	cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Enter number of items to process    : ";
    cin>>numtoProcess;
    
    for (i=0;i<numtoProcess;i++)
    {   cin.sync();
    	cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Enter item to name ("<<i+1<<")  : ";
    	getline(cin,itemName[i]);
    	
    	
    	cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Enter unit price ("<<i+1<<")    :GHC ";
    	cin>>price[i];
    	
    	cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Enter item quantity ("<<i+1<<") : ";
    	cin>>quantity[i];
    	cout<<"\n\n\t\t\t ________________________________________________";
    	
    	
	}
}

void processItems()
{
	 for (i=0;i<numtoProcess;i++)
	 {
	 	total[i] = quantity[i] * price [i] ;
	 	overAlltotal += total[i];
	 	overAllQty += quantity[i];
	 }
}

void output()


{   system("cls");
	system("color 27");
     cout<<"\n\n\t\t\t\t   \xb2\xb2\xb2\xb2\xb2\xb2  MYSHOP APPLICATION   \xb2\xb2\xb2\xb2\xb2\xb2 ";
    cout<<"\n\n\t\t\t\t   \xb2\xb2\xb2\xb2\xb2\xb2  BILL   \xb2\xb2\xb2\xb2\xb2\xb2 ";
	cout<<"\n\n\t\t\t ________________________________________________";
	
	
	for (i=0;i<numtoProcess;i++)
	{
		cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Item name     ("<<i+1<<")     : "<<itemName[i];
		cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Item price    ("<<i+1<<")     : GHC"<<fixed<<setprecision(2)<<price[i];
		cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Item quantity ("<<i+1<<")     : "<<quantity[i];
		cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 TOTAL         ("<<i+1<<")     : GHC"<<fixed<<setprecision(2)<<total[i];
		cout<<"\n\n\t\t ______________________________________________________________ ";
	}
	  cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2  OVERALL QUANTITY  : "<<overAllQty;
	  cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2  OVERALL TOTAL     : GHC"<<fixed<<setprecision(2)<<overAlltotal;
	  cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2  AMOUNT PAID      : GHC";
	  cin>>amtPaid;
	  
	  balance = amtPaid - overAlltotal;
	  Sleep(2000);
	 cout<<"\n\n\t\t\t Please wait for final bill...";
	 Sleep(1000);
	 
	 system("cls");
	 system("color 57");
	  cout<<"\n\n\t\t\t\t   \xb2\xb2\xb2\xb2\xb2\xb2  MYSHOP APPLICATION   \xb2\xb2\xb2\xb2\xb2\xb2 ";
     cout<<"\n\n\t\t\t\t   \xb2\xb2\xb2\xb2\xb2\xb2  BILL   \xb2\xb2\xb2\xb2\xb2\xb2 ";
	 cout<<"\n\n\t\t\t ________________________________________________";
	 cout<<"\n\n\t\t\t Attendant Name                 :"<<username<<"         "<<"Date:"<<dt   ;
	 for (i=0;i<numtoProcess;i++)
	{
		cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Item name         : "<<itemName[i];
		cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Item price        : GHC"<<fixed<<setprecision(2)<<price[i];
		cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Item quantity     : "<<quantity[i];
		cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 TOTAL             : GHC"<<fixed<<setprecision(2)<<total[i];
		cout<<"\n\n\t\t ______________________________________________________________ ";
	}
	  cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2  OVERALL QUANTITY  : "<<overAllQty;
	  cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2  OVERALL TOTAL     : GHC"<<fixed<<setprecision(2)<<overAlltotal;
	  cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2  AMOUNT PAID       : GHC"<<fixed<<setprecision(2)<<amtPaid;
	  cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 BALANCE            : GHC"<<fixed<<setprecision(2)<<balance;
}
	 
 void saveAsFile()
 {  
 ofstream file;
 file.open("shopFile.txt",std::ios_base::app);
 	file<<"\n\n\t\t\t\t   ~~~~~~~~~~~~  MYSHOP APPLICATION   ~~~~~~~~~~~~ ";
     file<<"\n\n\t\t\t\t    ~~~~~~~~~~~~  BILL   ~~~~~~~~~~~~ ";
	 file<<"\n\n\t\t\t ________________________________________________";
	 file<<"\n\n\t\t\t Attendant Name                 :"<<username<<"         "<<"Date:"<<dt   ;
	 for (i=0;i<numtoProcess;i++)
	{
		file<<"\n\n\t\t ******* Item name         : "<<itemName[i];
		file<<"\n\n\t\t ******* Item price        : GHC"<<fixed<<setprecision(2)<<price[i];
		file<<"\n\n\t\t ******* Item quantity     : "<<quantity[i];
		file<<"\n\n\t\t ******* TOTAL             : GHC"<<fixed<<setprecision(2)<<total[i];
		file<<"\n\n\t\t ______________________________________________________________ ";
	}
	  file<<"\n\n\t\t *******  OVERALL QUANTITY  : "<<overAllQty;
	  file<<"\n\n\t\t *******  OVERALL TOTAL     : GHC"<<fixed<<setprecision(2)<<overAlltotal;
	  file<<"\n\n\t\t ******* AMOUNT PAID        : GHC"<<fixed<<setprecision(2)<<amtPaid;
	  file<<"\n\n\t\t ******* BALANCE            : GHC"<<fixed<<setprecision(2)<<balance;
}
  


int main(int argc, char** argv) {
   login();
   begin:	
    cout<<"\n\n\t\t\t\t   \xb2\xb2\xb2\xb2\xb2\xb2  MYSHOP APPLICATION   \xb2\xb2\xb2\xb2\xb2\xb2 ";
	cout<<"\n\n\t\t\t ________________________________________________";
	enterItems();
    processItems();
    output();
    cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Press[S/s] to save file : ";
	  cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Press[Y/y] to continue application : ";
	  cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Press[N/n] to exit : ";
	  cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 select choice ";
	   cin>>choice;
	  
	  
	  
	  if(choice =='S' || choice == 's' )
	  {
	  	cout<<"\n\n\t\t Please wait whiles file saves ....... ";
	  	saveAsFile();
	  	system("cls");
	  	system("color 27");
	  	cout<<"\n\n\t\t ************** FILE SAVED SUCESSFULLY ! **********************";
	  	
	  cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Press[Y/y] to continue application : ";
	  cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Press[N/n] to exit : ";
	  cout<<"\n\n\t\t select choice  : ";
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
}
	  
	  
//	  else if (choice =='Y' || choice == 'y' )
//	  {system("cls");
//	    system("color 17");
//	  	goto begin;
//	  }
//	  else 
//	  {
//	  	cout<<"\n\n\t\t  ------ Thank you for using this application ------- ";
//	  	exit(0);
//	  }




	return 0;
	
}
