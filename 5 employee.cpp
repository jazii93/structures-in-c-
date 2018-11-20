#include<iostream>
#include<conio.h>
using namespace std;
struct emploee{
int id;
char name[45];
int age;
};
int main(){
	emploee e1,e2;
	cout<<"enter employee id";
	cin>>e1.id;
	cout<<"enter emloyee name ";
	cin>>e1.name;
	cout<<"enter age of employee";
	cin>>e1.age;
	cout<<"id=\n"<<e1.id;
	cout<<"name=\n"<<e1.name;
	cout<<"age=\n"<<e1.age;
	cout<<"enter employee id";
	cin>>e2.id;
	cout<<"enter emloyee name ";
	cin>>e2.name;
	cout<<"enter age of employee";
	cin>>e2.age;
	cout<<"id=\n"<<e2.id;
	cout<<"name=\n"<<e2.name;
	cout<<"age=\n"<<e2.age;

getch();
return 0;
}
