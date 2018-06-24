#include<iostream>
#include<conio.h>
#include<windows.h>
#include <fstream>
#include"login.h"

void signup()
{
u1.signupget();
	    ifs.open("users.txt");
	    ofs.open("users.txt",ios::app);

	    for (int j=0;j<noofusers;j++)
	    {
	    	ifs.read((char*)&u[j],sizeof(u[j]));
	    if ((strcmp(u1.getcontact(),u[j].getcontact())&&strcmp(u1.getemail(),u[j].getemail()))==0)
	    {
	    	cout<<"Account already exists!\nPlease login with the same\n";
	    	status=2;
	    	Sleep(1000);
	    	break;
		}
	}
	ifs.close();
	if(status==2)
	{
	getlogin();
	}
	else
	   {ifs.open("no. of users.txt",ios::in);
		ifs>>noofusers;
		 ifs.close();
		 noofusers++;
		  ofs.write((char*)&u1,sizeof(u1));
		 ofs.close();
		 ofs.open("no. of users.txt",ios::out);
		 ofs<<noofusers;
		 ofs.close();
	
		 
}
	}
