#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
#include"product.h"

int main()
{int i;
	ofstream o;
	o.open("products.txt",ios::app);
	for (i=0;i<10;i++)
	{p[i].enterproductdetails();
	o.write((char*)&p[i],sizeof(p[i]));
}
o.close();
getch();
}
