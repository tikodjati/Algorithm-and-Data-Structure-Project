#include <iostream>
#include <cstring>
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

node_schedule *kepala_s = NULL;
node_schedule *ekor_s = NULL;
node_schedule *bantu_s = NULL;
node_assignment *kepala_a = NULL;
node_assignment *ekor_a = NULL;
node_assignment *bantu_a = NULL;

void menu(int &pilmenu)
{

    cout << "============= MENU =============" << endl;
    cout << "================================" << endl;
    cout << "1. Schedule & Assignment Input" << endl;
    cout << "2. Schedule & Assignment Show" << endl;
    cout << "3. Leasson Plan" << endl;
    cout << "4. Check-List Lesson" << endl;
    cout << "5. Notes" << endl;
    cout << "0. Exit Program" << endl;
    cout << "================================" << endl;
    cout << " Select the Menu : ";
    cin >> pilmenu;
    cout << "================================" << endl;
    system("cls");
}

void scheduleLL(string nama_mks, string hari_mks, int jmlh_sks_mks, int tingkat_kesulitan_mks)
{
    node_schedule *baru_s = new node_schedule; // buat node baru
    strncpy(baru_s->nama_mks, nama_mks.c_str(), sizeof(baru_s->nama_mks));
    strncpy(baru_s->hari_mks, hari_mks.c_str(), sizeof(baru_s->hari_mks));
    baru_s->jmlh_sks_mks = jmlh_sks_mks;
    baru_s->tingkat_kesulitan_mks = tingkat_kesulitan_mks;

    baru_s->next = NULL;
    kepala_s = ekor_s = baru_s;
}

void TambahAkhirSchedule(string nama_mks, string hari_mks, int jmlh_sks_mks, int tingkat_kesulitan_mks)
{
    node_schedule *baru_s = new node_schedule();
    strncpy(baru_s->nama_mks, nama_mks.c_str(), sizeof(baru_s->nama_mks));
    strncpy(baru_s->hari_mks, hari_mks.c_str(), sizeof(baru_s->hari_mks));
    baru_s->jmlh_sks_mks = jmlh_sks_mks;
    baru_s->tingkat_kesulitan_mks = tingkat_kesulitan_mks;
    baru_s->next = NULL;
    if (kepala_s == NULL)
    {
        kepala_s = ekor_s = baru_s;
    }
    else
    {
        ekor_s->next = baru_s;
        ekor_s = baru_s;
    }
}

void clearLL_Schedule()
{
    node_schedule *current = kepala_s;
    while (current != NULL)
    {
        node_schedule *hapus = current;
        current = current->next;
        delete hapus;
    }
    kepala_s = NULL;
}

void clearLL_Assignment()
{
    node_assignment *current = kepala_a;
    while (current != NULL)
    {
        node_assignment *hapus = current;
        current = current->next;
        delete hapus;
    }
    kepala_a = NULL;
}

void assignmentLL(string nama_mka, string hari_mka, int jmlh_sks_mka, int tingkat_kesulitan_mka, string status)
{
    node_assignment *baru_a = new node_assignment(); // baut node baru
    strncpy(baru_a->nama_mka, nama_mka.c_str(), sizeof(baru_a->nama_mka));
    strncpy(baru_a->hari_mka, hari_mka.c_str(), sizeof(baru_a->hari_mka));
    baru_a->jmlh_sks_mka = jmlh_sks_mka;
    baru_a->tingkat_kesulitan_mka = tingkat_kesulitan_mka;
    strncpy(baru_a->status, status.c_str(), sizeof(baru_a->status));
    baru_a->next = NULL;
    kepala_a = ekor_a = baru_a;
}

void TambahAkhirAssignment(string nama_mka, string hari_mka, int jmlh_sks_mka, int tingkat_kesulitan_mka, string status)
{
    node_assignment *baru_a = new node_assignment();
    strncpy(baru_a->nama_mka, nama_mka.c_str(), sizeof(baru_a->nama_mka));
    strncpy(baru_a->hari_mka, hari_mka.c_str(), sizeof(baru_a->hari_mka));
    baru_a->jmlh_sks_mka = jmlh_sks_mka;
    baru_a->tingkat_kesulitan_mka = tingkat_kesulitan_mka;
    strncpy(baru_a->status, status.c_str(), sizeof(baru_a->status));
    baru_a->next = NULL;
    if (kepala_a == NULL)
    {
        kepala_a = ekor_a = baru_a;
    }
    else
    {
        ekor_a->next = baru_a;
        ekor_a = baru_a;
    }
}

<<<<<<< HEAD
=======
void file_schedule()
{
    FILE *file = fopen("schedule_data.txt", "wb");
    if (file != NULL)
    {
        bantu_s = kepala_s;
        while (bantu_s != NULL)
        {
            fwrite(bantu_s, sizeof(node_schedule) - sizeof(node_schedule *), 1, file);
            bantu_s = bantu_s->next;
        }
        fclose(file);
        cout << "Schedule data successfully saved in schedule_data.txt file!" << endl;
    }
    else
    {
        cout << "Failed to open the file to save the schedule data!";
    }
}

void read_file_schedule()
{
    clearLL_Schedule();
    FILE *file = fopen("schedule_data.txt", "rb");
    if (file == NULL)
    {
        cout << "Failed to open the file to save the schedule data!";
        return;
    }

    kepala_s = ekor_s = NULL;

    while (true)
    {
        node_schedule *newS = new node_schedule();
        int read = fread(newS, sizeof(node_schedule) - sizeof(node_schedule *), 1, file);

        if (read != 1)
        {
            delete newS;
            break;
        }

        newS->next = NULL;

        if (kepala_s == NULL)
        {
            kepala_s = ekor_s = newS;
        }
        else
        {
            ekor_s->next = newS;
            ekor_s = newS;
        }
    }

    fclose(file);
}


>>>>>>> 67c1dc6388983e1dc47fec7650e8808732c2186f
int main()
{
    int pilmenu;
    
    do
    {
        menu(pilmenu);
    } while (pilmenu != 4);
    
}