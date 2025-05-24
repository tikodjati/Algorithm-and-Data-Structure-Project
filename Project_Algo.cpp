#include <iostream>
using namespace std;

//node linked list schedule
struct node_schedule{
    char nama_mks[50], hari_mks[50];
    int jmlh_sks_mks, tingkat_kesulitan_mks;
    node_schedule *next; //pointer ke node berikutnya
};

//node linked list assignment
struct node_assignment{
    char nama_mka[50], hari_mka[50],status[20];
    int jmlh_sks_mka, tingkat_kesulitan_mka;
    node_assignment *next; //pointer ke node assignment
};



// input_schedule schedule;
// input_assigment assigment;

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