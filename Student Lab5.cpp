#include<iostream>
using namespace std;
class Student{
	int a;
	int ocenki[5];
	char* group;
	char* fio;
public:
	Student(char _name[], char _group[]){
	fio=_name;
	group=_group;
	}
	char* getname()
	{return fio;}
	char* getgroup()
	{return group;}
	
};
void main()
{
	Student a("Artur","741");
	cout << a.getname();
	cout<<" ";
	cout<<a.getgroup();
	system("pause");
}
