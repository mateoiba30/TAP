#include <iostream>
#include <string> //para poder usar string
#include <cmath>
using namespace std; //evita tener que poner std::

//this is a comment
/*this is ohter comment*/

int myFunction(string fname, int age) { //paso por valor
  cout << fname << " Refsnes. " << age << " years old. \n";
  return age;
}

void swapNums(int &x, int &y) {//paso por referencia -> se modifican los parámetros reales
  int z = x;
  x = y;
  y = z;
}
    
int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);//mejora la eficiencia

    //primitivos
    const int CONSTANTE = 5; //si o si le debemos definir el valor ahora
    int entero1, entero2, entero3;
    double real = 0.0;
    float real2 = 0.0; //menos preciso y MAS RAPIDO que double (32 bits en lugar de 64)
    char caracter = 'a';
    bool boleano = false; //en pantalla imprime un 0, no "false"

    //string
    string texto = "hola que tal";
    char greeting2[] = "Hello";  //     MENOS EFICIENTE
    string nombre;
    cout << "Type your name: ";
    getline (cin, nombre);
    string segundoNombre = "Agustin ";
    string apellido = "Ibanez ";
    string fullName = nombre.append(segundoNombre) + apellido; //dos formas de concatenar strings
    cout << fullName <<  "\n";
    cout << "The length of the fullname is: " << fullName.length() << "\n"; //EL \N ES MÁS RÁPIDO QUE ENDL
    cout << "La primer letra del nombre es " << fullName[0] << "\n";

    //imprimir
    cout << "Type a number: " <<  "\n"; //esta es la forma más rápida de hacer un salto de línea
    cin >> entero1; //el input usa << y el uotput >>

    // condicionales
    if((entero1 != 50)&&(entero1 !=49)){
        cout << "Entero1 no es 50 ni 49";
    }
    else{
        if(entero2 >50 && entero2<100){
            cout << "Entero 2 entre 50 y 100";
        }
        else if(entero3 <23){
            cout << "entero3 menor a 23";
        }
    }

    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result;

    int day = 4;
    switch (day) {
    case 6:
        cout << "Today is Saturday";
        break;
    case 7:
        cout << "Today is Sunday";
        break;
    default:
        cout << "Looking forward to the Weekend";
    }

    //matemática
    cout << sqrt(64);
    cout << round(2.6);
    cout << log(2);
    cout << min(5, 10);
    return 0;

    //iteradores
    int i = 0;
    while (i < 5) {
        cout << i << "\n";
        i++;
    }

    int i = 0;
    do {
        cout << i << "\n";
        i++;
    }
    while (i < 5);
    
    for (int i = 0; i < 5; i++) {
        cout << i << "\n";
    }

    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers) {
        
        if ( i == 20 ){
            continue; //saltamos a la siguiente iteración del for
        }
        else if ( i == 40 ){
            break; //salimos del for, nunca llegamos al 50
        }
    }

    //arreglos
    int myNumbers[5] = {10, 20, 30, 40, 50};
    cout << sizeof(myNumbers); //tamaño en bytes
    int getArrayLength = sizeof(myNumbers) / sizeof(int); //cantidad de elementos
    cout << getArrayLength; 
    int otherNumbers[10] = {0}; //si o si hay que aclarar el tamaño del arreglo, de esta forma inicia todo en 0

    string letters[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };
    cout << letters[0][2];  // Outputs "C"

    //estructuras
    struct tipoEstructura{
        int myNum;
        string myString;
    };

    //punteros
    string food = "Pizza";  // A food variable of type string
    string* ptr = &food;    //con & pido la dirección de una variable y con * indico que es un tipo puntero y tmb me sirve para referenciar al valor al que apunta
    cout << *ptr << "\n"; //muestro el valor que apunta
    cout << ptr << "\n"; //muestro la dirección a la que apunta
    cout << &ptr << "\n"; //muestro al dirección donde guardo la variable
}