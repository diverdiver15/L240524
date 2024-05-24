/*
1.1~10까지 숫자를 동적을 할당해서 배열에 넣고 
2. 입력받은 숫자를 임의 위치에 추가해서 배열 크기를 늘리고 
3. 출력
*/
#include <iostream>
using namespace std;
//1.1~10까지 숫자를 동적을 할당해서 배열에 넣고

int main()
{
	int Size = 10;
	int* Numbers = new int[Size];

	for (int i = 0; i < Size; ++i)
	{
		Numbers[i] = i + 1;
	}

    int position = rand() % (Size + 1);//임의위치

	int inputNumber;
	cout << " 추가할 숫자 입력해주세용 : "; //입력하기 
	cin >> inputNumber;
    
    int* Temp = new int[Size + 1]; 
//배열 크기 늘리기
    for (int i = 0, j = 0; i < Size + 1; ++i) {
        if (i == position) {
            Temp[i] = inputNumber; 
        }
        else {
            Temp[i] = Numbers[j]; 
            ++j;
        }
    }

    //기존 배열 없애고 새배열
    delete[] Numbers;
    Numbers = Temp;

    
    cout << "업데이트된 배열입니당 : ";
    for (int i = 0; i < Size + 1; ++i) {
        cout << Numbers[i] << " ";
    }
    cout << endl;

    
    delete[] Numbers;

    return 0;
}