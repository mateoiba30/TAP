#include <bits/stdc++.h>
using namespace std;

struct hash_string {
    hash<char*> h;
    size_t operator()(const string &s) const { return h(s.c_str()); }
};

void hash_demo() {
    hash_map<string, string, hash_string> foo;
    foo["foo"] = "bar";
    cout << foo["foo"] << endl;
}

int main() {
    // Pila (Stack)
    stack<int> pila;
    pila.push(10);
    pila.push(20);
    pila.push(30);
    cout << "Top de la pila: " << pila.top() << endl;
    pila.pop();
    cout << "Top de la pila después de pop: " << pila.top() << endl;

    // Lista (List)
    list<int> lista;
    lista.push_back(10);
    lista.push_back(20);
    lista.push_back(30);
    cout << "Elementos de la lista: ";
    for(int elem : lista) {
        cout << elem << " ";
    }
    cout << endl;

    // Hash (unordered_map)
    unordered_map<string, int> hash_table;
    hash_table["uno"] = 1;
    hash_table["dos"] = 2;
    hash_table["tres"] = 3;
    cout << "Valor asociado a 'dos': " << hash_table["dos"] << endl;

    // Conjunto (Set)
    set<int> conjunto;
    conjunto.insert(10);
    conjunto.insert(20);
    conjunto.insert(30);
    cout << "Elementos del conjunto: ";
    for(int elem : conjunto) {
        cout << elem << " ";
    }
    cout << endl;

    // Diccionario (unordered_map, similar a hash)
    unordered_map<string, int> diccionario;
    diccionario["uno"] = 1;
    diccionario["dos"] = 2;
    diccionario["tres"] = 3;
    cout << "Valor asociado a 'tres' en diccionario: " << diccionario["tres"] << endl;

    return 0;
}
