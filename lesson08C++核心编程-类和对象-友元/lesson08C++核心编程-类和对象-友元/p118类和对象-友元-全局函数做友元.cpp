/*
��Ԫ
�������ѵ���˼��

	�������п�����Public������������ң�Private��
	�����������Ŀ��˶����Խ�ȥ���������������˽�еģ�Ҳ����˵ֻ�����ܽ�ȥ
	�����أ���Ҳ����������ĺù��ۺû��ѽ�ȥ

	�ڳ������Щ˽�����ԣ�Ҳ�������������һЩ������������з��ʣ�����Ҫ�õ���Ԫ�ļ���

	��Ԫ��Ŀ�ľ�����һ������������ ������һ�����е�˽�г�Ա

	��Ԫ�Ĺؼ���Ϊfriend
*/

/*
��Ԫ������ʵ��
	ȫ�ֺ�������Ԫ
	������Ԫ
	��Ա��������Ԫ
*/

#include <iostream>
using namespace std;
#include <string>

// Building��
class Building 
{
	// ��Ԫ�����Է���Building���е�˽�г�Ա
	friend void goodGay(Building * building);
public:
	Building() 
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}// ���캯��
public:
	string m_SittingRoom; // ����

private:
	string m_BedRoom; // ����
};

void goodGay(Building * building) //ָ������� ����
{
	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_BedRoom << endl;
	// ������Ϊ˽�������������Ƿ��ʲ�����
	// �����м�����Ԫ�󣬾Ͳ�������
}

void test01() 
{
	Building building;
	goodGay(&building); // ��������ַ
}

int main() 
{
	test01();
	system("pause");
	
	return 0;
}
