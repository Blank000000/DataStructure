#include<stdio.h>
#include<assert.h>
#include<windows.h>
#include"SeqList.h"


void TestSeqList1(){
	SeqList seqlist;
	//SeqList* seqlist = SeqListInit();
	SeqListInit(&seqlist, 100);//要改变地址里的值，所以要传地址
	//尾插
	PushBack(&seqlist, 0);
	PushBack(&seqlist, 1);
	PushBack(&seqlist, 2);
	PushBack(&seqlist, 3);
	PushBack(&seqlist, 4);
	


	//尾删
	PopBack(&seqlist);

	////头插
	PushHand(&seqlist, 20);
	//头删
	PopHand(&seqlist);
	//改
	SeqListChange(&seqlist, 0, 30);
	//查
	//SeqListFind(&seqlist,2);
	//销毁
	SeqListDestroy(&seqlist);
	Print(&seqlist);
}
int main(){
	TestSeqList1();

	system("pause");
	return 0;
}
