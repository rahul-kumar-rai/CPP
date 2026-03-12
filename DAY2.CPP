#include <iostream.h>
#include <conio.h>
void main(){
clrscr();
//==============day2 ===============================
int a=3; // this is variable
int b=6;
int c=9;
cout<<"\n============relational oprators==============\n";
cout <<"(a==b):"<<(a==b)<<endl; // true
cout<<"(a<=c):"<<(a<=c);
cout <<"\n================logical oprators================\n";
cout <<"((a==b) || (b==a)):" <<((a==b) || (b==a))<<endl;
cout <<"((b==b ) && (b==c)):"<<((b==b ) && (b==c))<<endl;
cout <<"\n=================unary oprators=============\n";
a =+59;
cout<<"a =+59:"<<a<<endl;
b=-2;
cout<<"b=-2: "<< b <<endl;
cout<<"\n==================assinment oprators===========\n";
cout<< "int a=8, b=7;"<<endl;
cout <<"int a,b,c;"<<endl;
cout <<"\n=======================conditional operator========\n";
cout<<"(a>b)? a:b;"<<(a>b) ? a:b;
cout<<"\n================comma operator=====================\n";
int i,j;
j=10;
i=(j++, j+100,999+j);
cout<<"int i,j;"<<endl;
cout<<"j=10;"<<endl;
cout<<"i=(j++, j+100,999+j);"<<endl;
cout<<i;




getch();
}

