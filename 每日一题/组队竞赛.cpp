#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		vector<int> a;
		a.resize(3 * n);
		for (int i = 0; i < 3 * n; i++){
			cin >> a[i];
		}

		//����������ݽ�������(��С����)
		std::sort(a.begin(), a.end());

		//(Ȼ����з��飺����������+��С��һ��������������)-->��ʵ���Բ��÷�
		//ÿ���ƽ��ֵ�������֮��ѭ��ȡ�����arr[3*n-2*m],ѭ������m=n
		//1 1 2 8 9 3 2 8 4 --> 1 1 2 [2] 3 [4] 8 [8] 9 --> 8+4+2
		int sum = 0;
		for (int m = 1; m <= n; m++){
			sum += a[(3 * n) - (2 * m)];
		}
		cout << sum;
	}

	getchar(); getchar();
	return 0;
}