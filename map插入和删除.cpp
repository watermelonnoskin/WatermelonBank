#include<iostream>
using namespace std;
#include<map>
void printmap03(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key=" << (*it).first << " value=" << (*it).second << endl;	//Ҳ����д�� (*it)->first
	}
	cout << endl;
}
void test03()
{
	map<int, int>m;

	//����
	//��һ��
	m.insert(pair<int, int>(1, 10));
	//�ڶ���
	m.insert(make_pair(2, 20));
	//������
	m.insert(map<int, int>::value_type(3, 30));
	//������
	m[4] = 40;								//���Ƽ�
	//[]��������룬��������keyȥ����value
	//cout << m[5] << endl;					//���Ƽ���ԭ��
	printmap03(m);

	//ɾ��
	m.erase(m.begin());
	printmap03(m);
	m.erase(3);			//��keyΪ3������ɾ��
	printmap03(m);

	//���
	cout << "���" << endl;
	//m.erase(m.begin(), m.end());
	m.clear();
	printmap03(m);
	cout << "�������" << endl;
}
int main03()
{
	test03();
	system("pause");
	return 0;
}