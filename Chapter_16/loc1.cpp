#include<iostream>
#include<locale>
#include<exception>
#include<cstdlib>
using namespace std;

int main()
{
    try{
        cin.imbue(locale::classic());

        #ifdef _MSC_VER
        cout.imbue(locale("deu_deu.1252"));
        #else
        cout.imbue(locale("de_DE"));
        #endif

        cout << "input floating-point values (classic notation): " << endl;
        double value;
        while(cin >> value){
            cout << value << endl;
        }
    }catch(const std::exception& e){
        cerr << "Exception: " << e.what() << endl;
        return EXIT_FAILURE;
    }
}
