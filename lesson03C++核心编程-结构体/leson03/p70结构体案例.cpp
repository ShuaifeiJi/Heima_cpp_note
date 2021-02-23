/*
����������
ѧУ������������Ŀ��ÿ����ʦ��5��ѧ��
�ܹ���3����ʦ���������£�
���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�
����ʦ������һ�����5��ѧ����������Ϊ��Ա

ѧ���ĳ�Ա�����������Է�����

����������3����ʦ��

ͨ��������ÿ����ʦ��������ѧ����ֵ

���մ�ӡ����ʦ�����Լ���ʦ������ѧ������
*/

#include <iostream>
#include <string>
using namespace std;
#include <ctime>

// ѧ���ṹ�嶨��
struct Student {
	// ѧ������
	string sName;
	// ѧ������
	int score;
};


// ��ʦ�ṹ��Ķ���
struct Teacher {
	// ����
	string tName;
	// ѧ������ (�ɽṹ����ɵ�����)
	struct Student sArray[5];
};

// ��������ʦ��ֵ�ĺ���
void allocateSpace(struct Teacher tArray[], int len)  // ��������գ� ��һ��д������ָ�����
{
	// С����
	string nameSeed = "ABCDE";
	// ���ѭ��������ʦ��ֵ
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];
		
		// ͨ��ѭ����ÿ����ʦ����ѧ����ֵ
		for (int j = 0; j < 5; j++) 
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];

			// rand��������0������������ ����
			// % 61�����0~60�������
			int random = rand() % 61 + 40; // 40~99
			tArray[i].sArray[j].score = random; // ȫ����88��
		}
		
	}
};

// ��ӡ������Ϣ
void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "teacher name��" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tstudent name: " << tArray[i].sArray[j].sName << endl;
			cout << "\tstudent score: " << tArray[i].sArray[j].score << endl;
		}
	}
};


int main70() {

	// ��������ӣ�����ϵͳ��ǰʱ������������ȷ���������
	srand((unsigned int)time(NULL));


	// 1������3����ʦ������
	struct Teacher tArray[3];

	// 1��ͨ��������������ʦ����Ϣ��ֵ�����Ҹ���ʦ����ѧ����Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray,len);

	// 1����ӡ������ʦ��������ѧ������Ϣ
	printInfo(tArray, len);

	system("pause");
	return 0;
}