#include <iostream>

void f0()
{
    char str[] = "f0f0f0f0f0f0f0f0";
}

void f1()
{
    char str[] = "f1f1f1f1f1f1f1f1";
}

void f2()
{
    char str[] = "f2f2f2f2f2f2f2f2";
}

void f3()
{
    char str[] = "f3f3f3f3f3f3f3f3";
    f2();
}

int main()
{
    char str[] = "mainmainmainmain";
    f0();
    f1();
    f3();

    std::cout << "Hello World!\n";
}
