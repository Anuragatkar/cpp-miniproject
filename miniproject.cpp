#include <iostream>
#include <windows.h>
using namespace std ;
void showmenu()
{
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"++++++++++++++++++++++++++++++++QUIZ APP++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"\n\n";
	cout<<"1)New Quiz"<<endl;
	cout<<"2)Highest Score "<<endl;
	cout<<"3)Exit\n\n";
}
int main()
{   
    system("COLOR 80");
	string questions[5]=
	{
		"1. Which of the following is known as Father of Computer?",
		"2. The computer size is very large in ? ",
		"3. All processing of computer is done in ?",
		"4. RAM is a type of ?",
		"5. Laser printer is a type of?"
	};
	string options[5]=
	{
		"1)Napier 2)Grace 3)Charles Babbage 4)Herman Hollerith",
		"1)first genration 2)second generation 3)third generation 4)fourth generation",
		"1)moniter 2)cpu 3)keyboard 4)RAM ",
		"1)volatile memory 2)primary memory 3)temporary memory 4)All of these",
		"1)input device 2)output device 3)memory device 4)processing device"
	};
	int ans[5]={3,1,2,4,2};
	string playername="Naruto";
	int highestscore=0;
	
	char ch='y';
	
	while(ch=='y'){
		
		int currentresult=0;
		string currentplayer;
		system ("CLS");
		showmenu();
		int menu;
		cin>>menu;
		
		switch(menu)
		{
			case 1:
				system("CLS");
				
				cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
				cout<<"++++++++++++++++++Playing Quiz++++++++++++++++++++"<<endl;
				cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++\n\n"<<endl;
				cout<<"Enter your name: ";
				cin>>currentplayer;
				
				cout<<"\n\n";
				
				for(int i=0;i<5;i++)
				{   
				    int op;
					cout<<"\n\n"<<questions[i]<<endl;
					cout<<options[i]<<endl<<endl;
					cout<<"Enter Option: ";
					cin>>op;
					if(op==ans[i])
					{
						currentresult++;
						if(currentresult>highestscore)
						{
							highestscore=currentresult;
							playername=currentplayer;
						}
					}
				}
				cout<<"\n\n your score: "<<currentresult<<endl;
				
			break;
			
			case 2:
				system("CLS");
				cout<<" Highest score is "<<highestscore<<" By "<<playername<<endl;
			break;
			case 3:
				cout<<"Thank you for using Quiz App !..";
				exit(0);
			break;
			
			default:
				cout<<"wrong selection";
		}
		
		cout<<"\n\n Do you want to continue y/n ?";
		cin>>ch;
	}
}
