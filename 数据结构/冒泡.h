void Bubblesort(int array[], int size){
	int isSorted;                               //�Ż��㷨
	for (int i = size - 1; i > 0; i--){         //�����������飬�����Ѿ��źõ���
		isSorted = 1;

		//һ��ð�ݹ���
		for (int j = 0; j < size; j++){        //�����/С�������������/ǰ
			if (array[i] > array[i - 1]){
				swap();                       //��������
				isSorted = 0;
			}
			//һ��ð�ݹ��̽���

			if (isSorted == 1)
				break;
		}
	}
}