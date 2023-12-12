#include<iostream>
#include<fstream>
using namespace std;
class file
{
	char name[50];
	float price;
	public: 
		void accept()
		{
		    cout<<"\nEnter Book Name:";
			cin>>name;
			cout<<"\nEnter Price:";
			cin>>price;
		}
		void display()
		{
			cout<<"\nBook Name: "<<name<<" Price: "<<price<<endl;
		}
};
 
int main()
{
	file o[10];
	fstream f;
	int i,n;
	f.open("stu.txt",ios::out);
	cout<<"How many records you want: ";
	cin>>n;
	for(i=0;i<n;i++)
		{
		o[i].accept();
		f.write((char*)&o[i],sizeof(o[i]));
		}
	f.close();
	f.open("stu.txt",ios::in);
	for(i=0;i<n;i++)
		{
			f.read((char*)&o[i],sizeof(o[i]));
			o[i].display();
		}
	f.close();
	return 0;
}