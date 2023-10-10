#include<iostream>
using namespace std;
#include<list>
void printlist04(const list<int> l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test04()
{
	list<int>l;;

	//β��
	cout << "����" << endl;
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);
	//ͷ��
	l.push_front(100);
	l.push_front(200);
	l.push_front(300);
	//300 200 100 10 20 30
	printlist04(l);

	//βɾ
	cout << "ɾ��" << endl;
	l.pop_back();
	//300 200 100 10 20 
	printlist04(l);
	//ͷɾ
	l.pop_front();
	//200 100 10 20 
	printlist04(l);

	//����
	cout << "����" << endl;
	l.insert(l.begin(), 1000);
	//1000 200 100 10 20
	printlist04(l);
	list<int>::iterator it = l.begin();
	l.insert(++it, 2000);
	//1000 2000 200 100 10 20
	printlist04(l);

	//ɾ��
	cout << "ɾ��" << endl;
	it = l.begin();
	l.erase(it);
	//2000 200 100 10 20
	printlist04(l);
	//	������ɶ���	l.erase(++it);
	//2000 100 10 20
	//printlist04(l);

	//�Ƴ�
	cout << "�Ƴ�" << endl;
	l.push_back(10000);
	//2000 200 100 10 20 10000
	printlist04(l);
	l.remove(100);
	//2000 200 10 20 10000
	printlist04(l);

	l.push_back(10000);
	l.push_back(10000);
	l.push_back(10000);
	//2000 200 100 10 20 10000 10000 10000
	printlist04(l);
	l.remove(10000);
	//2000 200 100 10 20
	printlist04(l);

	//���
	cout << "���" << endl;
	printlist04(l);
	l.clear();
	printlist04(l);
	cout << "������������" << endl;
}
int main04()
{
	test04();
	system("pause");
	return 0;
}