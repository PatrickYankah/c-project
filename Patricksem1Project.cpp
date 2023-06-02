
#include <iostream>
#include <windows.h>//helps the computer to sleep for sometime

using namespace std ;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string username,password;
	char answer,choice1;
	int score = 0;
	int correct = 0;
	int wrong = 0;
	string studentFname,studentLname;
	int id;
	int choice;
	
	
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

cout<<"\n\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\    WELCOME TO SCHOOL EXAMINATION SYSTEM \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n   ";

	cout<<"\n\n\t\t  Enter student first name : ";
	cin>>studentFname;

	cout<<"\n\n\t\t  Enter student last name : ";
	cin>>studentLname;
	
	cout<<"\n\n\t\t Enter student id : ";
	cin>>id;
	
	cout<<"\n\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\    EXAMS OPTION \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n   ";
	
	
	cout<<"\n\n\t\t  1.  programming method ";
	cout<<"\n\n\t\t  2.  html  ";
	cout<<"\n\n\t\t select exams ";
	cin>>choice;
	
	if(choice==1)
	
	
	{
		begin:
		start:
		q1:
	cout<<"\n\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\    PROGRAMMING METHOD \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n   ";
	
	cout<<"\n\n\t\t 1 . Integers store whole numbers like { 0,1,2 ........}" ;
		cout<<"\n\n\t\t A . TRUE B . FALSE " ;
	 		cout<<"\n\n\t\t ENTER CHOICE : "  ;
	 		cin>>answer;
	 		
	 switch(answer)
	 {
	 	case 'a' :
	 	case 'A' :
	 		
	 		score+=10;
	 		correct +=1;
	 	break;	
	 	case 'b' :
	 	case 'B' :
	 		score+=0;
	 		wrong +=0;
	 	cout<<"\n\n\t\t ----------- ----------------" ;
	 	break;
	 	default :
	 		cout<<"\n\n\t\t invalid option choose between A or B " ;
	 		cin>>answer;
	 		goto q1;
	 		break; 
	 		
	 	}
	 		
	 		
	 		
     q2:
	cout<<"\n\n\t\t 2 . Character stores single characters or numbers like { '3','a','A' ........}" ;
		cout<<"\n\n\t\t A . TRUE B . FALSE " ;
	 		cout<<"\n\n\t\t ENTER CHOICE : " ;
	 		cin>>answer;
	 		
	 switch(answer)
	 {
	 	case 'a' :
	 	case 'A' :
	 		score += 10;
	 		correct +=1;
	 		
	 	break;	
	 	case 'b' :
	 	case 'B' :
	 		score+=0;
	 		wrong +=0;
	 	break;
	 	default :
	 		cout<<"\n\n\t\t  invalid option choose between A or B : " ;
	 		goto q2;
	 		break; 
	 	}
	 	
	 	
	 q3:		
	cout<<"\n\n\t\t 3 . Float is an example of a data type ?  ";
		cout<<"\n\n\t\t A . TRUE B . FALSE " ;
	 		cout<<"\n\n\t\t ENTER CHOICE : " ;
	 		cin>>answer;
	 		
	 switch(answer)
	 {
	 	case 'a' :
	 	case 'A' :
	 		
	 		score+=10;
	 		correct +=1;
	 	break;	
	 	case 'b' :
	 	case 'B' :
	 	
	 	score+=0;
	 	wrong +=0;
	 	break;
	 	default :
	 		cout<<"\n\n\t\t  invalid option choose between A or B : " ;
	 		goto q3;
	 		break; 
	 	}
	 	 
	         		
    q4:
	cout<<"\n\n\t\t 4 . Loops are classified into while , for , do loop . ";
		cout<<"\n\n\t\t A . TRUE B . FALSE " ;
	 		cout<<"\n\n\t\t ENTER CHOICE : " ;
	 		cin>>answer;
	 		
	 switch(answer)
	 {
	 	case 'a' :
	 	case 'A' :
	 		
	 		score+=10;
	 		correct +=1;
	 	break;	
	 	case 'b' :
	 	case 'B' :
	 	
	 	score+=0;
	 	wrong +=0;
	 	break;
	 	default :
	 		cout<<"\n\n\t\t  invalid option choose between A or B : " ;
	 		goto q4;
	 		break; 
	 	}
	 	
	 	q5:
	 	cout<<"\n\n\t\t 5. An array is stored in a single variable ." ;
		cout<<"\n\n\t\t A . TRUE B . FALSE " ;
	 		cout<<"\n\n\t\t ENTER CHOICE : " ;
	 		cin>>answer;
	 		
	 switch(answer)
	 {
	 	case 'a' :
	 	case 'A' :
	 		
	 		score+=10;
	 		correct +=1;
	 	break;	
	 	case 'b' :
	 	case 'B' :
	 
	 	score+=0;
	 	wrong +=0;
	 	break;
	 	default :
	 		cout<<"\n\n\t\t  invalid option choose between A or B : " ;
	 		goto q5;
	 		break; 
	 	}
	 	
	 	q6:
	 	cout<<"\n\n\t\t 6 . Computer generations are into (4) catergories . " ;
		cout<<"\n\n\t\t A . TRUE B . FALSE " ;
	 		cout<<"\n\n\t\t ENTER CHOICE : " ;
	 		cin>>answer;
	 		
	 switch(answer)
	 {
	 	case 'a' :
	 	case 'A' :
	 	score+=10;
	 	correct +=1;
	 	break;	
	 	case 'b' :
	 	case 'B' :
	 		score+=0;
	 		wrong +=0;
	 
	 	break;
	 	default :
	 		cout<<"\n\n\t\t  invalid option choose between A or B : " ;
	 		goto q6;
	 		break; 
	 	}
	 	questionseven:
	 cout<<"\n\n\t\t 7 . A flowchart is tool used to write a prominary plan ." ;
		cout<<"\n\n\t\t A . TRUE B . FALSE " ;
	 		cout<<"\n\n\t\t ENTER CHOICE : " ;
	 		cin>>answer;
	 		
	 switch(answer)
	 {
	 	case 'a' :
	 	case 'A' :
	 		
	 		score+=0;
	 		wrong+=0;
	 	break;	
	 	case 'b' :
	 	case 'B' :
	 
	 	score+=10;
	 	correct +=1;
	 	break;
	 	default :
	 		cout<<"\n\n\t\t  invalid option choose between A or B : " ;
	 		goto questionseven;
	 		break; 
	 	}
	  questioneight:
	 cout<<"\n\n\t\t 8 . Pseudocode is a diagram that shows the logical flow of a program." ;
		cout<<"\n\n\t\t A . TRUE B . FALSE " ;
	 		cout<<"\n\n\t\t ENTER CHOICE : " ;
	 		cin>>answer;
	 		
	 switch(answer)
	 {
	 	case 'a' :
	 	case 'A' :
	 	
	 		score+=0;
	 		wrong +=0;
	 	break;	
	 	case 'b' :
	 	case 'B' :
	 	
	 	score+=10;
	 	correct +=1;
	 	break;
	 	default :
	 		cout<<"\n\n\t\t  invalid option choose between A or B : " ;
	 		goto questioneight;
	 		break; 
	 	}
	 	
	 	questionnine:
         cout<<"\n\n\t\t 9 . The terminal indicates the start and stop of a program ." ;
		cout<<"\n\n\t\t A . TRUE B . FALSE " ;
	 		cout<<"\n\n\t\t ENTER CHOICE : " ;
	 		cin>>answer;
	 		
	 switch(answer)
	 {
	 	case 'a' :
	 	case 'A' :
	 	
	 		score+=10;
	 		correct +=1;
	 	break;	
	 	case 'b' :
	 	case 'B' :
	 	
	 	score+=0;
	 	wrong +=0;
	 	break;
	 	default :
	 		cout<<"\n\n\t\t  invalid option choose between A or B : " ;
	 		goto questionnine;
	 		break; 
	 	}
	 	questionten:
	 	cout<<"\n\n\t\t 10 . Process in flowchart is used to connect breaks ." ;
		cout<<"\n\n\t\t A . TRUE B . FALSE " ;
	 		cout<<"\n\n\t\t ENTER CHOICE : " ;
	 		cin>>answer;
	 		
	 switch(answer)
	 {
	 	case 'a' :
	 	case 'A' :
	 		
	 		score+=0;
	 	wrong +=0;
	 	break;	
	 	case 'b' :
	 	case 'B' :
	 
	 	score+=10;
	 	correct +=1;
	 	break;
	 	default :
	 	cout<<"\n\n\t\t  invalid option choose between A or B : " ;
	 	goto questionten;
	 	break; 
	 	}
	 	
	 			 
//CREATING A NEW PAGE
system("cls") ;
//// fore color and backgroUnd color

Sleep(2000);
cout<<"\n\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\    WELCOME TO STUDENT EXAMINATION RESULT \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n   ";
cout<<"\n\n\t\t ========================= PROGRAMMING METHOD RESULTS SLIP =============================== ";
cout<<"\n\n\t\t STUDENT NAME : "<<studentFname<<" "<<studentLname;
cout<<"\n\n\t\t STUDENT ID : "<<id;




//using if statement
string grade;
if(score>=50)
{
grade = "PASSED";
}
else{system("color 47");
grade ="FAILED";
}
cout<<"\n\n\t\t TOTAL CORRECT ANSWERS  : "<<correct;

cout<<"\n\n\t\t TOTAL SCORE  : "<<score<<"/100";
cout<<"\n\n\t\t STUDENTS REMARKS : "<<grade;

//using if statement

if(score>=50)
{system("color 27");
grade = "PASSED";
}
else{
	Sleep(2000);
	
//CREATING A NEW PAGE
system("cls") ;
//// fore color and backgroUnd color
system("color 07");


goto start;

}
	cout<<"\n\n\t\t ========================= THANK YOU FOR USING THIS APPLICATION ========================= ";
	exit(0);
	 }
	 
	 
//	 
//	  cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Press[S/s] to save file : ";
//	  cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Press[Y/y] to continue application : ";
//	  cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Press[N/n] to exit : ";
//	  cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 select choice ";
//	   cin>>choice1;
//	  
//	  
//	  
//	  if(choice =='S' || choice == 's' )
//	  {
//	  	cout<<"\n\n\t\t Please wait whiles file saves ....... ";
//	  	
//	  	system("cls");
//	  	system("color 27");
//	  	cout<<"\n\n\t\t ************** FILE SAVED SUCESSFULLY ! **********************";
//	  	
//	  cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Press[Y/y] to continue application : ";
//	  cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Press[N/n] to exit : ";
//	  cout<<"\n\n\t\t select choice  : ";
//	    cin>>choice;
//	  
//	  if (choice =='Y' || choice == 'y' )
//	  {system("cls");
//	    system("color 17");
//	  	goto begin;
//	  }
//	  else
//	   { 
//	   	 cout<<"\n\n\t\t  ------ Thank you for using this application ------- ";
//	   	 exit(0);
//	  }
//}
	 

	 else if(choice==2)
	 {
	 	qa:
	 		cout<<"\n\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\    WELCOME TO SYSTEM ANALYSIS AND DESIGN \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n   ";
	cout<<"\n\n\t\t 1 . a common reason forchanging an information system is......." ;
		cout<<"\n\n\t\t A . new technolgy B . computer repairs " ;
	 		cout<<"\n\n\t\t ENTER CHOICE : "  ;
	 		cin>>answer;
	 		
	 switch(answer)
	 {
	 	case 'a' :
	 	case 'A' :
	 		
	 		score+=10;
	 		correct +=1;
	 	break;	
	 	case 'b' :
	 	case 'B' :
	 		score+=0;
	 		wrong +=0;
	 	cout<<"\n\n\t\t ----------- -----------------------------------------------------------" ;
	 	break;
	 	default :
	 		cout<<"\n\n\t\t invalid option choose between A or B " ;
	 		cin>>answer;
	 		goto qa;
	 		break; 
	 		
	 	}
	 		
	 		
	 		
     qb:
	cout<<"\n\n\t\t 2 . A data flow can store one of this....." ;
		cout<<"\n\n\t\t A . an external entity B . a process " ;
	 		cout<<"\n\n\t\t ENTER CHOICE : " ;
	 		cin>>answer;
	 		
	 switch(answer)
	 {
	 	case 'a' :
	 	case 'A' :
	 		score += 10;
	 		correct +=1;
	 		
	 	break;	
	 	case 'b' :
	 	case 'B' :
	 		score+=0;
	 		wrong +=0;
	 	break;
	 	default :
	 		cout<<"\n\n\t\t  invalid option choose between A or B : " ;
	 		goto qb;
	 		break; 
	 	}
	 	
	 	
	 qc:		
	cout<<"\n\n\t\t 3 . Structured programming involves ?  ";
		cout<<"\n\n\t\t A . Functional modularization B . Decentralized processing " ;
	 		cout<<"\n\n\t\t ENTER CHOICE : " ;
	 		cin>>answer;
	 		
	 switch(answer)
	 {
	 	case 'a' :
	 	case 'A' :
	 		
	 		score+=10;
	 		correct +=1;
	 	break;	
	 	case 'b' :
	 	case 'B' :
	 	
	 	score+=0;
	 	wrong +=0;
	 	break;
	 	default :
	 		cout<<"\n\n\t\t  invalid option choose between A or B : " ;
	 		goto qc;
	 		break; 
	 	}
	 	 
	         		
    qd:
	cout<<"\n\n\t\t 4 . The data flow diagram is a basic component of .... system ";
		cout<<"\n\n\t\t A . Conceptual B . Physical " ;
	 		cout<<"\n\n\t\t ENTER CHOICE : " ;
	 		cin>>answer;
	 		
	 switch(answer)
	 {
	 	case 'a' :
	 	case 'A' :
	 		
	 		score+=10;
	 		correct +=1;
	 	break;	
	 	case 'b' :
	 	case 'B' :
	 	
	 	score+=0;
	 	wrong +=0;
	 	break;
	 	default :
	 		cout<<"\n\n\t\t  invalid option choose between A or B : " ;
	 		goto qd;
	 		break; 
	 	}
	 	
	 	qe:
	 	cout<<"\n\n\t\t 5. A data flow can ....." ;
		cout<<"\n\n\t\t A . may emanate or terminate an external entity B . Only emanate from an external entity " ;
	 		cout<<"\n\n\t\t ENTER CHOICE : " ;
	 		cin>>answer;
	 		
	 switch(answer)
	 {
	 	case 'a' :
	 	case 'A' :
	 		
	 		score+=10;
	 		correct +=1;
	 	break;	
	 	case 'b' :
	 	case 'B' :
	 
	 	score+=0;
	 	wrong +=0;
	 	break;
	 	default :
	 		cout<<"\n\n\t\t  invalid option choose between A or B : " ;
	 		goto qe;
	 		break; 
	 	}
	 	
	 	qf:
	 	cout<<"\n\n\t\t 6. Which of the following is or at the levels of document " ;
		cout<<"\n\n\t\t A . documentation of managers B . Documentation programmers " ;
	 		cout<<"\n\n\t\t ENTER CHOICE : " ;
	 		cin>>answer;
	 		
	 switch(answer)
	 {
	 	case 'a' :
	 	case 'A' :
	 	score+=10;
	 	correct +=1;
	 	break;	
	 	case 'b' :
	 	case 'B' :
	 		score+=0;
	 		wrong +=0;
	 
	 	break;
	 	default :
	 		cout<<"\n\n\t\t  invalid option choose between A or B : " ;
	 		goto qf;
	 		break; 
	 	}
	 	qg:
	 cout<<"\n\n\t\t 7 . _______ is Level supply of information strategy of top managment " ;
		cout<<"\n\n\t\t A . Competitve B . Tactical " ;
	 		cout<<"\n\n\t\t ENTER CHOICE : " ;
	 		cin>>answer;
	 		
	 switch(answer)
	 {
	 	case 'a' :
	 	case 'A' :
	 		
	 		score+=0;
	 		wrong+=0;
	 	break;	
	 	case 'b' :
	 	case 'B' :
	 
	 	score+=10;
	 	correct +=1;
	 	break;
	 	default :
	 		cout<<"\n\n\t\t  invalid option choose between A or B : " ;
	 		goto qg;
	 		break; 
	 	}
	  qh:
	 cout<<"\n\n\t\t 8 . Programmer's uses ___ to organize and summarize the result of their problems analysis" ;
		cout<<"\n\n\t\t A . Input chart B . Flow chart " ;
	 		cout<<"\n\n\t\t ENTER CHOICE : " ;
	 		cin>>answer;
	 		
	 switch(answer)
	 {
	 	case 'a' :
	 	case 'A' :
	 	
	 		score+=0;
	 		wrong +=0;
	 	break;	
	 	case 'b' :
	 	case 'B' :
	 	
	 	score+=10;
	 	correct +=1;
	 	break;
	 	default :
	 		cout<<"\n\n\t\t  invalid option choose between A or B : " ;
	 		goto qh;
	 		break; 
	 	}
	 	
	 	qi:
         cout<<"\n\n\t\t 9 . Which of the following is or are charateristics of information" ;
		cout<<"\n\n\t\t A . Accuracy and relevant B . Competitive and leadership " ;
	 		cout<<"\n\n\t\t ENTER CHOICE : " ;
	 		cin>>answer;
	 		
	 switch(answer)
	 {
	 	case 'a' :
	 	case 'A' :
	 	
	 		score+=10;
	 		correct +=1;
	 	break;	
	 	case 'b' :
	 	case 'B' :
	 	
	 	score+=0;
	 	wrong +=0;
	 	break;
	 	default :
	 		cout<<"\n\n\t\t  invalid option choose between A or B : " ;
	 		goto qi;
	 		break; 
	 	}
	 	qj:
	 	cout<<"\n\n\t\t 10 . these some advantages of system flow chart" ;
		cout<<"\n\n\t\t A. Flow diagram B . Effective communication   " ;
	 		cout<<"\n\n\t\t ENTER CHOICE : " ;
	 		cin>>answer;
	 		
	 switch(answer)
	 {
	 	case 'a' :
	 	case 'A' :
	 		
	 		score+=0;
	 	wrong +=0;
	 	break;	
	 	case 'b' :
	 	case 'B' :
	 
	 	score+=10;
	 	correct +=1;
	 	break;
	 	default :
	 	cout<<"\n\n\t\t  invalid option choose between A or B : " ;
	 	goto qj;
	 	break; 
	 }
		 
//CREATING A NEW PAGE
system("cls") ;
//// fore color and backgroUnd color

Sleep(2000);
cout<<"\n\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\    WELCOME TO STUDENT EXAMINATION RESULT \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n   ";
cout<<"\n\n\t\t ========================= SYSTEM ANALYSIS AND DESIGN RESULTS SLIP ========================= ";
cout<<"\n\n\t\t STUDENT NAME : "<<studentFname<<" "<<studentLname;






//using if statement
string grade;
if(score>=50)
{
grade = "PASSED";
}
else{system("color 47");
grade ="FAILED";
}
cout<<"\n\n\t\t TOTAL CORRECT ANSWERS  : "<<correct;

cout<<"\n\n\t\t TOTAL SCORE  : "<<score<<"/100";
cout<<"\n\n\t\t STUDENTS REMARKS : "<<grade;

//using if statement

if(score>=50)
{system("color 27");
grade = "PASSED";
}
else{
	Sleep(2000);
	
//CREATING A NEW PAGE
system("cls") ;
//// fore color and backgroUnd color
system("color 07");


goto start;

}
	cout<<"\n\n\t\t ========================= THANK YOU FOR USING THIS APPLICATION ========================= ";
	exit(0);
}

 return 0;
 
}
	

	
