/*
封装意义二：
类在设计时，可以把属性和行为放在不同的权限下，加以控制

访问权限有三种：
	public		公共权限	成员	类内可以访问	类外可以访问
	protected	保护权限	成员	类内可以访问	类外不可以访问
					（父亲的保护权限，儿子可以访问，比如父亲的车）
	private		私有权限	成员	类内可以访问	类外不可以访问
					（儿子不能访问 私有权限，比如父亲的银行卡密码）
*/

#include <iostream>
using namespace std;
#include <string>

class Person
{
public:
	// 公共权限
	string m_Name; // 姓名

protected:
	// 保护权限
	string m_Car; // 汽车

private:
	// 私有权限
	int m_Password; // 银行卡密码

public:
	void func() 
	{
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = 123456;
	}

	void showPerson() 
	{
		cout << m_Name << endl;
		cout << m_Car << endl;
		cout << m_Password << endl;
	}
};

int main101() 
{
	//实例化具体对象
	Person p1;

	p1.m_Name = "李四";
	// p1.m_Car = "奔驰"; 报错：无法访问protected成员
	//p1.m_Password = 222222; 报错：无法访问private成员

	p1.func(); 
	p1.showPerson(); // 可以访问，public权限
	system("pause");

	return 0;
}