#include<stdio.h>
#include<assert.h>
#include<windows.h>
#include"SeqList.h"


void TestSeqList1(){
	SeqList seqlist;
	//SeqList* seqlist = SeqListInit();
	SeqListInit(&seqlist, 100);//Ҫ�ı��ַ���ֵ������Ҫ����ַ
	//β��
	PushBack(&seqlist, 0);
	PushBack(&seqlist, 1);
	PushBack(&seqlist, 2);
	PushBack(&seqlist, 3);
	PushBack(&seqlist, 4);
	


	//βɾ
	PopBack(&seqlist);

	////ͷ��
	PushHand(&seqlist, 20);
	//ͷɾ
	PopHand(&seqlist);
	//��
	SeqListChange(&seqlist, 0, 30);
	//��
	//SeqListFind(&seqlist,2);
	//����
	SeqListDestroy(&seqlist);
	Print(&seqlist);
}
int main(){
	TestSeqList1();

	system("pause");
	return 0;
}
