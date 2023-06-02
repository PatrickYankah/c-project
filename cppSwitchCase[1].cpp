#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
string ussdcode;
cout<<"\n\n\t\t ~~~~~~~~~~~~~~~~~~~~ USSD APPLICATION ~~~~~~~~~~~~~~~~~~~~~~~~";
cout<<"\n\n\t\t \xb2\xb2\xb2\xb2 Enter USSD Code " ;
cin>>ussdcode;
if (ussdcode == "*170#")
{      int choice;
	cout<<"\n\n\t\t MENU";
	cout<<"\n\n\t\t 1.Transfer money";
	cout<<"\n\n\t\t 2.Momopay";
	cout<<"\n\n\t\t 3.Airtime & Bundles";
		cout<<"\n\n\t\t ENTER : ";
		cin>>choice;
		
		switch(choice)
{
			case 1 :
				cout<<"\n\n\t\t Transer money section";
				break;
		    case 2 :cout<<"\n\n\t\t momopay section";
		        break;
		     case 3 :cout<<"\n\n\t\t Airtime & Bundle section";
		     cout<<"\n\n\t\t 1. Airtime ";
		     cout<<"\n\n\t\t 2. Bundles ";
		     cout<<"\n\n\t\t 3. Fixed broadband ";
		     cout<<"\n\n\t\t Enter";
		     cin>>choice;
		     
		     switch(choice)
		     case 1 : cout<<"\n\n\t\t Airtime";
		              cout<<"\n\n\t\t 1. Self";
		              cout<<"\n\n\t\t 2. Others";
		                cout<<"\n\n\t\t ENTER : ";
		                
		                float amount;
		                int savedpin =4434,pin;
		                
		                switch(choice)
		                 {
						 case 1 : cout<<"\n\n\t\t Enter Amount";
		                cin>>amount;
		                cout<<"\n\n\t\t DEAR CUSTOMER , SEND GHC"<<" AIRTIME TO 233245239544";
		                cout<<"\n\n\t\t Enter pin : ";
		                cin>>pin;
		                if(pin==savedpin)
		                { 
		                cout<<"\n\n\t\t YOU HAVE SUCESSFULLY PURCHASE GHS"<<amount<<"airtime";
						}
		     break;
		     
		     default:
		     	break;
		     }
		 }
		     /*break;
		     
		     case 2 : cout<<"\n\n\t\t Bundles";
		              cout<<"\n\n\t\t 1. Proceed to buy bundle (No 4G bonus )";
		              cout<<"\n\n\t\t 2. Go to my mtn app (4G bonus here)";
		     break;
		    
		     
		     case 3 :
		    break ;
		     default:
		     */
		     
		        break;
		    default :
				break;
		}
	
			
			
	}
	else
	{
		cout<<"\n\n\t\t UNKNOWN APPLICATION ";
		}	
	
	
	
	
	
	
	
	
	return 0;
}
