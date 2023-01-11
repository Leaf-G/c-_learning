#include <iostream>

using namespace std;

int main()
{
    const char *str1 = "asq,";
    int e = strtol(str1, nullptr, 10);
    cout << e << endl;
    // int d = stoi(str1); // 报异常
    string str2 = "12312";
    int c = stoi(str2); // ok
    cout << c << endl;
}