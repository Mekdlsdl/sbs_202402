#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));

    int num1, num2, num3, num4;

    cout << "숫자 4개를 차례대로 입력하세요.\n";
    cin >> num1 >> num2 >> num3 >> num4;

    int rnum = rand() % (num2 - num1 + 1) + num1;

    cout << "랜덤 숫자 : " << rnum << "\n";
    cout << ( rnum - num3 ) * num4;
}