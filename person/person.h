#include<iostream>
using namespace std;
class Person
{
protected:
	string Name;
	string Sex;
	int Age;
public:
	
	void SetPerson(string name,string sex,int age);// 设置人员数据函数；
	void DisplayPerson();// 显示人员数据函数；
};
class Student :public Person
{
protected:
	int Type;//类别
	string Specialty;//专业
	string Grade;//班级
public:
	void SetStudent(string name, string sex, int age,
					int type,string specialty,string sclass);//设置数据成员函数；
	void DisplayStudent();// 显示数据成员函数；
};
class Teacher :public Person
{
protected:
	string Course;
	string Title;
	string Room;
public:
	void SetTeacher(string name, string sex, int age,string course,string title,string room);// 设置数据成员函数；
	void DisplayTeacher();// 显示数据成员函数；
};
class PostDoctor :virtual public Teacher,virtual public Student
{
public:
	void SetPostDoctor(string name, string sex, int age,
		int type, string specialty, string sclass, string course, string title, string room);//设置数据成员函数；

	void DisplayPostDoctor();// 显示数据成员函数；
};
