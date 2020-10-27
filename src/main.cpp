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
