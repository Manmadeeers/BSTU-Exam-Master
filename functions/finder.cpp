#include "finder.h"

int finder() 
{
    int cnt = 0;
    string path = WAY;
    if (filesystem::exists(path))
    {
        for (const auto& entry : filesystem::directory_iterator(path)) {
            if (entry.is_directory()) {
                OUTPUT(entry.path().filename().string());
                cnt++;
            }
        }
    }
    else cout << "ERROR";
    return cnt;
}

void OUTPUT(string str) {
    cout << str << std::endl;
}

