#include <iostream>
using namespace std;
#include <string>

class Building; // �ȸ��߱������������

// ������Ԫ
class GoodGay 
{
public:
	GoodGay(); // ���캯����������ʵ�֣� ������GoodGay�Ĺ��캯����

	void visit(); // �ιۺ���������Building�е����ԣ��������ԡ�˽������
	Building * building; // ʵ����ָ��
};

class Building 
{
	// GoodGay���Ǳ���ĺ����ѣ����Է��ʱ����е�˽�г�Ա
	friend class GoodGay;
public:
	Building();

public:
	string m_SittingRoom; // ����

private:
	string m_BedRoom; // ����
};

// ����д��Ա����
Building::Building() 
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

// ����д��Ա����
GoodGay::GoodGay() 
{
	// �������������
	building = new Building; // �ڶ�������һ������newʲô�������ͣ�
	// �ͷ���ʲô�������͵�ָ��
	// ������Buildingʵ����������Buildingʵ����ָ��
	// ���й���Buildingʵ����ʱ��Ҫ����Building::Building(){}���캯��
}

void GoodGay::visit() 
{
	cout << "�û��������ڷ��ʣ�" << building->m_SittingRoom << endl;

	cout << "�û��������ڷ��ʣ�" << building->m_BedRoom << endl;
}

void test02() 
{
	GoodGay gg;
	gg.visit();
}

int main() 
{
	test02();

	system("pause");
	return 0;
}