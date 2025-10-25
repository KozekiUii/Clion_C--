#include <iostream>
using namespace std;

// 全局变量
int g_a = 10;
int g_b = 10;

// 全局常量
const int c_g_a = 10;
const int c_g_b = 10;

int main() {

    // 局部变量
    int a = 10;
    int b = 10;

    // 打印地址（以指针形式输出，避免把指针转为 int）
    cout << "局部变量a地址为： " << static_cast<const void*>(&a) << endl;
    cout << "局部变量b地址为： " << static_cast<const void*>(&b) << endl;

    cout << "全局变量g_a地址为： " << static_cast<const void*>(&g_a) << endl;
    cout << "全局变量g_b地址为： " << static_cast<const void*>(&g_b) << endl;

    // 静态变量
    static int s_a = 10;
    static int s_b = 10;

    cout << "静态变量s_a地址为： " << static_cast<const void*>(&s_a) << endl;
    cout << "静态变量s_b地址为： " << static_cast<const void*>(&s_b) << endl;

    cout << "字符串常量地址为： " << static_cast<const void*>("hello world") << endl;
    cout << "字符串常量地址为： " << static_cast<const void*>("hello world1") << endl;

    cout << "全局常量c_g_a地址为： " << static_cast<const void*>(&c_g_a) << endl;
    cout << "全局常量c_g_b地址为： " << static_cast<const void*>(&c_g_b) << endl;

    const int c_l_a = 10;
    const int c_l_b = 10;
    cout << "局部常量c_l_a地址为： " << static_cast<const void*>(&c_l_a) << endl;
    cout << "局部常量c_l_b地址为： " << static_cast<const void*>(&c_l_b) << endl;

    system("pause");
    return 0;
}
