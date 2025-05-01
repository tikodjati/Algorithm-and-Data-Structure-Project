#include <iostream>
using namespace std;

struct input_schedule{
    string nama_mks, hari_mks;
    int jmlh_sks_mks, tingkat_kesulitan_mks;
};

struct input_assigment{
    string nama_mka, hari_mka;
    int jmlh_sks_mka, tingkat_kesulitan_mka;
};

input_schedule schedule;
input_assigment assigment;

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