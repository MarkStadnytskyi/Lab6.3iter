#include <iostream>
#include <iomanip>
#include <time.h>
#include <Windows.h>

using namespace std;

void create(int* t, const int n, const int min, const int max)
{
    for (int i = 0; i < n; i++)
        t[i] = min + rand() % (max - min + 1);
}

void modify(int* t, const int n)
{
    for (int i = 0; i < n; i++)
        if (t[i] % 2 != 0)
            t[i] = 0;


}

void print(int* t, const int n)
{
    for (int i = 0; i < n; i++)
        cout << " " << t[i] << "; ";
    cout << endl;
}

int sum(int* t, const int n)
{
    int S = 0;
    for (int i = 0; i < n; i++)
        if (t[i] % 2 == 0)
            S += t[i];
    return S;
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int n = 25;
    int t[n];
    int min = -11;
    int max = 13;
    create(t, n, min, max);
    cout << "Масив із рандомних чисел:";
    print(t, n);
    cout << "Модифікований масив: ";
    modify(t, n);
    print(t, n);
    cout << "Сума елементів масиву: " << sum(t, n) << endl;


    return 0;
}