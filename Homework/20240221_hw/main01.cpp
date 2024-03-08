#include <iostream>

using namespace std;

int main() 
{

    printf("1. 별찍기 4종\n");
    printf("- 1종\n");

    for (int i = 1; i < 6; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n- 2종\n");

    for (int i = 1; i < 6; i++) 
    {
        for (int j = 0; j < 6 - i; j++) 
        {
            printf(" ");
        }

        for (int k = 0; k < i; k++) 
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n- 3종\n");

    for (int i = 1; i < 6; i++) 
    {
        for (int j = 0; j < 6 - i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n- 4종\n");

    for (int i = 1; i < 6; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            printf(" ");
        }

        for (int k = 0; k < 6 - i; k++) 
        {
            printf("*");
        }
        printf("\n");
    }
}