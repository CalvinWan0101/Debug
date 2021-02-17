#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    // i 最後一個數字的位置
    int i = s.length() - 1;
    //所輸入字串為 '0'的狀況
    if (i == 0 && s[0] == '0')
        cout << '0';
    else
    {
        //找從哪一格開始不為0
        while (i >= -1)
        {
            if (s[i] != '0')
                break;
            i--;
        }
        //如果發現說一直到第[0]都還是'0'就印一個0出來
        if (i == -1)
            cout << '0' << endl;
        //如果i>=0就正常印
        while (i >= 0)
        {
            cout << s[i];
            i--;
        }
    }
    return 0;
}
