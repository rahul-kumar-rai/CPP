#include <iostream.h>
#include <conio.h>
// #include <ctype.h> //there are identify charectors
#include <stdio.h> //string types

void main(){
clrscr();
/*

//===================control statements======================================
// statement and compound statement: (statement end ";" and compound opening"{" end "}"
// conditional and uses: (if,if else, if-else-if-else, nested if, and switch)
// loop and uses:
// identify and jump statements
// how to exit from the program
 int num, num1; // this statement end with ";"
 char ch;
 cout <<"enter number: \n";
 cin>> num >>ch>>num1 ;
// cout <<"enter + - * / % :  ";
// cin>>ch;

 if(ch == '+') // conditional
 {// compound statement opening

  cout<<num + 5;



  }else if(ch == '-'){// compound statement end

      cout<< num - 2;
  }else {

  cout << " Null";
 }
 //================================== Loop =================================
//==================== while loop
int n=1; //variable

while(n < 10 ) //condition
{//compound opening
  cout<<n<<endl;  // print
  n++;   // increaments / decreaments
}  //compound statements end

//=================do-while loop

int n, n2, total, i=0;

do{
cin>>n >>n2;
total = n + n2;
cout<<total;
cout<<"\nexit \n";
cin>>i;

}while( i == 0 );

//===============for loop
for(int i=1; i<5; i++){
 cout<<i;
}
*/
//=============== jump statement

struct students{
 char name[50];
 int age;
}s[3];

for (int i=1; i<3; i++)
{
cout<<"enter your name: ";
cin>>s[i].name;
cout<<"enter age: ";
cin>>s[i].age;

};


for(int j=1;j<5; j++){
cout <<"\n===================================\n";
cout <<"Name: "<<s[j].name<<" Age: "<<s[j].age;
};


 getch();
}