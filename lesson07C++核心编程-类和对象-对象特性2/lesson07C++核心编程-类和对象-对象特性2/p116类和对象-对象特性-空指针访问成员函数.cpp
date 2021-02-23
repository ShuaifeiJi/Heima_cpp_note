#include <iostream>
using namespace std;

class Person 
{
public: //公共权限，才能访问
	void showClassName() 
	{
		cout << "this is Person class" << endl;
	}

	void showPersonAge() 
	{
		if (this == NULL) 
		{
			return;
		}
		cout << "person age =" << m_Age << endl;
		// m_Age默认就是 this->m_Age，但是本例中， this是空指针，没有指向确切的m_Age
		// 即没有明确的对象，无法访问m_Age
	}

	int m_Age;
};

void test01() 
{
	Person * p = NULL;

	p->showClassName();

	p->showPersonAge(); // 当m_Age没有初始值的时候，会崩
	// 因为那块内存 为空
}

int main116() {

	test01();

	system("pause");
	return 0;
}