#include <iostream>

using namespace std;

int main()
{
    // 首先atoi和strtol都是c里面的函数，他们都可以将字符串转为int，它们的参数都是const char*，因此在用string时，必须调c_str()方法将其转为char*的字符串。
    string str1 = "asq,";
    string str3 = "3276868343221";
    char *pend;
    int e = strtol(str1.c_str(), &pend, 10);
    cout << e << endl;
    cout << "erro:" << pend << endl;
    int f = atoi(str3.c_str());
    cout << f << endl;
    int d = stoi(str3); // 报异常
    cout << d << endl;
    string str2 = "12312";
    int c = stoi(str2); // ok
    cout << c << endl;
}