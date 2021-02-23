/*
this指针的概念

在c++中，成员变量和成员函数是分开存储的

每一个非静态成员函数只会诞生一份函数实例，也就是说多个同类型的对象会共用一块代码
那么问题是： 这一块代码是如何区分哪个对象调用自己呢？
*/

/*
c++通过提供特殊的对象指针，this指针，解决上述问题，
【this指针指向被调用的成员函数所属的对象】（哪个对象调用这个函数，就指向哪个对象）

this指针是隐含每一个非静态成员函数内的一种指针
this指针不需要定义，直接使用即可
*/

/*
this指针的用途
	当形参和成员变量同名时，可用this指针来区分
	在类的非静态成员函数中返回对象本身，可使用return *this
	*/

#include<iostream>
using namespace std;

class Person15 
{
public:
	Person15(int age) // 有参构造函数
	{
		//age = age; // 给自身的age赋值, 但是这种写法会造成名称冲突
		// 即编译器会认为三个age是同一份

		this->age = age; // this指针 指向 被调用的成员函数 所属的对象
		// 被调用的成员函数是 Person15有参构造函数
		// 对象的成员变量有age
	}

	Person15& PersonAddAge(Person15 &p) // 引用的方式传入。引用的方式返回。当值的方式返回的时候，会拷贝一个新的this对象
	{
		this->age += p.age;
		
		return *this; // this是p2的指针， *this是p2的本体
						// Person& 使用引用的方式返回
	}

		int age;
};

// 1、 解决名称冲突
void test151() 
{
	Person15 p1(18);

	cout << "p1的年龄为：" << p1.age << endl;
}

void test152() 
{
	Person15 p1(10);
	Person15 p2(15);

	//p2.PersonAddAge(p1);

	// 链式编程思想
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	// 当p2.PersonAddAge()函数的返回值是void的时候，报错
	// 当p2.PersonAddAge()返回值是p2的时候，才对   （即return * this）

	// 链式编程思想
	cout << "p2的年龄为：" << p2.age << endl;
}

// 2、 返回对象本身用*this

int main115() {

	//test151();

	test152();

	system("pause");
	return 0;
}



















