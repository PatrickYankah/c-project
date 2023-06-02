#include <iostream>
#include <windows.h>
using namespace std ;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char answer;
	int score = 0;
	int correct = 0;
	int wrong = 0;
	string studentFname,studentLname;
	

	cout<<"\n\n\t\t ~~~~~~~~~~~~~~~~~~~~ QUIZ 1 ~~~~~~~~~~~~~~~~~~~~~~~~ ";
	cout<<"\n\n\t\t  Enter student first name : ";
	cin>>studentFname;

	cout<<"\n\n\t\t  Enter student last name : ";
	cin>>studentLname;
	
		start:cout<<"\n\n\t\t STUDENTS RESIT QUIZ ";
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
	 		goto start;
	 		break; 
	 		
	 	}
	 		
	 		
			 
			 
			 
			 
			 Q2:
	 		
     gohere:
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
	 		goto gohere;
	 		break; 
	 	}
	 	
	 	
	 come:		
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
	 		goto come;
	 		break; 
	 	}
	 	 
	         		
    questionfour:
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
	 		goto questionfour;
	 		break; 
	 	}
	 	
	 	questionfive:
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
	 		goto questionfive;
	 		break; 
	 	}
	 	
	 	questionsix:
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
	 		goto questionsix;
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
cout<<"\n\n\t\t =============== STUDENT QUIZ MARKS ============  ";
cout<<"\n\n\t\t RESULTS SLIP FOR QUIZ 1";
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



	         	
return 0;
}
