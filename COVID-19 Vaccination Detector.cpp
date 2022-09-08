
				//		COVID-19 Vaccination Ditector Machine
#include<iostream>
#include<string.h>
#include<fstream>
#include<Windows.h>
#include<conio.h>
using namespace std;

				//			LOGIN   SECTION

class Login
{
	public :
		int num;
		int password()
		{
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t///////////////////////////////////////////////////////////\n";
			cout<<"\t\t\t\t\t\t\t//  ###################################################  //\n";
			cout<<"\t\t\t\t\t\t\t//  ##                                               ##  //\n";
			cout<<"\t\t\t\t\t\t\t//  ##          LOGIN                  PAGE          ##  //\n";
			cout<<"\t\t\t\t\t\t\t//  ##                                               ##  //\n";
			cout<<"\t\t\t\t\t\t\t//  ###################################################  //\n";
			cout<<"\t\t\t\t\t\t\t///////////////////////////////////////////////////////////\n";
			system("PAUSE");
			system("CLS");
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t///////////////////////////////////////////////////////////\n";
			cout<<"\t\t\t\t\t\t\t//  ###################################################  //\n";
			cout<<"\t\t\t\t\t\t\t//  ##\t\tPress 1=> For Sign UP                ##  //\n";
			cout<<"\t\t\t\t\t\t\t//  ##\t\tPress 2=> For Sign IN                ##  //\n";
			cout<<"\t\t\t\t\t\t\t//  ##\t\tPress 3=> For Update Password        ##  //\n";
			cout<<"\t\t\t\t\t\t\t//  ###################################################  //\n";
			cout<<"\t\t\t\t\t\t\t///////////////////////////////////////////////////////////\n";
			cout<<endl;
			cout<<"\t\t\t\t\t\t\t-----------------------------------------------------------\n";
			cout<<endl;
			cout<<"\t\t\t\t\t\t\tEnter What You Want = > ";
			cin>>num;
			Beep(700,800);
			cin.ignore();
			return num;
			
		}
		void END()
		{
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t///////////////////////////////////////////////////////////\n";
			cout<<"\t\t\t\t\t\t\t//  ###################################################  //\n";
			cout<<"\t\t\t\t\t\t\t//  ##                                               ##  //\n";
			cout<<"\t\t\t\t\t\t\t//  ##           THANK                 YOU           ##  //\n";
			cout<<"\t\t\t\t\t\t\t//  ##                                               ##  //\n";
			cout<<"\t\t\t\t\t\t\t//  ###################################################  //\n";
			cout<<"\t\t\t\t\t\t\t///////////////////////////////////////////////////////////\n";
		}
		
};

			//			FUNCTIONS FOR LOGIN 

class P_O_L : public Login
{
	private:
		char u_p[30] , up_p[30];
		string read,i_p;
		int ch;
	public:
		void sign_up()
		{
			system("color CF");
			ofstream in("Password.txt");
			cout<<endl;
			cout<<"\t\t\t\t\t\t\t    Create Your New Password = >  ";
			cin.getline(u_p,30)&&in<<u_p;
			Beep(600,800);
			cout<<endl;
			in.close();
			system("PAUSE");
			system("CLS");
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t // -----------------------LOGIN  PAGE---------------------- //\n";
			cout<<"\t\t\t\t\t\t\t // -------------------------------------------------------- //\n";
			cout<<endl;
			sign_in();
		}
		
		void update_password()
		{
			
			system("color A0");
			ifstream out("Password.txt");
			cout<<"\t\t\t\t\t\t\t    Enter Your Previous Password = > ";
			cin.getline(up_p,30);
			int flag=1;
			while(!out.eof()&&getline(out,read))
			{
				if(up_p == read)
				{
					Beep(600,800);
					sign_up();
					flag=0;
				}
			}
			if(flag == 1)
			{
				Beep(400,800);
				cout<<"\n\n\t\t\t\t\t\t\t//  ----------------Sorry , Password Doesn\'t---------------- //";
				exit(0);
			}
			out.close();
		}
		
		void sign_in()
		{
			
			system("color E4");
			ifstream out("Password.txt");
			
			cout<<"\t\t\t\t\t\t\t    Enter Your Passcode To Verify its You = >  ";
			ch=getch();
			int flag=1;
			while(ch != 13)
			{
				i_p.push_back(ch);
				cout<<'*';
				ch=getch();
			}
			
			while(!out.eof()&&getline(out,read))
			{
				
				if(i_p == read)
				{
					cout<<"\n\n\t\t\t\t\t\t\t//  ----------------------Access Granted-------------------- //\n";
					cout<<endl;
					
					cout<<"\t\t\t\t\t\t\t//  -------------------------------------------------------- //\n";
					flag=0;
					Beep(600,800);
				}
				
			}
			if(flag == 1)
			{
				Beep(400,800);
				cout<<"\n\n\t\t\t\t\t\t\t//  ----------------Sorry , Password Doesn\'t---------------- //";
				exit(0);
			}
			out.close();
		}
};	

			//		ChOOSING WHAT YOU WANT

class Choice : public P_O_L
{
	public:
		int n;
		void Display()
		{
			system("color B4");
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t////////////////////////////////////////////////////////////////////\n";
			cout<<"\t\t\t\t\t\t//  ############################################################  //\n";
			cout<<"\t\t\t\t\t\t//  ##                                                        ##  //\n";
			cout<<"\t\t\t\t\t\t//  ##                                                        ##  //\n";
			cout<<"\t\t\t\t\t\t//  ##               COVID - 19      VACINATION               ##  //\n";
			cout<<"\t\t\t\t\t\t//  ##                 MACHINE       DETECTOR                 ##  //\n";
			cout<<"\t\t\t\t\t\t//  ##                                                        ##  //\n";
			cout<<"\t\t\t\t\t\t//  ##                                                        ##  //\n"; 
			cout<<"\t\t\t\t\t\t//  ############################################################  //\n";
			cout<<"\t\t\t\t\t\t////////////////////////////////////////////////////////////////////\n";
			
		}
		int choose()
		{
			
			
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t////////////////////////////////////////////////////////////////////\n";
			cout<<"\t\t\t\t\t\t//  ############################################################  //\n";
			cout<<"\t\t\t\t\t\t//  ##                                                        ##  //\n";
			cout<<"\t\t\t\t\t\t//  ##  >>>>>  Press \' 1 \' To Enter Record                    ##  //\n";
			cout<<"\t\t\t\t\t\t//  ##  >>>>>  Press \' 2 \' To Show All History                ##  //\n";
			cout<<"\t\t\t\t\t\t//  ##  >>>>>  Press \' 3 \' To Search The Vaccinated People    ##  //\n";
			cout<<"\t\t\t\t\t\t//  ##  >>>>>  Press \' 4 \' To End The Program                 ##  //\n";
			cout<<"\t\t\t\t\t\t//  ##                                                        ##  //\n"; 
			cout<<"\t\t\t\t\t\t//  ############################################################  //\n";
			cout<<"\t\t\t\t\t\t////////////////////////////////////////////////////////////////////\n";
			
			cout<<endl;
			cout<<"\t\t\t\t\t\t--------------------------------------------------------------------\n";
			cout<<endl;
			
			cout<<"\t\t\t\t\t\tEnter What You Want = > ";
			cin>>n;
			Beep(700,800);
			cin.ignore();
			return n;
		}
};

			//				Record Of Citizen's

class Record : public Choice
{
	public:
		char name[40],f_name[40],c_name[40],add[40],id[40],b_form[40],cont[40];
		int age;
		
		void Input()
		{
			
			cout<<"\n\t\t\t\t\t\t // ------------------------------------------------------------- //\n";
			cout<<endl;
			cin.ignore();
			
			cout<<"\t\t\t\t\t\t    Enter The Citizen Name = > ";
			cin.getline(name,40);
			
			cout<<"\t\t\t\t\t\t    Enter The Father Name = > ";
			cin.getline(f_name,40);
			
			cout<<"\t\t\t\t\t\t    Enter The City Name = > ";
			cin.getline(c_name,40);

			cout<<"\t\t\t\t\t\t    Enter The Address = > ";
			cin.getline(add,40);
			
			cout<<"\t\t\t\t\t\t    Enter Contact Number = > ";
			cin.getline(cont,40);
			
			cout<<"\t\t\t\t\t\t    Enter Age = > ";
			cin>>age;
			
			cin.ignore();
			if(age>=18)
			{
				
				cout<<"\t\t\t\t\t\t    Enter The ID No. = > ";
				cin.getline(id,40);	
				
			}		
			if(age<18)
			{
				
				cout<<"\t\t\t\t\t\t    Enter The B-Form No. = > ";
				cin.getline(b_form,40);
				
			}
			
			
		}
		string GetID()
		{
			
			return id;
			
			
		}
		string GetB_Form()
		{
			
			return b_form;
			
		}
};

			//			 Pattren For Showing Result

class Print : public Record
{
	public:
		void show()
		{
			cout<<"\n\t\t\t\t\t\t // ---------------------------------------------------------- //\n";
			cout<<endl;
		
			cout<<"\t\t\t\t\t\t    Citizen Name is : "<<name<<endl;
			cout<<"\t\t\t\t\t\t    Father Name is : "<<f_name<<endl;
			cout<<"\t\t\t\t\t\t    City Name is : "<<c_name<<endl;
			cout<<"\t\t\t\t\t\t    Your Address is : "<<add<<endl;
			cout<<"\t\t\t\t\t\t    Your Contact Number is : "<<cont<<endl;
			cout<<"\t\t\t\t\t\t    Your Age is : "<<age<<endl;
			if(age>=18)
			{
				cout<<"\t\t\t\t\t\t    Your ID No. : "<<id<<endl;
			}
			if(age<18)
			{
				cout<<"\t\t\t\t\t\t    Your The B-Form No. : "<<b_form<<endl;
			}
			cout<<endl;
		}
		
		
		
};

			// 		Search Sepecific Data   oR    Search Vacinated People

void search()
{
	char file_name[20];
	char ID[40];
	Print p2;
	cout<<"\t\t\t    Enter The Name Of File with extention \'.txt\' You Want To Be Opened For Search Something = > ";
	cin>>file_name;
	cout<<endl;
	cin.ignore();
	ifstream out(file_name,ios::in|ios::binary);
	if(out.is_open())
	{
		cout<<"\t\t\t    Enter ID You Want TO Search = > ";
		cin.getline(ID,40);
	
		int flag=1;
		while(!out.eof()&&out.read((char*)&p2,sizeof(p2)))
		{
		
			if(p2.GetID()==ID||p2.GetB_Form()==ID)
				{
				
					cout<<"\n\t\t\t\t\t\t // ---------------------ID Found \' "<<ID<<" \' --------------------  //\n";
					cout<<endl;
					cout<<"\t\t\t\t\t\t    You Are Vacinated, Here Your Data : \n";
					p2.show();
					flag=0;
				
				}
			
		}
		if(flag==1)
		{
		
			cout<<"\n\t\t\t\t\t\t // ------------------------------------------------------------- //\n";
			cout<<"\t\t\t\t\t\t    Sorry , ID #  is not found...!!!\n";
			cout<<endl;
			cout<<"\t\t\t\t\t\t    So, You Are Not Vaccinated...!!!\n";
		
		}	
	}
	else
		
		cout<<"\n\t\t\t    File Does Not Exist, Enter Correct Spelling \n";
	

}

			//        Showing All History

void history()
		{
			
			char file_name[20];
			Print p2;
			cout<<"\n\t\t\t    Enter The Name Of File with extention \'.txt\' You Want To Be Opened To See All History = > ";
			cin>>file_name;
			ifstream out(file_name,ios::in|ios::binary);
			if(out.is_open())
			{
				
				while(!out.eof()&&out.read((char*)&p2,sizeof(p2)))
				{
					
					p2.show();
				
				}	
				
			}
			else
				
				cout<<"\n\t\t\t    File Does Not Exist, Enter Correct Spelling \n";
			
			out.close();
			
}

			// 			Main function for calling Fucntion  

int main()
{
	
	system("color B4");
	int n,num;
	char file_name[20];
	string ch,choice;
	Print p1;
	Print *p3 = &p1;
	rev:
	num=p1.password();
	system("PAUSE");
	system("CLS");
	
	{
		
		if(num == 1)
		{
			
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t // -----------------------LOGIN  PAGE---------------------- //\n";
			cout<<"\t\t\t\t\t\t\t // -------------------------------------------------------- //\n";
			p3->sign_up();
			
		}
		else if(num == 2)
		{
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t // -----------------------LOGIN  PAGE---------------------- //\n";
			cout<<"\t\t\t\t\t\t\t // -------------------------------------------------------- //\n";
			cout<<endl;
			p3->sign_in();
			
		}
		else if(num == 3)
		{
			
		 	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t // -----------------------LOGIN  PAGE---------------------- //\n";
			cout<<"\t\t\t\t\t\t\t // -------------------------------------------------------- //\n";
			cout<<endl;
 			p3->update_password();
		}
		else 
		{
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t--------------------------------------------------------------------\n";
			cout<<"\t\t\t\t\t\t\tInvalid Choice, Try Again\n";
			cout<<"\t\t\t\t\t\t--------------------------------------------------------------------\n";
			system("PAUSE");
			system("CLS");
			goto rev;
			
		}
	}
	system("PAUSE");
	system("CLS");
	p3->Display();
	system("PAUSE");
	system("CLS");
	a:
	n=p3->choose();
	system("PAUSE");
	system("CLS");

	switch(n)
	{
		case 1:
			{
				system("color E4");
				cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t // ---------------------------------------------------------------------------------------------------------------- //\n";
				cout<<endl;
				cout<<"\t\t\t\t    Enter The Name Of File with extention \'.txt\' You Want To Be Created = > ";
				cin>>file_name;
				cout<<endl;
				c:
				ofstream input(file_name,ios::binary|ios::app);
				p3->Input();
				
				input.write((char*)&p1,sizeof(p1));
				input.close();
				
				cout<<"\n\t\t\t\t\t\t // ------------------------------------------------------------- //\n";
				cout<<"\n\t\t\t\t\t\t    Do You Want To Continue (Y/N) = > ";
				cin>>ch;
				if(ch=="Y" || ch=="y")
				{
					goto c;
				}
				cout<<"\n\t\t\t\t\t\t // ------------------------------------------------------------- //\n";
				cout<<"\n\t\t\t\t\t\t    ";cout<<"R";Sleep(200);cout<<"e";Sleep(200);cout<<"c";Sleep(200);cout<<"o";Sleep(200);cout<<"r";Sleep(200);cout<<"d";Sleep(200);cout<<" ";Sleep(200);cout<<"S";Sleep(200);cout<<"u";Sleep(200);cout<<"c";Sleep(200);cout<<"c";Sleep(200);cout<<"e";Sleep(200);cout<<"s";Sleep(200);cout<<"s";Sleep(200);cout<<"f";Sleep(200);cout<<"u";Sleep(200);cout<<"l";Sleep(200);cout<<"l";Sleep(200);cout<<"y";Sleep(200);cout<<" ";Sleep(200);cout<<"A";Sleep(200);cout<<"d";Sleep(200);cout<<"d";Sleep(200);cout<<"e";Sleep(200);cout<<"d";Sleep(200);cout<<".";Sleep(200);cout<<".";Sleep(200);cout<<".";Sleep(200);cout<<"!";Sleep(200);cout<<"\n";
				system("PAUSE");
				system("CLS");
				
			}
			break;
		case 2:
			{
				system("color CF");
				cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t // ---------------------------------------------------------------------------------------------------------------- //\n";
				history();
				system("PAUSE");
				system("CLS");
				
			}
			break;
		case 3:
			{
				system("color 9F");
				cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t // ---------------------------------------------------------------------------------------------------------------- //\n";
				d:
				search();
				cout<<"\n\t\t\t\t\t\t // ------------------------------------------------------------- //\n";
				cout<<"\n\t\t\t\t\t\t    Do You Want To Continue (Y/N) = > ";
				cin>>ch;
				if(ch=="Y" || ch=="y")
				{
					goto d;
				}
				system("PAUSE");
				system("CLS");
				
			}
			break;
		case 4:
			{
				system("color B4");                                                                                                                                           
				p3->END();
				exit(0);
				
			}
			break;
		default :
				cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t--------------------------------------------------------------------\n";
				cout<<"\t\t\t\t\t\t\tInvalid Choice, Try Again\n";
				cout<<"\t\t\t\t\t\t--------------------------------------------------------------------\n";
				system("PAUSE");
				system("CLS");
	}
	goto a;
	

	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////   THE END    //////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
