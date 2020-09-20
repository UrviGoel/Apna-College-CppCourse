//multiple languages robot
#include <iostream>
using namespace std;

int main()
{

    char button;
    cout << "Input a character: ";
    cin >> button;

    // if (button=='a')
    // {
    //     cout<<"Hello"<<endl;
    // }
    // else if (button=='b')
    // {
    //     cout<<"Namaste"<<endl;
    // }
    // else if (button=='c')
    // {
    //     cout<<"Salut"<<endl;
    // }
    // else if (button=='d')
    // {
    //     cout<<"Hola"<<endl;
    // }
    // else if (button=='e')
    // {
    //     cout<<"Ciao"<<endl;
    // }
    // else{
    //     cout<<"I am still learning more"<<endl;
    // }

    switch (button)
    {
    case 'a':
        cout << "Hello" << endl;
        
    case 'b':
        cout << "Namaste" << endl;
        
    case 'c':
        cout << "Salut" << endl;
        
    case 'd':
        cout << "Hola" << endl;
        
    case 'e':
        cout << "Ciao" << endl;
        

    default:
    cout<<"I am still learning more!"<<endl;
        
    }

    return 0;
}
