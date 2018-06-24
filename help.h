#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

void help()
{char h[100];
ifstream f1;
f1.open("Help.txt");
system("cls");
while(!f1.eof())
{
	f1.getline(h,100);
	
	cout<<h<<"\n";
}
	f1.close();
	getch();
}
