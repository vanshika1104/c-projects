#include<iostream>
#include<conio.h>
#include<windows.h>
#include <fstream>
#include"user.h"

    int status=1;
void getlogin()
{

status=1;
	    while(status!=3)
	    {system("cls");
	     ifs1.open("no. of users.txt",ios::in);
		ifs1>>noofusers;
		 ifs1.close();
		 cout<<noofusers<<endl;
		u1.login();
	    
	    ifs.open("users.txt");
	   
	    for(int j=0;j<noofusers;j++)
	    {ifs.read((char*)&u[j],sizeof(u[j]));
	    	if((strcmp(u1.username,u[j].getemail())==0)||(strcmp(u1.username,u[j].getcontact())==0))
	    	{
	    	if(strcmp(u1.pass,u[j].getpassword())==0)
	    	{
		
			status =3;
			u1=u[j];
			
			break;
			}
		}
			
		}
		if (status!=3)
		{
			cout<<"\nWrong email id or password. Try again!\n";
		}
	}ifs.close();
}	
