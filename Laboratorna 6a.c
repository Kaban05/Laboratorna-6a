//zavdannya 3
#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int  i = 10;
    float f = 3.14;
    char ch = 'A';
    long LN = 1234567890;

    printf("��� ������������:\n");
    printf("ֳ�� �����: %d\n", i);
    printf("ĳ���� �����: %f\n", f);
    printf("������: %c\n", ch);
    printf("����� ���� �����: %ld\n", LN);

    printf("    \n");

    printf("������������ ������������:\n");
    printf("ֳ�� ����� (����): %+d\n", i); // ������ ����
    printf("ĳ���� ����� (�����������): %e\n", f); // ³���������� � ������ e
    printf("������ (�� ���� �����): %d\n", ch); // ������ ASCII-��� �������
    printf("����� ���� ����� (��������������): %lx\n", LN); // ������������ � �������������� �����

    return 0;
}

//zavdannya 4
#include <stdio.h>
#include <Windows.h>
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    printf("������\t���������\t³������\tس������������\n");

    printf("A\t%d\t\t%o\t\t%x\n", 'A', 'A', 'A');
    printf("B\t%d\t\t%o\t\t%x\n", 'B', 'B', 'B');
    printf("C\t%d\t\t%o\t\t%x\n", 'C', 'C', 'C');
    printf("D\t%d\t\t%o\t\t%x\n", 'D', 'D', 'D');
    printf("E\t%d\t\t%o\t\t%x\n", 'E', 'E', 'E');
    printf("F\t%d\t\t%o\t\t%x\n", 'F', 'F', 'F');
    printf("G\t%d\t\t%o\t\t%x\n", 'G', 'G', 'G');
    printf("H\t%d\t\t%o\t\t%x\n", 'H', 'H', 'H');
    printf("I\t%d\t\t%o\t\t%x\n", 'I', 'I', 'I');
    printf("J\t%d\t\t%o\t\t%x\n", 'J', 'J', 'J');

    return 0;
}

//zavdannya 5
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    char productName1, productName2, productName3, productName4, productName5;
    float productPrice1, productPrice2, productPrice3, productPrice4, productPrice5;
    int productQuantity1, productQuantity2, productQuantity3, productQuantity4, productQuantity5;


    printf("������ ����� ������ 1: ");
    scanf("%s", productName1);
    printf("������ ���� ������ 1: ");
    scanf("%f", &productPrice1);
    printf("������ ������� ������ 1: ");
    scanf("%d", &productQuantity1);

    printf("������ ����� ������ 2: ");
    scanf("%s", productName2);
    printf("������ ���� ������ 2: ");
    scanf("%f", &productPrice2);
    printf("������ ������� ������ 2: ");
    scanf("%d", &productQuantity2);

    printf("������ ����� ������ 3: ");
    scanf("%s", productName3);
    printf("������ ���� ������ 3: ");
    scanf("%f", &productPrice3);
    printf("������ ������� ������ 3: ");
    scanf("%d", &productQuantity3);

    printf("������ ����� ������ 4: ");
    scanf("%s", productName4);
    printf("������ ���� ������ 4: ");
    scanf("%f", &productPrice4);
    printf("������ ������� ������ 4: ");
    scanf("%d", &productQuantity4);

    printf("������ ����� ������ 5: ");
    scanf("%s", productName5);
    printf("������ ���� ������ 5: ");
    scanf("%f", &productPrice5);
    printf("������ ������� ������ 5: ");
    scanf("%d", &productQuantity5);


    float total1 = productPrice1 * productQuantity1;
    float total2 = productPrice2 * productQuantity2;
    float total3 = productPrice3 * productQuantity3;
    float total4 = productPrice4 * productQuantity4;
    float total5 = productPrice5 * productQuantity5;


    float total = total1 + total2 + total3 + total4 + total5;

    printf("--------------------------------------------------\n");
    printf("| %-20s | %-10s | %-10s |\n", "����� ������", "ֳ��", "ʳ������");
    printf("--------------------------------------------------\n");
    printf("| %-20s | %-10.2f | %-10d |\n", productName1, productPrice1, productQuantity1);
    printf("| %-20s | %-10.2f | %-10d |\n", productName2, productPrice2, productQuantity2);
    printf("| %-20s | %-10.2f | %-10d |\n", productName3, productPrice3, productQuantity3);
    printf("| %-20s | %-10.2f | %-10d |\n", productName4, productPrice4, productQuantity4);
    printf("| %-20s | %-10.2f | %-10d |\n", productName5, productPrice5, productQuantity5);
    printf("--------------------------------------------------\n");
    printf("| �������� ����:                                | %-10.2f |\n", total);
    printf("--------------------------------------------------\n");

    return 0;
}

//zavdannya 6
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <Windows.h>
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // ���������� ����� ��� ���������� ������
    float radius;
    const double PI = 3.141592653589793238;

    // ����� ����������� �� �������� ������
    printf("������ ����� �����: ");
    scanf("%f", &radius);

    // ���������� ������� ���� �� ����� �����
    float R = 2 * PI * radius;
    float S = PI * pow(radius, 2);

    // ��������� ����������
    printf("������� ����: %f\n", R);
    printf("����� �����: %f\n", S);

    return 0;
}

//zavdannya 7
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <Windows.h>
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double a, b, c, D;
    printf("������ ����������� a, b � c ����������� �������:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    D = pow(b, 2) - 4 * a * c;
    if (D >= 0) {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        printf("��� ������ �����: x1 = %.2lf � x2 = %.2lf\n", x1, x2);
    }
    else {
        double K1 = -b / (2 * a);
        double K2 = sqrt(-D) / (2 * a);
        printf("D < 0\n");
        printf("��� ����������� �����: x1 = %.2lf + %.2lfi � x2 = %.2lf - %.2lfi\n", K1, K2, K1, K2);
    }

    return 0;
}

//zavdannya 8
#include <stdio.h>

int main() {
    char ch;

    ch = getchar();

    while (ch != '*') {
        putchar(ch);
        ch = getchar();
    }

    // ��������� ��������� �������
    putchar('\a');

    return 0;
}

//zavdannya 9
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#include <math.h>
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double x1 = 1, y1 = 1, x2 = 8, y2 = 7, x3 = -8, y3 = 6, s, p, r, AB, BC, AC;

    //���������� �����
    AB = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    BC = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    AC = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    //����������
    p = (AB + BC + AC) / 2;
    s = sqrt(p * (p - AB) * (p - BC) * (p - AC));
    r = s / p;
    printf("������� ����������: AB=%f , BC=%f , AC=%f \n", AB, BC, AC);
    printf(" ϳ���������= %f\n �����= %f\n ����� ��������� ����= %f\n", p, s, r);
}

//zavdannya 10
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#include <math.h>
int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double a=1000, b=0.0001, res;
	 
	res = (pow(a + b, 3) - pow(a, 3)) / (3 * a * pow(b, 2) + pow(b, 3) + 3 * pow(a, 2) * b);
	printf("���������= %f\n", res);
}