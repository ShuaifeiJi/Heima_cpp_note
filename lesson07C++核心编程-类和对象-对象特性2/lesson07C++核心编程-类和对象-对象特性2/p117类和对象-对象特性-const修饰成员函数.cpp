/*
const修饰成员函数

常函数
	成员函数加const后，我们称这个函数为常函数
	常函数内不可以修改成员属性
	成员属性声明时加关键字mutable后，在常函数中依然可以修改
*/

/*
常对象
	声明对象前加const称该对象为常对象
	常对象只能调用常函数
*/

#include <iostream>
using namespace std;

// 常函数
class Person 
{
public:
	void showPerson() const
	{
		//m_A = 100;  当常函数时，报错，表达式必须是可以修改的左值
		// 因为常函数内不可以修改成员属性
		// 因为相当于this->m_A = 100;


		// this指针的本质是一个指针常量，相当于Person * const this;
		// 指针常量的特点是：指针的指向是不可以修改的
		// 比如this指针指向了一个对象p,当不加const时候，
		// this指针指向的值是可以修改的，如：this->m_A = 200
		// 而this指针指向是不可以修改的 


		// 当加const时候（常函数时），相当于const Person * const this;
		// 则指针的指向、指针指向的值均不可以修改。
		
		// 总结：在成员函数后边加上const，修饰的是this指针
		// 让指针指向的值也不可以修改

		this->m_B = 100;
	}
	void func() 
	{
		cout << "FUCK" << endl;
		m_A = 100;
	}

	int m_A;
	mutable int m_B; // 加mutable后，特殊变量，即使在常函数中，也可以修改这个值
};

// 常对象
void test02() 
{
	const Person p; // 在对象前加const，变为常对象

	//p.m_A = 100;
	// 报错，表达式必须是可以修改的左值，
	// 因为常对象的属性是不可以修改的

	p.m_B = 300; // 正确，因为mutable修饰的m_B是特殊变量，在常对象下也可以修改

	// 常对象只能调用常函数
	p.showPerson(); // 因为showPerson()是常函数
	//p.func(); // 报错，不兼容的类型限定符。因为常对象不能调用这个函数
	// 因为 普通成员函数 可以修改 普通成员变量
	// 而常对象只能修改mutable修饰的成员变量
}


int main() {

	system("pause");

	return 0;
}
// 总结：
/*
	常函数(成员函数后边 加const)
	常函数不可以修改成员属性
	成员属性加mutabla后，在常函数中可以修改

	常对象（实例化对象时候，前面加const）
	常对象只能调用常函数

*/