#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));

    int num1 = 0;
    int num2 = 0;

    cout << "첫 번째 숫자를 입력하세요 : ";
    cin >> num1;

    cout << "두 번째 숫자를 입력하세요 : ";
    cin >> num2;

    cout << "\n\n두 숫자 사이의 랜덤 숫자 출력\n-> " << ( (rand() % (num2 - num1 + 1)) + num1 );
}