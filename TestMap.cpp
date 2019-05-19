#include<iostream>
#include<map>
#include<string>
#include<windows.h>

using  std::cout;
using  std::endl;
using  std::cin;

void TestMap(){
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

	typedef std::map<std::string, std::string> Dict;
	typedef std::map<std::string, std::string>::iterator DictIter;

	Dict dict;
	dict.insert(std::make_pair("insert", "����"));
	dict.insert(std::make_pair("sort", "����"));
	dict.insert(std::make_pair("debug", "ץ����"));
	dict.insert(std::make_pair("string", "�ַ���"));
	dict.insert(std::make_pair("bug", "�۶���"));
	dict.insert(std::make_pair("map", "ͼ"));
	dict.insert(std::make_pair("left", "���"));

	//std::map<std::string, std::string>::iterator dit = dict.begin();
	//auto dit = dict.begin();
	DictIter dit = dict.begin();
	while (dit != dict.end()){
		//cout << (*dit).first << ":" << (*dit).second << endl;
		cout << dit->first << ":" << dit->second << endl;

		++dit;
	}
	cout << endl;
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

	dict["left"] = "��ߣ�ʣ�������";
	for (const auto& e : dict){
		cout << e.first << ":" << e.second << endl;
	}



}

int main(){
	TestMap();
	system("pause");
	return 0;
}