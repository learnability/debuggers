#include<iostream>
using namespace std;
int main()
{
char c;
double a,b;
do
{
cout<<"MENU\n1.Add 2 Numbers\n2.Subtract 2 Numbers\n3.Multiply 2 Numbers\n4.Divide 2 Numbers\n5.Exit\n";
cout<<"Enter your choice\n";
cin>>c;
if( c=='1'||c=='2'||c=='3'||c=='4' )
	{
	cout<<"Enter Two Numbers";
	cin>>a>>b;
	}
switch(c)
{
case '1':	cout<<"Ans="<<add(a,b);break;
case '2':	cout<<"Ans="<<sub(a,b);break;
case '3':	cout<<"Ans="<<mul(a,b);break;
case '4':	if(b)
			cout<<"Ans="<<div(a,b);
		else	
			cout<<"Division by Zero not possible";
		break;
case '5':	break;
default : 	cout<<"Wrong Choice!! Enter Again";
}
}while(c!='5');
return 0;
}
