#include"person.h"
void main()
{
	
	Student s1;
	Teacher t1;
	s1.SetStudent("С��", "��", 20, 1, "��Ϣ", "��Ϣ203");
	t1.SetTeacher("����", "Ů", 50, "���ּ���", "����", "A302");
	s1.DisplayStudent();
	t1.DisplayTeacher();
	PostDoctor p1;
	p1.SetPostDoctor("����", "��", 27, 1, "ͨ��", "ͨ��304", "ͨ��ԭ��", "����", "A702");
	p1.DisplayPostDoctor();

}
