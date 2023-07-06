#include<iostream>
#include<fstream>
#include<cstdlib>
#include<conio.h>
#include<ctime>
#include<iomanip>
using namespace std;

struct costumer_info
                        {
                            char name[20];
                            char address[100];
                            char contact[10];
                            char age[5];
                            char sex[8];
                            char blood_gp[5];
                            char cnic[20];
                            char pin_code[20];
                            int withdraw;
                            int deposit;
                            int total;
                        };                        
int balance;                        
void welcome();
void login();
void fordelay(); 
void open_account(); 
void deposit();
void money();
void time();
void menu();  
void exit();
void info_bank();  
void info_account();
void withdraw();              
main(){
	 welcome();
	cout<<"\n";
	 login();
	 
}  
void fordelay(int j)
{  
    int i,k;
    for(i=0;i<j;i++)
         k=i;
}      
void password(){
   string pass ;

   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  BANKING MANAGEMENT SYSTEM \n\n";
   cout<<"\t\t\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n";
   cout<<"\t\t\t\t\t\t\t\t==============================\n";
   cout<<"\t\t\t\t\t\t\t\t==============================\n";
   cout<<"\t\t\t\t\t\t\t\t-----------  LOGIN  ----------\n";
   cout<<"\t\t\t\t\t\t\t\t==============================\n";
   cout<<"\t\t\t\t\t\t\t\t==============================\n";	
   cout<<"\n\t\t\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n";	
   cout << "\t\t\t\t\t\t\t\tEnter Password: ";
   cin>>pass;
   if(pass == "pass"){
      cout<<"\n \t\t\t\t\t\t\t\t \n \t\t\t\t\t\t\t\t Loading ";
      for(int i=0;i<=6;i++)
        {	
            fordelay(100000000);
            cout<<"!";
        }
        cout << "\n\n\t\t\t\t\t\t\t\tAccess Granted! \n";
      system ("CLS");
   }else{
      cout << "\n\n\t\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      password();
   }
}
	 
void time() {
   time_t now = time(0);
   char* dt = ctime(&now);
   cout <<"\t\t\t\t\t\t\t\t "<< dt << endl;
   
   }	                    
void welcome()
{ 	
char acc_name[20];

re:
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	time();
cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                     WELCOME TO                                   \t  |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                          MEMORIAL BANKING MANAGEMENT SYSTEM                           |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                             -MADE BY H-H-A Dragons    |@@\n";
cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
system("pause");
system("cls");
}

void login(){
password();
menu();
}


void menu(){
int choice;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  Banking MANAGEMENT SYSTEM \n\n";	
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t||=================================================================|| \n";
cout<<"\t\t\t\t\t\t|| \t\t\t\t\t\t      	 	   ||\n";
cout<<"\t\t\t\t\t\t||             1  >> Opening New Account                       	   ||\n";
cout<<"\t\t\t\t\t\t||             2  >> Money Deposit                        	   ||\n";
cout<<"\t\t\t\t\t\t||             3  >> Money Withdraw                     \t   ||\n";
cout<<"\t\t\t\t\t\t||             4  >> Full History of the costumer                  ||\n";
cout<<"\t\t\t\t\t\t||             5  >> Information About the Bank                    ||\n";
cout<<"\t\t\t\t\t\t||             6  >> Exit the Program                              ||\n";
cout<<"\t\t\t\t\t\t||=================================================================||\n\n";
tr:cout<<"\t\t\t\t\t\tEnter your choice: ";cin>>choice;
switch(choice){
	case 1:
		open_account();
		break;
	case 2:
		deposit();
		break;
	case 3:
		withdraw();
		break;
	case 4:
		info_account();
		
		break;
	case 5:
		system("CLS");
		info_bank();
		break;
	case 6:
		system("CLS");
		exit();
		break;
	default:
		cout<<"Invalid Option.....\n\n";
		system("PAUSE");
		system("cls");
		menu();
		break;
			
}
}
  char acc_name[20];
 int temp_variable;
 
void open_account()
{
  cout<<"\n\n\n\n\t\t\t\t <<<<<<<<<<<<<<<<<<<<<<--------   MEMORIAL Banking management System      --------->>>>>>>>>>>>>>>>>>>>\n\n\n\n";	
ofstream costumer_file;
    time();
    srand(time(0));
    
    int len=10;
    char valid[] = "123456789034689";
    const int l = 15; 
    
    for (int i = 0; i < len; ++i )
    {
        acc_name[i] = valid[rand() % l];    
    }
  cout<<"\n\n\n\nYour Account number is: ";
  cout<<acc_name;
  costumer_file.open(acc_name);
  		if(!acc_name)
		{
		cout<<"\nError while opening the file\n";
		system("CLS");
		menu();
		}
		else
		{
                        
			gets(acc_name);
			srand(time(0));
    		char pin_code[20];
    		int len=4;
    		char valid[] = "123456789034689";
    		const int l = 15; 
    
    		for (int i = 0; i < len; ++i )
    		{
        	pin_code[i] = valid[rand() % l];    
    		}
            costumer_info ak;
            cout<<"\n********************************************************************\n";costumer_file<<"\n********************************************************************\n\n";
            cout<<"\n Name : ";costumer_file<<"Name : ";gets(ak.name);costumer_file<<ak.name<<"\n";
            cout<<"\n Address : ";costumer_file<<"Address : ";gets(ak.address);costumer_file<<ak.address<<"\n";
            cout<<"\n Contact Number : ";costumer_file<<"Contact Number : ";gets(ak.contact);costumer_file<<ak.contact<<"\n";
            cout<<"\n Age : ";costumer_file<<"Age : ";gets(ak.age);costumer_file<<ak.age<<"\n";
            cout<<"\n Sex : ";costumer_file<<"Sex : ";gets(ak.sex);costumer_file<<ak.sex<<"\n";
            cout<<"\n Blood Group : ";costumer_file<<"Blood Group : ";gets(ak.blood_gp);costumer_file<<ak.blood_gp<<"\n";
            cout<<"\n CNIC : ";costumer_file<<"CNIC : ";gets(ak.cnic);costumer_file<<ak.cnic<<"\n";
            cout<<"\n Pincode : "<<pin_code;costumer_file<<"Pin code : "<<pin_code;gets(ak.pin_code);costumer_file<<ak.pin_code<<"\n";
            cout<<"\n Amount to deposit: ";costumer_file<<"Total balance: ";cin>>balance;costumer_file<<balance<<"\n";
            cout<<"\n********************************************************************\n";costumer_file<<"\n********************************************************************\n\n";
            cout<<"\nInformation Saved Successfully\n";
            costumer_file.close();
            
            }
            
            
  system("pause");
  system("cls");
  menu();

}
void deposit()
{
    fstream costumer_file;
    cout<<"\n\nEnter your Account number: ";
    cin.ignore();
    gets(acc_name);
    system("cls");
	costumer_file.open(acc_name, ios::in);
		if(!costumer_file)
		{
		cout<<"\nError while opening the file\n";menu();
		}
		else
		{
			cout<<"\n\n\n\n\t\t\t     <<<<<<<<<<<<<<<<<<<<<<--------     MEMORIAL BANKING  MANAGEMENT SYSTEM      --------->>>>>>>>>>>>>>>>>>>>\n\n\n\n";
		    cout<<"\n\n\n\n\t\t\t\t........................................ Information about "<<acc_name<<" ........................................\n\n\n\n";
		    string info;
			while(costumer_file.good())
			{
			getline(costumer_file,info);
			cout<<info<<"\n";
			}
			cout<<"\n";
			costumer_file.close();
			costumer_file.open(acc_name,ios::in | ios::out | ios::app);
            cout<<"\n";
			cout<<".........................................................Money Deposit............................................... : ";time();costumer_file;cout<<"\n";
				costumer_info ak;
				cout<<"\nEnter Total Balance In Your Account: ";cin>>balance;               
//   
            	cout<<"\nEnter amount to deposit  : "; costumer_file<<"Money deposited : ";cin>>ak.deposit ; costumer_file<<ak.deposit<<"\n";

			    ak.total =balance+ ak.deposit ;
			    cout<<"Total balance: "<<ak.total;costumer_file<<"Total Balance: "<<ak.total;

			  cout<<"\nDeposited succesfully";
			costumer_file.close();
			cout<<"\n\n";
			system("pause");
            system("cls");
			menu();
}
}
void withdraw()
{
    fstream costumer_file;
    cout<<"\n\nEnter your Account number: ";
    cin.ignore();
    gets(acc_name);
    system("cls");
	costumer_file.open(acc_name, ios::in);
		if(!costumer_file)
		{
		cout<<"\nError while opening the file\n";menu();
		}
		else
		{
			cout<<"\n\n\n\n\t\t\t     <<<<<<<<<<<<<<<<<<<<<<--------     MEMORIAL BANKING  MANAGEMENT SYSTEM      --------->>>>>>>>>>>>>>>>>>>>\n\n\n\n";
		    cout<<"\n\n\n\n\t\t\t\t........................................ Information about "<<acc_name<<" ........................................\n\n\n\n";
		    string info;
			while(costumer_file.good())
			{
			getline(costumer_file,info);
			cout<<info<<"\n";
			}
			cout<<"\n";
			costumer_file.close();
			costumer_file.open(acc_name,ios::in | ios::out | ios::app);
            cout<<"\n";
			cout<<".....................................................................Money Withdraw.......................................... : ";costumer_file;time();cout<<"\n";
				costumer_info ak;
				cout<<"\nEnter Total Balance: ";cin>>balance;               
//   
            	cout<<"\nEnter Amount to withdraw  : "; costumer_file<<"\n Money withdraw : ";cin>>ak.withdraw; costumer_file<<ak.withdraw<<"\n";
            	if(ak.withdraw>balance){
            		cout<<"\n\n Error......\n \t Insufficent balance.\n";
            		system("PAUSE");
            		menu();
				}
				else
				{
			    ak.total =balance- ak.withdraw ;
			    cout<<"Total balance: "<<ak.total;costumer_file<<"Total Balance: "<<ak.total;

			  cout<<"\nWithdraw succesfully";
				}
			costumer_file.close();
			cout<<"\n\n";
			system("pause");
            system("cls");
			menu();
}
}

void info_account()
{
    fstream costumer_file;
    cout<<"\n\nEnter your account number : ";
    cin.ignore();
    gets(acc_name);
    system("cls");
	costumer_file.open(acc_name, ios::in);
		if(!costumer_file)
		{
		cout<<"\nError while opening the file\n";menu();
		}
		else
		{
			cout<<"\n\n\n\n\t\t\t\t <<<<<<<<<<<<<<<<<<<<<<--------     MEMORIAL BANKING MANAGEMENT SYSTEM       --------->>>>>>>>>>>>>>>>>>>>\n\n\n\n";
		    cout<<"\n\n\n\n\t\t\t\t........................................ Full Account History of "<<acc_name<<" ........................................\n\n\n\n";
		    string info;
			while(costumer_file.good())
			{
			getline(costumer_file,info);
			cout<<info<<"\n";
			}
			cout<<"\n";
        }
        system("pause");
        system("cls");
        menu();
}


void info_bank()
{
	ifstream file;
	file.open("hos.txt");
		if(!file)
		{
		cout<<"\nError while opening the file\n";
		system("CLS");
		menu();
		}
		else
		{
		    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t   ...........................Information about the Bank.............................\n\n";
		    string line;
			while(file.good())
			{
			getline(file,line);
			cout<<line<<"\n\t\t";
			}
			cout<<"\n\n\t\t";
			system("pause");
            system("cls");
            menu();
			
		}
}
void exit()
{
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
cout<<"\t\t\t\t\t@@|                               THANK YOU FOR USING                                     |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                         MEMORIAL BANKING MANAGEMENT SYSTEM                            |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
cout<<"\t\t\t\t\t@@|                                                             -MADE BY H-H-A Dragrons   |@@\n";
cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
}