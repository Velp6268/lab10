#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    string str;
    cout << "Введите максимальное число символов: " << endl;
    cin >> n;
    cout << "Введите предложение: " << endl;
    cin >> str;
    if (n >= str.size())
    {
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '.') { str.insert(i++, "."); str.insert(i++, "."); }
        }
        cout << str << endl;
    }
    else { cout << "Неверное количество символов" << endl; }
    return 0;
}