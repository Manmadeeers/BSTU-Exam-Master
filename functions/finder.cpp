#include "finder.h"

int finder(string *str) 
{
    int cnt = 0;
    string path = WAY;
    if (filesystem::exists(path))
    {
        for (const auto& entry : filesystem::directory_iterator(path)) {
            if (entry.is_directory()) {
                OUTPUT(entry.path().filename().string(), str);
                cnt++;
            }
        }
    }
    else cout << "ERROR";
    return cnt;
}

void OUTPUT(string str, string *strp) {
   cout << str << endl;
   *strp = str;
}

