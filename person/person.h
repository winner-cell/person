#include<iostream>
using namespace std;
class Person
{
protected:
	string Name;
	string Sex;
	int Age;
public:
	
	void SetPerson(string name,string sex,int age);// ������Ա���ݺ�����
	void DisplayPerson();// ��ʾ��Ա���ݺ�����
};
class Student :public Person
{
protected:
	int Type;//���
	string Specialty;//רҵ
	string Grade;//�༶
public:
	void SetStudent(string name, string sex, int age,
					int type,string specialty,string sclass);//�������ݳ�Ա������
	void DisplayStudent();// ��ʾ���ݳ�Ա������
};
class Teacher :public Person
{
protected:
	string Course;
	string Title;
	string Room;
public:
	void SetTeacher(string name, string sex, int age,string course,string title,string room);// �������ݳ�Ա������
	void DisplayTeacher();// ��ʾ���ݳ�Ա������
};
class PostDoctor :virtual public Teacher,virtual public Student
{
public:
	void SetPostDoctor(string name, string sex, int age,
		int type, string specialty, string sclass, string course, string title, string room);//�������ݳ�Ա������

	void DisplayPostDoctor();// ��ʾ���ݳ�Ա������
};
