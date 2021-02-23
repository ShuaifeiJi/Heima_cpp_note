/*
成员属性设置为私有 private

优点1：	将成员属性设置为私有，可以自己控制读写权限

优点2： 对于写权限，我们可以检测数据的有效性
*/

#include <iostream>
using namespace std;
#include <string>

// 成员属性设置为私有 private
// 1、可以自己控制读写权限
// 2、对于写，可以检测数据的有效性

// 设计Person类
class Person02
{
public:
	// 设置姓名
	void setName(string name) 
	{
		m_Name = name;
	}

	// 获取姓名
	string getName() 
	{
		return m_Name;
	}

	//获取年龄  可读可写  如果想修改（年龄范围必须是0 ~ 150之间）
	int getAge() 
	{
		//m_Age = 18; //初始化为
		return m_Age;
	}

	void setAge(int age) 
	{
		if (age < 0 || age > 150) 
		{
			cout << "输入的年龄请在0 ~ 150之间" << endl;
			return;
		}
		m_Age = age;
	}

	//设置情人 只写
	void setLover(string lover)
	{
		m_Lover = lover;
	}

private:
	// 姓名	可读可写
	string m_Name;
	// 年龄	只读
	int m_Age = 0;
	// 情人	只写
	string m_Lover;
	
};

int main103() {

	Person02 p; // 实例化
	p.setName("张三");

	cout << "名字是：" << p.getName() << endl;
	 
	p.setAge(88);

	cout << "年龄是：" << p.getAge() << endl;

	p.setLover("貂蝉"); // 设置情人为 貂蝉
	// 只能写，不可以访问


	system("pause");
	return 0;
}