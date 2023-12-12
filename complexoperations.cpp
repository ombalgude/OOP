#include <iostream>
using namespace std;

class complex
{
 float a, b;
 public:
  complex()
  {
   a=b=0;
  }
 friend istream &operator >> (istream &input, complex &c)
 {
  cout<<"Enter the real part";
  input>>c.a;
  cout<<"Enter the imaginary part";
  input>>c.b;
  return input;
 }
 friend ostream &operator << (ostream &output, complex &c)
 {
  output<<c.a<<" + "<<c.b<<"i\n";
  return output;
 }
 complex operator + (complex &c)
 {
  complex c1;
  c1.a=a+c.a;
  c1.b=a+c.b;
  return c1;
 }
 complex operator * (complex &c)
 {
  complex c1;
  c1.a=(a*c.a)-(b*c.b);
  c1.b=(b*c.a)+(a*c.b);
  return c1;
 }
};
int main()
{
 int ch;
 complex c1, c2, c3;
 cout<<"Enter complex Number 1: "<<endl;
 cin>>c1;
 cout<<"Enter complex Number 2: "<<endl;
 cin>>c2;
 do{
 cout<<"Enter your choice\n1.Multiplication\n2.Addition\n3.Exit"<<endl;
 cin>>ch;
 
 switch(ch){
 case 2: cout<<"addition:"<<endl;
 c3=c1+c2;
 cout<<c3;
 break;
 case 1: cout<<"multiplication:"<<endl;
 c3=c1*c2;
 cout<<c3;
 break;
}
}while(ch!=3);
 return 0;
}