/*
��װ�������
�������ʱ�����԰����Ժ���Ϊ���ڲ�ͬ��Ȩ���£����Կ���

����Ȩ�������֣�
	public		����Ȩ��	��Ա	���ڿ��Է���	������Է���
	protected	����Ȩ��	��Ա	���ڿ��Է���	���ⲻ���Է���
					�����׵ı���Ȩ�ޣ����ӿ��Է��ʣ����縸�׵ĳ���
	private		˽��Ȩ��	��Ա	���ڿ��Է���	���ⲻ���Է���
					�����Ӳ��ܷ��� ˽��Ȩ�ޣ����縸�׵����п����룩
*/

#include <iostream>
using namespace std;
#include <string>

class Person
{
public:
	// ����Ȩ��
	string m_Name; // ����

protected:
	// ����Ȩ��
	string m_Car; // ����

private:
	// ˽��Ȩ��
	int m_Password; // ���п�����

public:
	void func() 
	{
		m_Name = "����";
		m_Car = "������";
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
	//ʵ�����������
	Person p1;

	p1.m_Name = "����";
	// p1.m_Car = "����"; �����޷�����protected��Ա
	//p1.m_Password = 222222; �����޷�����private��Ա

	p1.func(); 
	p1.showPerson(); // ���Է��ʣ�publicȨ��
	system("pause");

	return 0;
}