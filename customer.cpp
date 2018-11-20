#include<iostream>
#include<conio.h>
using namespace std;
struct employee{
char name[50];
int  DateOfJoing;
char dest[14];
};
int main(){
	employee e;
	cout<<"enter name"<<endl;
	cin>>e.name;
	cout<<"enter date of joining"<<endl;
	cin>>e.DateOfJoing;
	cout<<"enter destination"<<endl;
	cin>>e.dest;
	cout<<"name\n"<<e.name;
	cout<<"date of joing\n"<<e.DateOfJoing;
	cout<<"destination\n"<<e.dest;
getch();
return 0;
}
