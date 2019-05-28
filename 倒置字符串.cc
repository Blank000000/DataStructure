//#include<iostream>
//#include<string>
//using namespace std;
//
//int main(){
//	string s;
//	getline(cin, s);
//	
//	//1，先反转整个句子
//	reverse(s.begin(), s.end());
//	
//	//2，再分别翻转单词
//	auto start = s.begin();
//	while (start != s.end()){
//		auto end = start;
//		//遇到空格，继续翻转下一个单词
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