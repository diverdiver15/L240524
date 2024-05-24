/*
1.1~10까지 숫자를 동적을 할당해서 배열에 넣고 
1. 입력받은 숫자를 임의 위치에 추가해서 배열 크기를 늘리고 
2. 출력
*/
#include <iostream>
using namespace std;

int main()
{
	int Size = 10;
	int* Numbers = new int[Size];

	for (int i = 0; i < Size; ++i)
	{
		Numbers[i] = i + 1;
	}

	int inputNumber;
	cout << " 추가할 숫자 입력 : ";
	cin >> inputNumber;
    int* Temp = new int[Size + 1]; 

    
    int position = rand() % (Size + 1);

    
    for (int i = 0, j = 0; i < Size + 1; ++i) {
        if (i == position) {
            Temp[i] = inputNumber; 
        }
        else {
            Temp[i] = Numbers[j]; 
            ++j;
        }
    }

    
    delete[] Numbers;
    Numbers = Temp;

    
    cout << "업데이트된 배열: ";
    for (int i = 0; i < Size + 1; ++i) {
        cout << Numbers[i] << " ";
    }
    cout << endl;

    
    delete[] Numbers;

    return 0;
}