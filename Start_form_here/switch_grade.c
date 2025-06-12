#include <stdio.h>

int main()
{
    int num;
    char grade;
    scanf("%d", &num);

    switch (num)
    {
    case 80:
        grade = 'A';
        break;
    case 70:
        grade = 'B';
        break;
    case 60:
        grade = 'C';
        break;
    case 50:
        grade = 'D';
        break;
    case 40:
        grade = 'E';
        break;
    default:
        grade = 'F';
    }
    printf("%c", grade);
}

