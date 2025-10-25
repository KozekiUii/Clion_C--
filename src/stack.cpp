//
// Created by Komoribi on 2025/10/23.
//
#include <iostream>
using namespace std;

int* func()
{
    int* a = new int(10);
    // free(a);
    return a;
}

int main() {

    int *p = func();

    cout << *p << endl;
    cout << *p << endl;

    system("pause");

    return 0;
}