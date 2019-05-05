#include"SeqList.h"
#include<assert.h>

void SeqListInit(SeqList* seqlist, int capacity){
	//���ж�ָ���Ƿ�Ϊ��
	//if (seqlist == nullptr){}
	assert(seqlist);

	//�ڶ��Ͽ��ٿռ�
	seqlist->array = (SDateType*)malloc(sizeof(SDateType) * capacity);
	//�ж������Ƿ�Ϊ��
	assert(seqlist->array);
	seqlist->size = 0;
	seqlist->capacity = capacity;
}
void SeqListDestroy(SeqList* seqlist){
	assert(seqlist);
	assert(seqlist->array);
	free(seqlist->array);

	seqlist->size = 0;
	seqlist->capacity = 0;
	printf("�ռ��������ͷ�\n");
}

void PushBack(SeqList* seqlist, SDateType val){
	assert(seqlist);
	assert(seqlist->array);
	seqlist->array[seqlist->size] = val;
	seqlist->size++;
}
void PopBack(SeqList* seqlist){
	assert(seqlist);
	assert(seqlist->array);
	assert(seqlist->size > 0);
	seqlist->size--;
}
void PushHand(SeqList* seqlist, SDateType val){
	assert(seqlist);
	assert(seqlist->array);
	seqlist->size++;
	for (int i = seqlist->size; i > 0; i--){
		seqlist->array[i] = seqlist->array[i - 1];
	}
	seqlist->array[0] = val;
}
void PopHand(SeqList* seqlist){
	assert(seqlist);
	assert(seqlist->array);
	assert(seqlist->size > 0);
	//for (int i = 0; i < seqlist->size - 1; i++){
	    //seqlist->array[i] = seqlist->array[i + 1];
	//}
	for (int i = 1; i < seqlist->size; i++){
		seqlist->array[i - 1] = seqlist->array[i];
	}
	seqlist->size--;
}

void SeqListChange(SeqList* seqlist, SDateType n, SDateType val){
	assert(seqlist);
	assert(seqlist->array);
	assert(seqlist->size > 0);
	seqlist->array[n] = val;

}

int SeqListFind(SeqList* seqlist, SDateType val){
	assert(seqlist);
	assert(seqlist->array);
	assert(seqlist->size > 0);
	for (int i = 0; i < seqlist->size; i++){
		if (seqlist->array[i] == val){
			printf("%d\n", i);
		}
	}
	return -1;
}

void Print(SeqList* seqlist){
	for (int i = 0; i <seqlist->size; i++){
		printf("%d ", seqlist->array[i]);
	}
	printf("\n");
}