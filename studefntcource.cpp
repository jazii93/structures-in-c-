#include<iostream>
#include<conio.h>
using namespace std;
struct student{
int id;
char name[45];
char dept[43];
int sem;
};
struct cource{
int id;
char cource[45];
int mark;
};
int main(){
	student s1;
	cource c1;
	cout<<"enter id";
	cin>>s1.id;
	cout<<"enter student name ";
	cin>>s1.name;
	cout<<"enter departmnt";
	cin>>s1.dept;
	cout<<"enter semister";
	cin>>s1.sem;
	cout<<"enter cource id";
	cin >>c1.id;
	cout<<"cource name";
	cin>>c1.cource;
	cout<<"enter marks";
	cin>>c1.mark;
	cout<<"student name and corce name"<<s1.name<<c1.cource;

getch();
return 0;
}
