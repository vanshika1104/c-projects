#include<iostream>
#include<conio.h>
#include<windows.h>
#include <fstream>
#include"about.h"
#include"help.h"
#include"signup.h"


char  c3[30],c4[50],c7='n';
using namespace std;

void before_login();
void after_login()
{   int a;
do
{
    system("cls");
    
    cout<<"CONGRATULATIONS!,Successful Login\n";
	cout<<"Enter your choice\n1.Shop from catergories\n2.Search for an item\n3.My Profile\n4.My Orders\n5.My wallet\n6.Help center\n7.About Us\n8.Exit\n";
	cin>>a;
	switch (a)
	{ case 1: int j;
	system("cls");
	cout<<"\nChoose a category from below\n";
	
	ifs.open("products.txt");
	for ( j=0;j<10;j++)
	{
		ifs.read((char*)&p[j],sizeof(p[j]));
		
	    if(j!=0)
		{ 
		for (int n=1; n<=j;n++)
		{ 
		if (strcmp(p[j].getcategory(),p[j-n].getcategory())==0)
		{	status =0;
		break;
	}
			else
			status=1;
		}
		
	}
}
	if(!status)
		{
			continue;
		}
			else 
		{
		cout<<p[j].getcategory()<<"\n";
	
	    }
	cin.getline(buff,5);
	
	cin.getline(c3,30);
	
	system("cls");
	cout<<"\nChoose among these products\n(Enter product name to choose one)\n";
//fs.seekg(0);
	for( j=0;j<10;j++)
	
	{
		if (strcmp(p[j].getcategory(),c3)==0)
		{
			p[j].displayproductname();
			cout<<endl;
			status=4;
		}
		
	}
	cin.getline(c4,50);
	if (status==4)
	{
   	for( j=0;j<10;j++)
	{
		if (strcmp(p[j].getname(),c4)==0)
		{
			p[j].displayproduct();
			status=5;
			cout<<"\nDo you want to buy this product(y/n)\n";
			cin>>c7;
			if (c7=='y'||c7=='Y')
			{ p1=p[j];
				u1.placeorder();
				
			}
		}
	}
}
	
	ifs.close();
	break;
	case 2: char buff[10];
	system("cls");
	ifs.open("products.txt");
	cout<<"\nEnter the product name \n";
	cin.getline(buff,10);
	cin.getline(c4,50);
	for (int j=0;j<10;j++)
	{
		ifs.read((char*)&p[j],sizeof(p[j]));
		if(strcmp(c4,p[j].getname())==0)
		{
			p[j].displayproduct();
			status=0;
			cout<<"\nDo you want to buy this product(y/n)\n";
			cin>>c7;
			if (c7=='y'||c7=='Y')
			{ p1=p[j];
				u1.placeorder();
				
			}
		}
	}
	if(status!=0)
	{
		cout<<"SORRY!The product couldn't be found\n";
	}
	ifs.close();
	break;
	
		case 4: ifs.open("users.txt");
				ifs1.open("noofusers.txt");
				ifs1>>noofusers;
				ifs1.close();
				for(int j=0; j<noofusers; j++)
				{
	ifs.read((char*)&u[j],sizeof(u[j]));
					if(strcmp(u1.getemail(),u[j].getemail())==0)
					{
					u[j].getorderdetails();
					}
				}
				ifs.close();
				break;
		
		case 5:
			u1.wallet();
			cin>>c6;
			switch(c6)
			{
				case 11: u1.addamount();
				ifs.open("users.txt");
				ifs1.open("noofusers.txt");
				ifs1>>noofusers;
				ifs1.close();
				for(int j=0; j<noofusers; j++)
				{
ifs.read((char*)&u[j],sizeof(u[j]));
				
				if (strcmp(u1.getemail(),u[j].getemail())==0)
				{
					status=10;
					u[j]=u1;
					break;
				}
			}ifs.close();
				if (status==10)
				{
					ofs.open("users.txt");
					for(int j=0; j<noofusers; j++)
				{
						ofs.write((char*)&u[j],sizeof(u[j]));
					}
					ofs.close();
					
				}
				break;
				case 12: after_login();
				break;
				case 13: cout<<"\nLast amount withdrawn was: "<<u1.getamt();
				break;
				default: break;
			}
			break;
			case 3: ifs.open("users.txt");
				ifs1.open("noofusers.txt");
				ifs1>>noofusers;
				ifs1.close();
				for( j=0; j<noofusers; j++)
				{
ifs.read((char*)&u[j],sizeof(u[j]));
					if (strcmp(u1.getemail(),u[j].getemail())==0)
					{
						u[j].displayusers();

					}
				}
				ifs.close();
				cout<<"Do you wish to go back\n";

cin>>c7;
if(c7=='y'||c7=='Y')
after_login();
break;
	
	case 6: help();
	break;
	
	case  7: about();
	break;
	case 8: exit(2);
	default:
			cout<<"\nWrong choice entered";
			Sleep(1000);
			break;	
	}
}
	while(a>5&&a!=8);
	getch();
}
void before_login()
{

 int b;
    
    
    do
    {
    system("cls");

	cout<<"Enter your choice\n1.Shop from catergories\n2.Search for an item\n3.Login\n4.Sign up\n5.Help center\n6.About Us\n7.Exit\n";
	cin>>b;
	switch(b)
	
	{   case 1: system("cls");
	int j;
	 
	cout<<"\nChoose a category from below\n";
	
	ifs.open("products.txt");
	for ( j=0;j<10;j++)
	{
		ifs.read((char*)&p[j],sizeof(p[j]));
		
	    if(j!=0)
		{ 
		for (int n=1; n<=j;n++)
		{ 
		if (strcmp(p[j].getcategory(),p[j-n].getcategory())==0)
		{	status =0;
		break;
	}
			else
			status=1;
		}
		
	}
	if(!status)
		{
			continue;
		}
			else 
		{
		cout<<p[j].getcategory()<<"\n";
		
	    }

	}
	cin.getline(buff,5);
	
	cin.getline(c3,30);
	
	system("cls");
	cout<<"\nChoose among these products\n(Enter product name to choose one)\n";
//fs.seekg(0);
	for( j=0;j<10;j++)
	
	{
		if (strcmp(p[j].getcategory(),c3)==0)
		{
			p[j].displayproductname();
			cout<<endl;
			status=4;
		}
		
	}
	cin.getline(c4,50);
	if (status==4)
	{int c5;
   	for( j=0;j<10;j++)
	{
		if (strcmp(p[j].getname(),c4)==0)
		{
			p[j].displayproduct();
			status=5;
			cout<<"\nLOGIN or SIGNUPto buy this product\n";
			cout<<"\n1.Login\n2.Sign up\n";
			cin>>c6;
			switch(c6)
			{
				case 1: getlogin();
				 if( status==3)
		 after_login();
				break;
				case 2: signup();
				 if( status==3)
		 after_login();
		 break;
		 default: break;
		}
	}
}
}
	if( status<4)
	cout<<"\nWrong item info entered\n";

	
	ifs.close();
	
	break;
	case 2: system("cls");
	ifs.open("products.txt");
	cout<<"\nEnter the product name \n";
	cin.getline(buff,10);
	cin.getline(c4,50);
	for (int j=0;j<10;j++)
	{
		ifs.read((char*)&p[j],sizeof(p[j]));
		if(strcmp(c4,p[j].getname())==0)
		{
			p[j].displayproduct();
			status=0;
			cout<<"\nLOGIN or SIGNUPto buy this product\n";
			cout<<"\n1.Login\n2.Sign up\n";
			cin>>c6;
			switch(c6)
			{
				case 1: getlogin();
				 if( status==3)
		 after_login();
				break;
				case 2: signup();
				 if( status==3)
		 after_login();
		 break;
		 default: break;
				
			}break;
		}
	}
	if(status!=0||status!=3)
	{
		cout<<"SORRY!The product couldn't be found\n";
	}
	ifs.close();
	break;
	
	    case 3: getlogin();
	    if( status==3)
		 after_login();
	     
	     break;
	    case 4: 
		 
		 signup();
		 if( status==3)
		 after_login();
		
	    break;
		case 5: help();
		continue;
		case 6: about();
		break;
		case 7: exit(1);
		break;
		default:
			cout<<"\nWrong choice entered";
			Sleep(1000);
			break;
	}
}while((b>4)&&(b!=7));
}



int main()
{

before_login();
	getch();
	return 0;
}

