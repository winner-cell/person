#include"person.h"
void main()
{
	
	Student s1;
	Teacher t1;
	s1.SetStudent("小明", "男", 20, 1, "信息", "信息203");
	t1.SetTeacher("红晓", "女", 50, "数字技术", "教授", "A302");
	s1.DisplayStudent();
	t1.DisplayTeacher();
	PostDoctor p1;
	p1.SetPostDoctor("侯明", "男", 27, 1, "通信", "通信304", "通信原理", "助教", "A702");
	p1.DisplayPostDoctor();

}
