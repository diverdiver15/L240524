/*
1.1~10���� ���ڸ� ������ �Ҵ��ؼ� �迭�� �ְ� 
2. �Է¹��� ���ڸ� ���� ��ġ�� �߰��ؼ� �迭 ũ�⸦ �ø��� 
3. ���
*/
#include <iostream>
using namespace std;
//1.1~10���� ���ڸ� ������ �Ҵ��ؼ� �迭�� �ְ�

int main()
{
	int Size = 10;
	int* Numbers = new int[Size];

	for (int i = 0; i < Size; ++i)
	{
		Numbers[i] = i + 1;
	}

    int position = rand() % (Size + 1);//������ġ

	int inputNumber;
	cout << " �߰��� ���� �Է����ּ��� : "; //�Է��ϱ� 
	cin >> inputNumber;
    
    int* Temp = new int[Size + 1]; 
//�迭 ũ�� �ø���
    for (int i = 0, j = 0; i < Size + 1; ++i) {
        if (i == position) {
            Temp[i] = inputNumber; 
        }
        else {
            Temp[i] = Numbers[j]; 
            ++j;
        }
    }

    //���� �迭 ���ְ� ���迭
    delete[] Numbers;
    Numbers = Temp;

    
    cout << "������Ʈ�� �迭�Դϴ� : ";
    for (int i = 0; i < Size + 1; ++i) {
        cout << Numbers[i] << " ";
    }
    cout << endl;

    
    delete[] Numbers;

    return 0;
}