#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


int main(){
	string str1, str2;
	//������cin���մ��ո���ַ�����cin�����ո�ͽ�����
	//�������ʹ��gitline()�����ַ�
	/*cin >> str1;
	cin >> str2;*/
	getline(cin, str1);
	getline(cin, str2);
	
	//ʹ�ù�ϣӳ��˼����ͳ��str2 ���ַ����ֵĸ���
	int hashtable[256] = { 0 };
	for (size_t i = 0; i < str2.size(); ++i){
		hashtable[str2[i]]++;
	}

	//����str1��str1[i] ӳ�� hsahtable �ж�Ӧλ��Ϊ0
	//���ʾ����ַ���str2��û�г��ֹ������� += �� ret ��
	//��ò�Ҫ�� str1.erases(i),�߱�����erase���׳���
	string ret;
	for (size_t i = 0; i < str1.size(); ++i){
		if (hashtable[str1[i]] == 0)
			ret += str1[i];
	}
	cout << ret << endl;


	getchar(); getchar();
	return 0;
}