// ConsoleApplication1.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include "iostream"
#include "stdlib.h"

using namespace std;

int main(void)
{
    int r = 3;
    const float pi = 3.1416;
    float area = pi*r*r;
    cout << "radius is" << r << "The area of the circle is" << area << "\n";
    system("pause");
    return 0;
}

