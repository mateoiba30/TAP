#include <iostream>
#include <string>
using namespace std;

class Padre {
  private:
    string name;
};

class OtroPadre {
  private:
    string lastname;
};

class MyClass : public Padre, public OtroPadre{ //extiende de padre y otropadre
    private:          
        int myNum;       
        string myString; 

    protected:
        string otroString;

    public:
        MyClass() {     // Constructor
            myNum = 0;
            myString = "";
        }

        void setNum(int num) {
            myNum = num;
        }

        int getNum(){
            return myNum;
        }

};

int main(){
    MyClass myObj;
    myObj.setNum(15); 
    cout << "myNum: " << myObj.getNum() <<  "\n";

    //excepciones
    try {
    int age = 15;
    if (age >= 18) {
        cout << "Access granted - you are old enough.";
    } else {
        throw (age);
    }
    }
    catch (int myNum) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Age is: " << myNum;
    }

    //random
    srand(time(NULL));//srand(time(nullptr))
    int x=rand();
    //rand()) / RAND_MAX * positionRange - positionRange / 2

    return 0;
}