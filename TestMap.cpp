#include<iostream>
#include<map>
#include<string>
#include<windows.h>

using  std::cout;
using  std::endl;
using  std::cin;

void TestMap(){
	//�ֵ�
	//std::map<std::string, std::string> dict;
	//dict.insert(std::pair<std::string, std::string>("insert", "����"));
	//dict.insert(std::pair<std::string, std::string>("sort", "����"));
	//dict.insert(std::pair<std::string, std::string>("debug", "ץ����"));
	//dict.insert(std::pair<std::string, std::string>("string", "�ַ���"));
	//dict.insert(std::pair<std::string, std::string>("bug", "�۶���"));
	//dict.insert(std::pair<std::string, std::string>("map", "ͼ"));

	////std::map<std::string, std::string>::iterator dit = dict.begin();
	//auto dit = dict.begin();
	//while (dit != dict.end()){
	//	//cout << (*dit).first << ":" << (*dit).second << endl;
	//	cout << dit->first << ":" << dit->second << endl;

	//	++dit;
	//}
	//cout << endl;

	//typedef std::map<std::string, std::string> Dict;
	//typedef std::map<std::string, std::string>::iterator DictIter;

	//Dict dict;
	//dict.insert(std::make_pair("insert", "����"));
	//dict.insert(std::make_pair("sort", "����"));
	//dict.insert(std::make_pair("debug", "ץ����"));
	//dict.insert(std::make_pair("string", "�ַ���"));
	//dict.insert(std::make_pair("bug", "�۶���"));
	//dict.insert(std::make_pair("map", "ͼ"));
	//dict.insert(std::make_pair("left", "���"));

	////std::map<std::string, std::string>::iterator dit = dict.begin();
	////auto dit = dict.begin();
	//DictIter dit = dict.begin();
	//while (dit != dict.end()){
	//	//cout << (*dit).first << ":" << (*dit).second << endl;
	//	cout << dit->first << ":" << dit->second << endl;

	//	++dit;
	//}
	//cout << endl;
	//for (const auto& e : dict){
	//	cout << e.first << ":" << e.second << endl;
	//}

	//std::string str;
	//while (std::cin >> str){
	//	auto it = dict.find(str);
	//	//DictIter it = dict.find(str);
	//	if (it != dict.end()){
	//		cout << str << "->" << it->second << endl;
	//	}
	//	else{
	//		cout << str << "���ڴʿ���" << endl;
	//	}
	//}

	/*auto it = dict.find("left");
	if (it != dict.end()){
	it->second = "��ߣ�ʣ�������";
	}*/

	//dict["left"] = "��ߣ�ʣ�������";
	//for (const auto& e : dict){
	//	cout << e.first << ":" << e.second << endl;
	//}


	//ͳ�Ƶ��ʳ��ֵĴ���
	std::string StrArray[] = { "sort", "first", "first", "end", "insert" };
	typedef std::map<std::string, int> CountMap;
	typedef std::map<std::string, int> ::iterator CountMapIter;
	CountMap count_map;

	//����1��find + insert ͳ�ƴ���
	//���飬ԭ��ָ��֧�ֵ�������Ҳ��֧�ֻ��ڷ�Χfor
	//operator* �������ݵ�����
	//operator-> �������ݵ�ָ��

	//for (const auto& e : StrArray){
	//	CountMapIter it = count_map.find(e);
	//	if (it != count_map.end()){
	//		//(*it).second++;
	//		it->second++;
	//	}
	//	else{
	//		count_map.insert(make_pair(e, 1));
	//	}
	//}


	//����2��insert ͳ�ƴ���
	//for (const auto& e : StrArray){
	//	//insert����ֵΪpair(iterator��boll)
	//	//auto���ڲ������ͣ��Զ����ݷ���ֵ����
	//	//std::pair<std::map<std::string, int>::iterator, bool> ret = count_map.insert(make_pair(e, 1));
	//	//auto ret = count_map.insert(make_pair(e, 1));
	//	std::pair<CountMapIter, bool> ret = count_map.insert(make_pair(e, 1));
	//	if (ret.second == false){
	//		ret.first->second++;
	//	}
	//}

	////����3��operator[] ͳ�ƴ���
	////operator[]�÷�����д������
	////operator[]������
	////operator[]����ֵ����������Ƿ��صĴ���������value�����ã����Ͳ�ȷ����
	//for (const auto& e : StrArray){
	//	//���ʵ�һ�γ��֣�[]�ȵ�insert�����в��룬
	//	//v����ȱʡֵ��ֵΪ0��������v�ı�����++��Ϊ1��
	//	count_map[e]++;
	//}


	typedef std::map<std::string, std::string> Dict;
	typedef std::map<std::string, std::string>::iterator DictIter;

	Dict dict;
	dict["sort"] = "����";
	dict["left"] = "���";
	dict["bug"] = "����";
	dict["left"] = "ʣ��";
	//ע����������
	cout << dict["set"] << endl;
}


//int main(){
//	TestMap();
//	system("pause");
//	return 0;
//}
