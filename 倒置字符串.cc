//#include<iostream>
//#include<string>
//using namespace std;
//
//int main(){
//	string s;
//	getline(cin, s);
//	
//	//1���ȷ�ת��������
//	reverse(s.begin(), s.end());
//	
//	//2���ٷֱ�ת����
//	auto start = s.begin();
//	while (start != s.end()){
//		auto end = start;
//		//�����ո񣬼�����ת��һ������
//		while (end != s.end() && *end != ' ')
//			end++;
//		reverse(start, end);
//
//
//		if (end != s.end())
//			start = end + 1;
//		else
//			start = end;
//	}
//	cout << s << endl;
//
//	getchar(); getchar();
//	return 0;
//}