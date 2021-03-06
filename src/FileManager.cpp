//
// Created by Tere Solano on 17/10/2020.
//

#include "FileManager.h"

void from_json(const json &_json, Persona &_person) {
    _person.setId(_json.at("id").get<int>());
    _person.setName(_json.at("name").get<std::string>());
    _person.setAge(_json.at("age").get<int>());
}

vector<Persona> FileManager::deserialize(const string& _data) {
    json jsonData = json::parse(_data);
    vector<Persona> personList = jsonData;

    return personList;
}