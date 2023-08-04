#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

/*
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
    string letters = "abcdefghijklmnopqrstuvwxyz";
    transform(s.begin(), s.end(), s.begin(),[](unsigned char c){ return tolower(c); });
    for(char x : letters) {
        if(s.find(x) == -1) return "not pangram";
    }
    return "pangram";
}

int main()
{

    string s;
    getline(cin, s);

    string result = pangrams(s);

    cout << result << endl;

    return 0;
}
