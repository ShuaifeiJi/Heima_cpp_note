// �˵�����
/*
���裺
1����װ������ʾ�ý��棬��void showMenu()
2����main�����е��÷�װ�õĺ���
*/

#include <iostream>
using namespace std;
#include <string>

#define MAX 1000 //��������� д��ǰ�ߣ�����ά��


// ��1�����˵�����
void showMenu()
{
	cout << "*********�氲ͨѶ¼********" << endl;
	cout << "****	1�������ϵ��	****" << endl;
	cout << "****	2����ʾ��ϵ��	****" << endl;
	cout << "****	3��ɾ����ϵ��	****" << endl;
	cout << "****	4��������ϵ��	****" << endl;
	cout << "****	5���޸���ϵ��	****" << endl;
	cout << "****	6�������ϵ��	****" << endl;
	cout << "****	0���˳�ͨѶ¼	****" << endl;
	cout << "***************************" << endl;
}

// ��2�����˳����ܣ�ʹ��switch��䣬��ܹ�����������̣�
// ��3���������ϵ�˹��ܣ�������1000�ˣ�
//	����ϵ����Ϣ������ �������Ա����䡢��ϵ�绰����ͥסַ��
/*
���裺
	�����ϵ�˽ṹ�壨�����������Ա����䡢��ϵ�绰����ͥסַ�ȣ�
	���ͨѶ¼�ṹ�壨�������1000����ϵ����Ϣ��
	main�����д���ͨѶ¼
	��װ�����ϵ�˺���
	���������ϵ�˹���
*/
// ��4������ʾ��ϵ��
/*
������������ʾͨѶ¼��������ϵ����Ϣ
���裺
	��װ��ʾ��ϵ�˺���
	������ʾ��ϵ�˹���
*/
// ��5����ɾ����ϵ�� ����������ɾ����
/*
���裺
	��װ�����ϵ���Ƿ����
	��װɾ����ϵ�˺���
	����ɾ����ϵ�˹���
*/

// ��6����������ϵ��
/*
�������������������鿴ָ����ϵ����Ϣ
���裺
	��װ������ϵ�˺���
	���Բ���ָ����ϵ��
*/

// ��7�����������������޸�ָ����ϵ��
/*
���裺
	��װ�޸���ϵ�˺���
	�����޸���ϵ�˹���
*/

// ��8�������ͨѶ¼��������Ϣ�������ϵ�ˣ�
/*
���裺
	��װ�����ϵ�˺���
	���������ϵ��
*/

// ��ϵ�˽ṹ��
struct Person
{
	string m_Name;	// ����
	int m_Sex;   // �Ա�
	int m_Age;      // ����
	string m_Phone; // �绰
	string m_Addr;  // ��ַ
};


// ͨѶ¼�ṹ��
struct Addressbooks
{
	struct Person personArray[MAX]; //ͨѶ¼�б������ϵ������
	int m_Size; // ͨѶ¼�е�ǰ��¼����Ա����
};

// �����ϵ��
void addPerson(Addressbooks * adbs) 
{
	// �ж�ͨѶ¼�Ƿ�������������˾Ͳ������
	if (adbs->m_Size == MAX) 
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	else
	{
		// �����ϵ��

		// ����
		string name;
		cout << "����������:" << endl;
		cin >> name;
		adbs->personArray[adbs->m_Size].m_Name = name;
		cout << "������:" << adbs->personArray[adbs->m_Size].m_Name << endl;

		// �Ա�
		int sex = 0;
		cout << "�������Ա�" << endl;
		cout << "1 --- ��" << endl;
		cout << "2--- Ů" << endl;

		while (true)
		{
			// ����������1����2��������˳�ѭ��
			// ����������󣬾���������
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				adbs->personArray[adbs->m_Size].m_Sex = sex;
				break;
			}
			cout << "����������������������:" << endl;
		}
		cout << "�Ա��ǣ�" << adbs->personArray[adbs->m_Size].m_Sex << endl;
		
		// ����
		cout << "���������䣺 " << endl;
		int age = 0;
		cin >> age;
		adbs->personArray[adbs->m_Size].m_Age = age;
		cout << "������������ǣ�" << adbs->personArray[adbs->m_Size].m_Age <<endl;

		// �绰
		cout << "��������ϵ�绰�� " << endl;
		string phone;
		cin >> phone;
		adbs->personArray[adbs->m_Size].m_Phone = phone;
		cout << "��������ֻ����ǣ�" << adbs->personArray[adbs->m_Size].m_Phone << endl;

		// סַ
		cout << "�������ͥסַ" << endl;
		string address;
		cin >> address;
		adbs->personArray[adbs->m_Size].m_Addr = address;
		cout << "������ĵ�ַ�ǣ�" << adbs->personArray[adbs->m_Size].m_Addr << endl;

		// ����ͨѶ¼����
		adbs->m_Size++;

		cout << "��ӳɹ�" << endl;

		system("pause"); // �밴���������
		system("cls"); // ��������
	}
}

// ��ʾ��ϵ�˺����������ǰͨѶ¼��û����Ա������ʾ��¼Ϊ��
//				��������0������ʾͨѶ¼����Ϣ
void showPerson(struct Addressbooks * adbs)
{
	// �ж�ͨѶ¼�������Ƿ�Ϊ0�����Ϊ0����ʾ��¼Ϊ��
	// �����Ϊ0����ʾ��¼����ϵ����Ϣ
	if (adbs->m_Size == 0) 
	{
		cout << "��ǰ�ļ�¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < adbs->m_Size; i++)
		{
			cout << "������	" << adbs->personArray[i].m_Name << "\t";
			cout << "�Ա�	" << (adbs->personArray[i].m_Sex == 1 ?"��" : "Ů")<< "\t";  // ��Ŀ������������������ȼ�
			cout << "���䣺	" << adbs->personArray[i].m_Age << "\t";
			cout << "�绰�� " << adbs->personArray[i].m_Phone << "\t";
			cout << "��ַ��	" << adbs->personArray[i].m_Addr << endl;
			//cout << "\n";
		}
	}
	system("pause"); // �����������
	system("cls"); // ����
}

// ��װ�����ϵ���Ƿ����
/* ���˼·��
	�ж���ϵ���Ƿ���ڣ������ھ�ɾ�����������ھ���ʾ�û�û��Ҫɾ������ϵ��
	�����ϵ�˷�װ�������У�
						������ڣ��ͷ�����ϵ����ͨѶ¼�е�λ�ã�������ţ�
						��������ڣ��ͷ���-1
*/
int isExist(Addressbooks * adbs, string name) 
{
	for (int i = 0; i < adbs->m_Size; i++)
	{
		if (adbs->personArray[i].m_Name == name)
		{
			//cout << "��ϵ�˴��ڣ�λ�ã�"<< i << endl;
			return i; // �����±���
		}
	}
	return -1; //����û�ҵ����ͷ���-1
}

// ɾ��ָ����ϵ��
void deletePerson(Addressbooks * adbs) 
{
	cout << "��������Ҫɾ������ϵ��" << endl;
	
	string name;
	cin >> name;

	// ret == -1 δ�鵽
	// ret != -1 �鵽��
	int ret = isExist(adbs, name);

	if (ret != -1) 
	{
		// ���Ҵ��ˣ�Ҫ����ɾ������
		// Ҫɾ�����ģ������ĺ��������ǰ�ƶ�
		// ������ͨѶ¼�м�¼����Ա������-1�Ĳ���
		for (int i = ret; i < adbs->m_Size; i++) 
		{
			// ����ǰ��
			adbs->personArray[i] = adbs->personArray[i + 1];

		}
		adbs->m_Size--; // ����ͨѶ¼����Ա����
		cout << "ɾ���ɹ�" << endl;
	}
	else 
	{
		cout << "���޴���" << endl;
	}

}
// ������ϵ��
// ʵ��˼·���ж��û�ָ������ϵ���Ƿ���ڣ����������ʾ��Ϣ
//				����������ʾ���޴���
void findPerson(Addressbooks * adbs) 
{
	cout << "������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;
	
	int ret = isExist(adbs, name);
	if (ret != -1) 
	{
		cout << "������ " << adbs->personArray[ret].m_Name << "\t";
		cout << "�Ա� " << adbs->personArray[ret].m_Sex << "\t";
		cout << "���䣺 " << adbs->personArray[ret].m_Age << "\t";
		cout << "�绰�� " << adbs->personArray[ret].m_Phone << "\t";
		cout << "��ַ�� " << adbs->personArray[ret].m_Addr << endl;
	}
	else 
	{
		cout << "���޴���" << endl; 
	}
}

// �޸���ϵ��ʵ��˼·
// ʵ��˼·��
//			�����û��������ϵ�ˣ�������ҳɹ������޸Ĳ���
//			����ʧ������ʾ���޴���
void modifyPerson(Addressbooks * adbs) 
{
	cout << "������Ҫ�޸ĵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;

	int ret = isExist(adbs, name);
	if (ret != -1) 
	{
		//����
		string name;
		cout << "����������" << endl;
		cin >> name;
		adbs->personArray[ret].m_Name = name;
		// �Ա�
		int sex = 0;
		cout << "�������Ա�" << endl;
		cout << "1������" << endl;
		cout << "2����Ů" << endl;
		while (true) 
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				adbs->personArray[ret].m_Sex = sex;
				break;
			}
			else
			{
				cout << "������������������" << endl;
			}
		}
		// ����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		adbs->personArray[ret].m_Age = age;
		// �绰
		cout << "������绰��" << endl;
		string phone;
		cin >> phone;
		adbs->personArray[ret].m_Phone = phone;
		// סַ
		cout << "�������ַ��" << endl;
		string address;
		cin >> address;
		adbs->personArray[ret].m_Addr = address;

		cout << "�޸ĳɹ�" << endl;
	}
	else 
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

/*
�����ϵ��ʵ��˼·��
		ֻ��Ҫ��ͨѶ¼��¼����ϵ��������Ϊ0�����߼���ռ���
		(һ�㶼��ʵ���߼���ռ���)
*/
void cleanPerson(Addressbooks * adbs) 
{
	adbs->m_Size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}


int main() 
{
	int select = 0; // �����û�ѡ������ı���
	// �˵�����
	
	struct Addressbooks adbs; // �����ṹ�����
	adbs.m_Size = 0; // ��ʼ��ͨѶ¼�е�ǰ��Ա����


	while (true) 
	{
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1: // �����ϵ��
			addPerson(&adbs); // �����ַ�����Ըı�ʵ��
			break;
		case 2: // ��ʾ��ϵ��
			showPerson(&adbs);
			break;
		case 3: // ɾ����ϵ��
		//{ // case�ܳ���ʱ����Ҫ����
			//cout << "������ɾ����ϵ�˵�������" << endl;
		//	string name;
		//	cin >> name;

		//	if (isExist(&adbs, name) == -1)
		//	{
		//		cout << "���޴���" << endl;
		//	}
		//	else
		//	{
		//		cout << "�ҵ�����" << endl;
		//	}
		//}
			deletePerson(&adbs);
			system("pause"); // �����������
			system("cls"); // ����
			break;
		case 4: // ������ϵ��
			findPerson(&adbs);
			system("pause"); // �����������
			system("cls"); // ����
			break;
		case 5: // �޸���ϵ��
			modifyPerson(&adbs);
			break;
		case 6: // �����ϵ��
			cleanPerson(&adbs);
			break;
		case 0: // �˳�����
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
	}

	

	}

	system("pause");
	return 0;
}