#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

void about()
{char t2[100];
ifstream f2;
f2.open("About us.txt");
system("cls");
while(!f2.eof())
{
	f2.getline(t2,100);
	cout<<t2;
}
	f2.close();
	getch();
}
