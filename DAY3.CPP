//==================== object class and structures ==========================================
//when a class is defined, only the specification for the object is defined; no need mo memory or storage is allocated.
#include <iostream.h>
#include <conio.h>

struct{
 char name[50];

 int age;

}stdent1, stdent2;

class myObj{    //className and objectName
	public:  //security by default privete then we can change in protected, public
	char name[50];  // charectors store
	int totalSdt;        // integare data store
}my1;

void main(){
 clrscr();
 //creating objects
 cout<<"Enter students name: ";
 cin>>stdent1.name;
 cout<<"Age: ";
 cin>>stdent1.age;
 cin>>my1.name;
 cin>>my1.totalSdt;


 cout<<my1.name<<" "<<stdent1.name<<endl;
 cout <<my1.totalSdt<<" "<<stdent1.age;
 getch();
}