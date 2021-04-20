// 5.1.D.cpp 
#include <iostream>
#include "Bad_exception.h"
#include <Windows.h> 
#include "LongLong.h"


using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    LongLong A1, B1, C1;


    try
    {
        cout << " Введіть A1: " << endl;
        cin >> A1;
        cout << " Введіть B1: " << endl;
        cin >> B1;

        cout << " A1 + B1: " << endl;
        cout << A1 + B1 << endl;

        cout << " A1 * B1: " << endl;
        cout << A1 * B1 << endl;

        cout << " A > B " << endl;
        if (A1 > B1) cout << " Yes " << endl; else cout << " No " << endl;

        cout << " A < B " << endl;
        if (A1 < B1) cout << " Yes " << endl; else cout << " No " << endl;

        cout << " A == B " << endl;
        if (A1 == B1) cout << " Yes " << endl; else cout << " No " << endl;
    }
    catch (invalid_argument e)
    {
        cout << e.what() << endl;
    }
    catch (bad_exception e)
    {
        cout << e.what() << endl;
    }
    catch (Bad_exception& e)
    {
        cout << e.what() << endl;
    }
    catch (const char* e)
    {
        cerr << e << endl;
    }

    return 0;
}
