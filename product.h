#include<iostream>
#include<conio.h>
using namespace std;

char buff[20];
class product
{
	char category[30],name[50],seller[50],description[1000];
	float price;
	int stock;
	public:
		void enterproductdetails()
		{
			cout<<"\nEnter category: ";
			cin.getline(category,30);
			cout<<"\nEnter name of the product: ";
			cin.getline(name,50);
			cout<<"\nEnter seller name: ";
			cin.getline(seller,50);
			cout<<"Enter product description: ";
			cin.getline(description,1000);
			cout<<"\nEnter price: ";
			cin>>price;
			cout<<"\nEnter the no. of products in stock: ";
			cin>>stock;
			cin.getline(buff,20);
		}
		char *getcategory()
		{
			return category;
		}
		int getstock()
		{
			return stock;
		}
		float getprice()
		{
			return price;
		}
		char *getname()
		{
			return name;
		}
		void displayproduct()
		{
			cout<<"\nProduct name: "<<name;
			cout<<"\nCategory: "<<category<<"\nPrice: "<<price<<"\nNo. of items in stock: "<<stock<<"\nDescription: "<<description<<"\n";
		}
		void displayproductname()
		{
			cout<<"\nProduct name: "<<name;
		}
	
}p[1000],p1;
