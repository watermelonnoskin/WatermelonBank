#include<iostream>
using namespace std;
#include<map>
void printmap04(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key=" << (*it).first << " value=" << (*it).second << endl;	//Ҳ����д�� (*it)->first
	}
	cout << endl;
}
void test04()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(3, 40));

	//����
	map<int, int>::iterator pos = m.find(2);
	if (pos != m.end())
	{
		cout << "�鵽��Ԫ��key=" << (*pos).first << " value=" << (*pos).second << endl;
	}
	else
	{
		cout << "û�в��ҵ�Ԫ��" << endl;
	}

	//ͳ��
	//map����������ظ�key��Ԫ�أ�countͳ�ƽ����1��0��
	//multimap��countͳ�ƿ��ܴ���1
	int num = m.count(3);
	cout << "num=" << num << endl; 
}
int main04()
{
	test04();
	system("pause");
	return 0;
}