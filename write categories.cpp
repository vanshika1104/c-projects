#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
#include"product.h"

int main()
{int i;
	ofstream o;
	ifstream it;
	it.open("products.txt",ios::in);
	o.open("categories.txt",ios::app);
	for (i=0;i<10;i++)
	{
	it.read((char*)&p[i],sizeof(p[i]));
    o<<p[i].getcategory()<<"\n";
}
it.close();
o.close();
getch();
}
