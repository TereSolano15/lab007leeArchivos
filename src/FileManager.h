//
// Created by Tere Solano on 17/10/2020.
//

#ifndef MY_PROJECT_NAME_FILEMANAGER_H
#define MY_PROJECT_NAME_FILEMANAGER_H
#include <../lib/nlohmann/json.hpp>
#include <string>
#include "Persona.h"
using namespace std;
using nlohmann::json;

class FileManager {
public:
    static vector<Persona> deserialize(const string& _data);
};


#endif //MY_PROJECT_NAME_FILEMANAGER_H
