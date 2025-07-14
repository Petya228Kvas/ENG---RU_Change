#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    const string rus = "йцукенгшщзхъфывапролджэячсмитьбю";
    const string eng = "qwertyuiop[]asdfghjkl;'zxcvbnm,.";
    string s;
    getline(cin, s);
    for (size_t i = 0; i <= s.length(); i++) {
        size_t pos = eng.find(s[i]);
        if (pos != string::npos)
            s[i] = rus[pos];
    }
    cout << s;
    
}
