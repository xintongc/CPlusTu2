#include <iostream>
#include "CreateAndDestroy.h"

using namespace std;

namespace first{

    int var = 3;

    void greeting()
    {
    cout << "Hello from first" << endl;
    }


    class Myclass
    {
    public:
        static void DoSomething()
        {
            cout << "Do something from first" << endl;
        }
    };

}


namespace {

    int var = 5;

    void greeting()
    {
        cout << "Hello from unnaned" << endl;
    }

//    class Myclass
//    {
//    public:
//        static void DoSomething()
//        {
//            cout << "Do something from unnamed" << endl;
//        }
//    };

    void PrintSomething()
    {
        cout << "print from unnamed" << endl;

    }

}
void bigGreeding()
{
}


void Implicit_conversion()
{
    double a = 1.3;
    double b = 2.4;

    int add = a + b;
    cout << "Implicite_conversion: value is " << add << endl;

}

void Explicit_conversion()
{
    double a = 1.3;
    double b = 2.4;

    int add = (int)a + (int)b;
    cout << "Explicite_conversion: value is " << add << endl;
}

inline double cube(const double side)//not change the value in the function
{
    return side * side * side;
}




int main() {

//    Implicit_conversion();
//    Explicit_conversion();
//

//    double sideVal;
//    cout << "what is the length of the cube's side?";
//    cin >> sideVal;
//
//    cout << "The volume of your cube is: " << cube(sideVal) << endl;
//
//    CreateAndDestroy first(01, "first");
//
//    CreateAndDestroy second(02, "second");


//    system("pause");

    first::greeting();

    cout << first::var << endl;
    cout << var << endl;

//    PrintSomething();


    {
        using namespace first;
        Myclass::DoSomething();
    }

    return 0;
}