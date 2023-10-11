#include<iostream>
using namespace std;
#include<map>
void printmap01(map<int,int>&m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key=" << (*it).first << " value=" << (*it).second << endl;	//Ҳ����д�� (*it)->first
	}
	cout << endl;
}
void test01()
{
	//����map����
	map<int, int>m1;
	
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(3, 30));	//���Զ���С��������
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(4, 40));

	printmap01(m1);

	//��������
	map<int, int>m2(m1);
	printmap01(m2);

	//��ֵ����
	map<int, int>m3;
	m3 = m2;
	printmap01(m3);
}
int main01()
{
	test01();
	system("pause");
	return 0;
}