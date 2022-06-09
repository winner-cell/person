#include"person.h"
void Person::SetPerson(string name, string sex, int age)
{
	Name = name;
	Sex = sex;
	Age = age;
}void Person::DisplayPerson()
{
	cout << "姓名："<<Name<< endl<<"性别：" << Sex << endl<<"年龄：" << Age << endl;
}
void Student::SetStudent(string name, string sex, int age,
	int type, string specialty, string sclass)
{
	Name = name;
	Sex = sex;
	Age = age;
	Type = type;
	Specialty = specialty;
	Grade = sclass;
}
void Student::DisplayStudent()
{
	Person::DisplayPerson();
	cout << "类别:" << Type << "专业:" << Specialty << "班级:" << Grade<<endl;
}
void Teacher::SetTeacher(string name, string sex, int age, string course, string title, string room)
{
	Name = name;
	Sex = sex;
	Age = age;
	Course = course;
	Title = title;
	Room = room;
}
void Teacher::DisplayTeacher()
{
	Person::DisplayPerson();
	cout << "职称 "<< Title<<endl<<"教研室"<<Room<<endl << "所授课程"<<Course<<endl;
}
void PostDoctor::SetPostDoctor(string name, string sex, int age,
	int type, string specialty, string sclass, string course, string title, string room)
{
	Person::SetPerson(name, sex, age);
	Type = type;
	Specialty = specialty;
	Grade = sclass;
	Course = course;
	Title = title;
	Room = room;
}
void PostDoctor::DisplayPostDoctor()
{
	Person::DisplayPerson();
	cout << "类别:" << Type << "专业:" << Specialty << "班级:" << Grade<<endl;
	cout << "职称 " << Title << endl << "教研室" << Room << endl << "所授课程" << Course << endl;


}