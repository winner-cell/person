#include"person.h"
void Person::SetPerson(string name, string sex, int age)
{
	Name = name;
	Sex = sex;
	Age = age;
}void Person::DisplayPerson()
{
	cout << "������"<<Name<< endl<<"�Ա�" << Sex << endl<<"���䣺" << Age << endl;
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
	cout << "���:" << Type << "רҵ:" << Specialty << "�༶:" << Grade<<endl;
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
	cout << "ְ�� "<< Title<<endl<<"������"<<Room<<endl << "���ڿγ�"<<Course<<endl;
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
	cout << "���:" << Type << "רҵ:" << Specialty << "�༶:" << Grade<<endl;
	cout << "ְ�� " << Title << endl << "������" << Room << endl << "���ڿγ�" << Course << endl;


}