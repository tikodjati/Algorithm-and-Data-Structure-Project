#include <iostream>
using namespace std;

void menu(int &pilmenu){
    cout << "============= MENU =============" << endl;
    cout << "================================" << endl;
    cout << "1. Assigenment & Schedule Input" << endl;
    cout << "2. Leasson Plan" << endl;
    cout << "3. Check-List Leasson " << endl;
    cout << "4. Notes" << endl;
    cout << "================================" << endl;
    cout << " Select the Menu : " << endl;
    cin >> pilmenu; 
    cout << "================================" << endl;
    system ("cls"); 
}

int main()
{
    int pilmenu;
    
    do
    {
        menu(pilmenu);
    } while (pilmenu != 4);
    
}