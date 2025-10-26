#include <iostream>
using namespace std;

class Person {
public:
	Person() {
		m_A = 0;
		m_B = 0;
	}

	//this指针的本质是一个指针常量，指针本身的值（即内存地址）是不可变的
	//如果想让指针指向的值也不可以修改，需要声明常函数
	void ShowPerson() const {
		//const Type* const pointer;
		// this = NULL; //不能修改指针的指向 Person* const this;
		// 在非 const 成员函数中，this 的类型等价于 ClassName* const（指向可变对象的指针，指针本身是常量，不能被赋值）。
		// 在 const 成员函数中，this 的类型等价于 const ClassName* const（既不能改变指针，也不能通过它修改对象的非 mutable 成员）。
		// this->m_A = 100; // 错误：不能修改非 mutable 成员

		//const修饰成员函数，表示指针指向的内存空间的数据不能修改，除了mutable修饰的变量
		this->m_B = 200;
	}

	void MyFunc() const {
		//mA = 10000;
	}

public:
	int m_A;
	mutable int m_B; //可修改 可变的
};


//const修饰对象  常对象
void test01() {

	const Person person; //常量对象  
	cout << person.m_A << endl;
	//person.mA = 100; //常对象不能修改成员变量的值,但是可以访问
	person.m_B = 100; //但是常对象可以修改mutable修饰成员变量
    cout << person.m_B << endl;

    person.ShowPerson();
    cout << person.m_B << endl;

	//常对象访问成员函数
	person.MyFunc(); //常对象不能调用const的函数

}

int main() {

	test01();

	system("pause");

	return 0;
}