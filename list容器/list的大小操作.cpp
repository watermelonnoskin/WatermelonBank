#include<iostream>
using namespace std;
#include<list>
void printlist03(const list<int> l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test03()
{
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	printlist03(l1);

	//�ж������Ƿ�Ϊ��
	if (l1.empty())		cout << "l1����Ϊ��" << endl;
	else
	{
		cout << "l1������Ϊ��" << endl;
		cout << "l1��Ԫ�ظ���Ϊ:" << l1.size() << endl;
	}
	//����ָ��l1�Ĵ�С
	l1.resize(10,10000);
	printlist03(l1);			//��������10000	
	l1.resize(2);
	printlist03(l1);
}
int main03()
{
	test03();
	system("pause");
	return 0;
}
