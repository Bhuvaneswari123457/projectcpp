#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	string questions[10] = {
	"full form of DSA ?",
	"full form of sql?",
	"full form of dbms?",
	"Core values of barclays?",
	"universal logic gates?",
	"full form of Oops?",
	"which of the following is programming language?",
	"command in data control laguage is________________________",
	"capital of india?",
	"abbrivate TCL in dbms?"
						};
	 string options[10][4] = {
	{"Datastructures and algorithm ","data set algorithm","data strectured articles "," none of the above"},
	{"set query language ","set queen language","structured query language  "," none of the above"},
	{"database"," database and mangament systems "," data manapulation system","none of the above "},
	{" Respect"," integrity"," service ","all"},
	{"Nand && Nor"," or &&and " ,"all of the above"," none of the above " },
	{"object oriented programming language","object oriented power"," oriented object language"," none"},
	{"c", " c++"," java","all" },
	{"revoke"," grant ","both" ," none"},
	{"delhi"," mumbai","hydreabad"," none"},
	{"transaction control language"," trunk control language"," tape control language"," none"},
					    };
	string correctOptions[10] = {"Datastructures and algorithm ","structured query language  "," database and mangament systems ",
	                             "all","Nand && Nor","object oriented programming language","all","both","delhi",
	                             "transaction control language"
	                            };
	int userOptions[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int totalQs = 10;	
	

	//----- Conducting Quiz -----
	for( int i=0; i<totalQs; i++ ){
		cout<<"Question # "<<(i+1)<<endl;
		cout<< questions[i]<<endl;
		cout<< "1."<<options[i][0]<<endl;
		cout<< "2."<<options[i][1]<<endl;
		cout<< "3."<<options[i][2]<<endl;
		cout<< "4."<<options[i][3]<<endl<<endl;
		
		cout<<"Select Option (1-4) or 0 to skip and press enter: ";
		cin >> userOptions[i];
		cout<<endl<<"-----------------------------"<<endl<<endl;
	}
	
	//----- Printing Correct Options -----
	cout<<"======= ======= ======= ======= "<<endl;
	cout<<"======= Correct Options ======= "<<endl;
	cout<<"======= ======= ======= ======= "<<endl;

	for( int i=0; i<totalQs; i++ ){
		cout<<"Question # "<<(i+1)<<endl;
		cout<< questions[i]<<endl;
		cout<< "1."<<options[i][0]<<endl;
		cout<< "2."<<options[i][1]<<endl;
		cout<< "3."<<options[i][2]<<endl;
		cout<< "4."<<options[i][3]<<endl;
		
		if( userOptions[i] == 0 ){
			cout<< "You Skipped this Question."<<endl;		
		}else{
			cout<< "You Selected : "<<options[i][userOptions[i]-1]<<endl;		
		}
		cout<< "Correct Option : "<<correctOptions[i]<<endl<<endl;

		cout<<"Press any key to continue..."<<endl;
		getch();
		cout<<endl<<"------------------"<<endl;
	}
	
	//----- Printing Result -----
	cout<<endl<<endl;
	cout<<"======= ======= ======= ======= "<<endl;
	cout<<"=======      Result     ======= "<<endl;
	cout<<"======= ======= ======= ======= "<<endl;

	int correct = 0;
	int incorrect = 0;
	int skipped = 0;
	for( int i=0; i<totalQs; i++ ){
		if( userOptions[i] != 0 ){
			if( correctOptions[i] == options[i][userOptions[i]-1] ){
				correct++;
			}else{
				incorrect++;
			}
		}else{
			skipped++;
		}
	}
	cout<< "Total Questions : "<< totalQs <<endl;	
	cout<< "Correct : "<< correct <<endl;
	cout<< "In-Correct : "<< incorrect <<endl;
	cout<< "Skipped : "<< skipped <<endl;
	
	getch();
	return 0;
}

