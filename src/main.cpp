//
// Created by Tere Solano on 8/10/2020.
//
#include <iostream>
#include <fstream>
#include "FileManager.h"
#include "Persona.h"
using namespace std;
int main() {

    vector<Persona> personListFromJson;

    cout << "\n\nDeserialización del Json" << endl;
    personListFromJson = FileManager::deserialize(R"([{"id":1,"name":"Juan","age":21},{"id":2,"name":"Chayanne","age":44},{"id":3,"name":"Rihanna","age":72}])");
    for (Persona& person: personListFromJson) {
        std::cout << person.toString() << std::endl;
    }

    ifstream archivo1;
    string texto;
    
    try { archivo1.open("ArchivoJson.json", ios::binary); }
    catch (ifstream::failure a) {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }
    cout << endl;
    while (!archivo1.eof()) {
        getline(archivo1, texto);
        cout << texto << endl;
    }
    archivo1.close();

    return 0;
}
