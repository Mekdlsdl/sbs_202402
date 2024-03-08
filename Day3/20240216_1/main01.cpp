#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));

    printf("1. 0 ~ 30 사이의 랜덤 숫자 출력\n");
    printf("-> %d\n\n", rand() % 31);


    printf("2. random1 변수에 0 ~ 100 사이 랜덤 숫자 넣기\n");
    int random1 = rand() % 101;
    printf("random1 : %d\n\n", random1);


    printf("3. 25 ~ 40 사이의 랜덤 숫자 출력\n");
    printf("-> %d\n\n", rand() % 16 + 25);

    printf("4. random2 변수에 150 ~ 270 사이의 랜덤 숫자 넣기\n");
    int random2 = rand() % 121 + 150;
    printf("random2 : %d\n", random2);
}