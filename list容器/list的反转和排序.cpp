#include<iostream>
using namespace std;
#include<list>
void printlist06(const list<int> l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//������
bool mycompare(int v1,int v2)
{
	//����  ��һ���� > �ڶ�����
	return v1 > v2;
}
//��ת
void test06()
{
	list<int>l1;
	l1.push_back(20);
	l1.push_back(10);
	l1.push_back(50);
	l1.push_back(40);
	l1.push_back(30);
	cout << "��תǰ" << endl;
	printlist06(l1);

	//��ת
	l1.reverse();
	cout << "��ת��" << endl;
	printlist06(l1);
}

//����
void test006()
{
	list<int>l1;
	l1.push_back(20);
	l1.push_back(10);
	l1.push_back(50);
	l1.push_back(40);
	l1.push_back(30);
	cout << "����ǰ" << endl;
	printlist06(l1);
	//������sort(l1.begin(),l1.end())
	//���в�֧��������ʵ��������������������ñ�׼�㷨
	//��֧��������ʵ��������������ڲ����ṩһЩ��Ӧ���㷨
	l1.sort();		//Ĭ�������С���� ��������
	cout << "���������" << endl;
	printlist06(l1);
	l1.sort(mycompare);
	cout << "����󣨽���" << endl;
	printlist06(l1);
}
int main06()
{
	test06();
	test006();
	system("pause");
	return 0;
}