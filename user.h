#include<iostream>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include <fstream>
#include <time.h>
#include "product.h"
using namespace std;
ifstream ifs,ifs1;
    ofstream ofs;
    int c6;
struct order
{
	int orderno;
	char *pname,*pcategory;
	float pprice;
	char date[9],time[9];
};
struct payment
{
	char cardno[12],cname[20];
	int expirymonth,expiryyear,cvv;
};
class user
{char buffer[10];
	char contact[11],fname[20],lname[20],email[60],password[25],c,address[200];
    double pincode,wamt; 
    order od1[20],od;
    payment pay;
	public:
		double amt=0;
		int nooforders=0;
		char username[50],pass[25];
		void signupget()
		{ cin.getline(buffer,2);
			cout<<"\nEnter first name: ";
			cin.getline(fname,20);
			cout<<"\nEnter last name: ";
			cin.getline(lname,20);
			cout<<"\nEnter email id: ";
			cin.getline(email,50);
			cout<<"\nEnter mobile no: ";
			cin.getline(contact,11);
			cout<<"\nEnter a password (must contain b/w 6-25 alphabets or numbers): ";
			
			cin.getline(password,25);
			while(strlen(password)<6)
			{
			cout<<"\nPLEASE ENTER A VALID PASSWORD!\n";
			cin.getline(password,25);	
			}
			
			cout<<"\nEnter address: ";
			cin.getline(address,200);
			cout<<"\nEnter pincode: ";
			cin>>pincode;
			wamt=0;
			cout<<"\nPress Enter to continue";
			getch();
			system("cls");
			cout<<"\nDo you wish to enter credit card details now (y/n): ";
			cin>>c;
			if(c=='y'||c=='Y')
			{
				system("cls");
				cin.getline(buffer,2);
				cout<<"\nEnter card no.: ";
				cin.getline(pay.cardno,12);
				cout<<"\nEnter name to which card is registered: ";
				cin.getline(pay.cname,20);
				cout<<"\nEnter expiry month: ";
				cin>>pay.expirymonth;
				cout<<"\nEnter expiry year: ";
				cin>>pay.expiryyear;
				cout<<"Enter cvv no.: ";
				cin>>pay.cvv;
			}
			system("cls");
			cout<<"CONGARTULATIONS! YOUR ACCOUNT IS READY TO USE.";
			Sleep(1500);
			system("cls");
			
		}
		void login()
		{
		     
			cout<<"\nEnter email id or mobile no.: ";
			cin>>username;
			cout<<"\nEnter password: ";
			cin>>pass;
		}
		char * getemail()
		{
			return email;
		}
		char * getcontact()
		{
			return contact;
		}
		char * getpassword()
{
	return password;
		}	
		void displayusers()
		{
			cout<<fname<<endl<<lname<<endl<<contact<<endl<<email<<endl<<address<<endl<<password<<endl<<pincode<<endl;
			}	
		double addamount()
		{
			cout<<"\nCurrent balance: "<<wamt;
			cout<<"\nEnter the amount to be added: ";
			cin>>amt;
			wamt+=amt;
			cout<<"\nNew balance: "<<wamt;
		}
		void wallet()
		{
			cout<<"\nCurrent balance: "<<wamt;
			cout<<"\nWhat do yo want to do\n";
			cout<<"11.Add money to wallet\n12.Go back to home page\n13.See last withdrawn amount\n";
		}
		double getwamt()
		{
			return wamt;
		}
	double getamt()
		{
			return amt;
		}
		void placeorder()
		{ 
		ofs.open("orders.txt",ios::app);
			if (p1.getstock()>0)
			{
			
			cout<<"\nplease choose payment option\n";
			cout<<"\n1.Cash on Delivery\n2.credit card/debit card\n3.wallet\n";
			cin>>c6;
			switch(c6)
			{   case 1:od.orderno+=1;
					cout<<"Order placed\n";
					od.pcategory=p1.getcategory();
					od.pname=p1.getname();
					od.pprice=p1.getprice();
					_strdate(od.date);
					_strtime(od.time);
					ofs<<email<<endl;
					for(int n=0;n<od.orderno;n++)
					{
			ofs.write((char*)&od1[n],sizeof(od1[n]));
			ofs<<endl;
		}
		break;
		case 2: system("cls");
		cin.getline(buffer,2);
				cout<<"\nEnter card no.: ";
				cin.getline(pay.cardno,12);
				cout<<"\nEnter name to which card is registered: ";
				cin.getline(pay.cname,20);
				cout<<"\nEnter expiry month: ";
				cin>>pay.expirymonth;
				cout<<"\nEnter expiry year: ";
				cin>>pay.expiryyear;
				cout<<"Enter cvv no.: ";
				cin>>pay.cvv;
				od.orderno+=1;
					cout<<"Order placed\n";
					od.pcategory=p1.getcategory();
					od.pname=p1.getname();
					od.pprice=p1.getprice();
					_strdate(od.date);
					_strtime(od.time);
					ofs<<email<<endl;
					for(int n=0;n<od.orderno;n++)
					{
			ofs.write((char*)&od1[n],sizeof(od1[n]));
			ofs<<endl;
		}
		break;
				case 3: double te=getwamt();
				if (te>p1.getprice())
				{
					od.orderno+=1;
					cout<<"Order placed\n";
					od.pcategory=p1.getcategory();
					od.pname=p1.getname();
					od.pprice=p1.getprice();
					_strdate(od.date);
					_strtime(od.time);
					ofs<<email<<endl;
					for(int n=0;n<od.orderno;n++)
					{
			ofs.write((char*)&od1[n],sizeof(od1[n]));
			ofs<<endl;
		}
				}
				break;
				//default : break;
			}
			
		}
		ofs.close();
		}
		void getorderdetails()
		{   
		int n1;
		ifs.open("orders.txt");
		for( n1=0;n1<20;n1++);
		{    ifs.read((char*)&od1[n1],sizeof(od1[n1]));
			cout<<"\nOrder no: "<<od1[n1].orderno<<"\nProduct name: "<<od1[n1].pname<<"\nProduct category: "<<od1[n1].pcategory<<"\nProduct price: "<<od1[n1].pprice<<"\n Date of ordering: "<<od1[n1].date<<"\nTime of order: "<<od1[n1].time;
		}
		ifs.close();
	}
};
int noofusers;

    user u1,u[1000];
    
    

