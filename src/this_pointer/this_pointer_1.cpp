#include <iostream>
using namespace std;

// this指针是隐含每一个非静态成员函数内的一种指针
// this指针不需要定义，直接使用即可

// this指针的用途：
// - 当形参和成员变量同名时，可用this指针来区分
// - 在类的非静态成员函数中返回对象本身，可使用return *this
class Person
{
public:

	Person(int age)
	{
		//1、当形参和成员变量同名时，可用this指针来区分
		this->age = age;
	}

	Person& PersonAddPerson(Person p)
	{
		this->age += p.age;
		//返回对象本身
		return *this;
	}

	int age;
};

void test01()
{
	Person p1(10);
	cout << "p1.age = " << p1.age << endl;

	Person p2(10);
	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
	cout << "p2.age = " << p2.age << endl;
}

int main() {

	test01();

	system("pause");

	return 0;
}