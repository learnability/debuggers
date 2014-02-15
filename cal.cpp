#include<iostream>
#include<cmath>
using namespace std;

<<<<<<< HEAD
//aashish satyajith worked here
=======
//ashok worked here
>>>>>>> 74331fffcad58fd7be1aa45f3d55c1fd9a80c2ca

<<<<<<< HEAD
//suraj jsjksadsasdjka
=======
//suraj202221313564984984
>>>>>>> 0319a90ee778f13b72934f0119dae0cc7a2bb79b
//function to add two double precision numbers

double add(double a, double b)
{
	return a+b;	//return the sum of the given numbers
}

double div(double a,double b) //function  for division between two numbers
{  
   double d;						
      d=a/b;
      return d;				//This returns the final answer after division
}

double mul( double x, double y) //function for multiplicaation of two numbers
{
	double m;
	m=x*y;          //multiplying and storing in a separate variable
	return m;       //returning the product
}

//function to return the difference between two numbers.
double sub(double a, double b)
{
	return a-b; 	//returning the difference
}


//MAIN FUNCTION
int main()
{
char c;
double a,b;
do
{
cout<<"\nMENU\n1.Add 2 Numbers\n2.Subtract 2 Numbers\n3.Multiply 2 Numbers\n4.Divide 2 Numbers\n5.Power(x^y)\n6.Mod-function(remainder)\n7.Exit\n";
cout<<"Enter your choice:\n";
cin>>c;
if( c>='1'&&c<='6')
	{
	cout<<"Enter Two Numbers:\n";
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
case '5':   cout<<"Ans="<<pow(a,b);break;
case '6':   cout<<"Ans="<<fmod(a,b);break;
case '7':	break;
default : 	cout<<"Wrong Choice!! Enter Again";
}
}while(c!='7');
return 0;
}
