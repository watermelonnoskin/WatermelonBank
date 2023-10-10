#include<iostream>
using namespace std;
#include<list>
//list�������캯��

void printlist01(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	//����list���� Ĭ�Ϲ���
	list<int>L1;		
	//�������
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	//��������
	cout << "Ĭ�Ϲ��� ";
	printlist01(L1);
	cout << endl;

	//����list���� ���䷽ʽ����
	list<int>L2(L1.begin(), L1.end());
	//��������
	cout << "���䷽ʽ���� ";
	printlist01(L2);
	cout << endl;

	//����list���� ��������
	list<int>L3(L1);
	//��������
	cout << "�������� ";
	printlist01(L3);
	cout << endl;

	//n��elem
	list<int>L4(10, 1000);
	//��������
	cout << "n��elem���� ";
	printlist01(L4);
	cout << endl;

}
int main01()
{
	test01();
	system("pause");
	return 0;
}