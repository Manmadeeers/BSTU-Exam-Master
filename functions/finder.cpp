#include "finder.h"


vector<string> finder() 
{
    string path = WAY;
     vector<string> array_of_directorys;
    if (filesystem::exists(path))
    {
        for (const auto& entry : filesystem::directory_iterator(path)) {
            if (entry.is_directory()) {
                array_of_directorys.push_back(entry.path().filename().string());
            }
        }
    }
    else cout << "ERROR";
    return array_of_directorys;
}


