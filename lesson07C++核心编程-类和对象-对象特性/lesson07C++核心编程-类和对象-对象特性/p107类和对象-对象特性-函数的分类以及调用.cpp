/*
构造函数的分类及调用
两种分类方式：
	按参数分为：有参构造和无参构造
	按类型分为：普通构造和拷贝构造

三种调用方式：
	括号法
	显示法
	隐式转换法
*/

#include <iostream>
using namespace std;

// 1、 构造函数的分类及调用
// 分类
//   按照参数分类  无参构造(默认构造) 和 有参构造
//		(默认构造的意思就是编译器默认提供的构造函数)
//   按照类型分类	普通构造	拷贝构造
class Person2
{
public:
	// 无参构造函数
	Person2() 
	{
		cout << "Person2无参构造函数的调用" << endl;
	}

	// 有参构造函数
	Person2(int a) 
	{
		age = a;
		cout << "Person2有参构造函数的调用" << endl;
	}

	// 拷贝构造函数  (把另一个实例的构造函数的属性都拷贝过来)
	// const防止修改原来的实例的构造函数， 并且使用& 按照引用的方式传递进来
	Person2(const Person2 &p) 
	{
		// 将传入的人身上的所有属性，拷贝到我身上
		age = p.age;
		cout << "Person2拷贝构造函数的调用" << endl;
	}


	~Person2() 
	{
		cout << "Person2析构函数的调用" << endl;
	}
//private:
	int age;
};

// 调用
void test02() 
{
	// 1、括号法
	Person2 p1; // 默认构造函数调用
	Person2 p2(18);  // 调用了有参构造函数
	Person2 p3(p2);  // 拷贝构造函数

	cout << "p2的年龄为：" << p2.age << endl;
	cout << "p3的年龄为：" << p3.age << endl;

	// 注意：
	//		调用默认构造函数的时候，不要加()
	//		Person p1(); 不创建对象
	//		因为这行代码，编译器会认为是一个函数的声明，例如void func();
	//		返回类型是Person，  函数名是p1,   参数列表什么都没有写

	// 2、显示法
	Person2 p6;
	Person2 p7 = Person2(10); // 有参构造
	Person2 p8 = Person2(p2); // 拷贝构造

	Person2(10); // 叫匿名对象  特点：当前行 执行结束后，系统会立即回收掉匿名对象
	cout << "aaaaa" << endl;

	// 注意事项2，不要利用拷贝构造函数，初始化匿名对象
	// 因为编译器会认为 Person (p3) === Person p3;
	// 即编译器会认为这是一个对象的声明
	// 上边已经有p3实例了，所以报错重定义
	// Person2(p3);


	// 3、隐式转换法
	Person2 p4 = 10; // 相当于写了 Person p4 = Person(10);
	// 相当于 编译器 把这种隐式的方法 转换成 显示的方法

	Person2 p5 = p4; // 隐式转换法  拷贝构造
}




int main107() {
	test02();


	system("pause");
	return 0;
}