#include <iostream.h>
#include <conio.h>
#include <ctype.h> //there are identify charectors

void main(){
clrscr();
/*
//============practical=======================
double r1, r2, aria, perimeter, pi=3.14;

cout <<"Enter number1: ";
cin>>r1;
cout <<"Enter number2: ";
cin>>r2;
aria = pi*r1*r2;
cout <<"aria of the circle: "<<aria<<endl;
perimeter = 2*pi*r2;
cout <<"perimeter :"<<perimeter<<endl;

//========practical=======================
int a;
cout<<"Enter any numbers ";
cin>>a;
a = a%2;

(a== 0) ? cout<<"even number":cout <<"Odd number";

// =================== practical=========================
char ch;
cout<<"Enter any charectors: ";
cin>>ch;
cout << ch<<endl;

if(isalpha(ch)){
cout <<"This is charectors";
}else if(isdigit(ch)){
 cout<<"This is digits";
}else{
cout<<"Symbol";
}

//===================practical=====================================
 int N;
 cout<<"Enter numbers: ";
 cin>>N;

 switch(N)
 {
 case 1:cout<<"Monday";
	break;
 case 2:cout<<"Tuesday";
	break;
 case 3:cout<<"Wednasday";
	break;
 case 4:cout <<"Thusday";
	break;
 case 5:cout<<"Friday";
	break;
 case 6:cout<<"Saturday";
	break;
 case 7:cout<<"Sunday";
	break;
 default:cout<<"Invelate Numbers";
 };


//===================practical=======================================
// write a C++ program (using while loop ) to display all the multiples of 5
// from 100 to 50.
int n=0, Num =100;
while(Num >= 50){
  n=Num;
Num = Num - 5;
cout<<n<<endl;
}
*/
//=================practical=======================================
int i=1, n, f, f1,f2;
cout<<"Enter Number: ";
cin>>n;
cout<<"fibonacci num: 0 1 =1+1=1, 0 1 1=1+1=2, 0 1 1 2";
f=0;
f1=1;
f2=1;
do{
cout<<f<<endl;
f1= f2;
f2=f;
f=f1+f2;
i++;
}while(i <= n);


 getch();
}