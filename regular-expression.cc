#include <iostream>
#include <string.h>
#include <regex>
using namespace std;

int main(int argc, char *argv[]) {
    string str[] = {"https://github.com/nick-quying", "https://github.com/dark-wang", "https://github.com/wick-liu", "nick.quy@qq.com"};
    regex re("https://[\\w.]+/(\\w+)-(\\w+)");
    smatch s;

    for (int i = 0; i < int(sizeof(str) / sizeof(str[0])); i++) {
        if (regex_search(str[i], s, re)) {
            cout << "Url: " << s[0] << endl;
            cout << "Englishname: " << s[1] << endl;
            cout << "Name: " << s[2] << endl;
        }
    }
    return 0;
}
