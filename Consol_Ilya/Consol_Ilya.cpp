#include <string>
#include <iostream>
#include <Windows.h>
#include <time.h>
#include <cstdlib>

using namespace std;

typedef struct {
    string weapon;
}Weapon;

struct player_ {
    int hp;
    int attack;
};

player_ user;
player_ enemy;
//Weapon chouse;
void introduction();
//void chouse_weapon();
void road();
void delivery();
void houseofcultists();
void floorone();
void hall();
void artifact();
void firstcontact();
void fight();
void escaperoom();




//����� ������
//��������
void introduction() {
    std::cout << "�� � �����, ������� ������." << std::endl;
    std::cout << "�� ����������� � ���� �� ������." << endl;
    std::cout << "������ ��������� ��������? (��/���)" << endl;
    string choice;
    cin >> choice;
    if (choice == "��") {
        cout << "�������� �������� ������\n" << endl;
    }
    std::cout << "�� ������ � ���� �� ������������ ����������." << endl;
    std::cout << "�� ��������� � ���� � ���������� �������� ������� ������, ������� ����� �� �����.\n" << endl;
}

// ����� �����
void car() {
    std::cout << "��� ��� ����� ����� ��������� � ��� ������ ����� �����." << std::endl;
    std::cout << "������ �� ��������� �� ����� ������ � ������." << endl;
    std::cout << "�� ���� � ��� �������� �������� �������, ������ ������� �� ��������� ��������? (��/���)" << endl;
    string choice;
    cin >> choice;
    if (choice == "��") {
        cout << "�� ������� �� �������� � ��������� ������ ���. ������ ���������� ������." << endl;
        road();
    }
    else {
        cout << "�� �������� ��� ������� � ��������." << endl;
        cout << "Game OVER\n" << endl;
        exit (1);
    }
}

// ���� � ����
void road() {
    string situation[5];
    situation[0] = "�������� ��������� ����� ������ ����� � �������, �� ��� �� ������.\n";
    situation[1] = "��� ���������� ��� ��� �������� ����������. � ���� ��� � �������, ����� ������.\n";
    situation[2] = "���� ����� ������ �������� �����.\n";
    situation[3] = "�� ������� �������� ������� �� ��������, ��� ������ �� ���� ������������ ������� �������.\n";
    situation[4] = "�� ������� �������������� � ������ ���� ���������� ��������.\n";
    // ��������, ���������, ��������� ����   ����!!! � �������
    // ���� �������... � ����
    int temp = 0 + rand() % 4;
    cout << situation[temp] << endl;
    delivery();

}
// ��������
void delivery() {
    cout << "�� ������������� � ������ ��������." << endl;
    cout << "��� ������ ������� ������� �� ������� ������." << endl;
    cout << "����� � ����� ����� �������� ������� � ��������� ���� � ����." << endl;
    cout << "'�� ������ �������� ���� � '������ ������� ������'- ������� ��." << endl;
    cout << "�� ��������� � ���� ����������\n" << endl;

    bool win = false;
    int flag = 0;
    string rps[3] = { "������", "�������", "������" };
    string choice;
    int temp;

    while (!win) {
        cin >> choice;
        temp = 0 + rand() % 2;
        if (choice == "������" || choice == "�������" || choice == "������") {

            if (choice == "������" && rps[temp] == "�������" || choice == "�������" && rps[temp] == "������" || choice == "������" && rps[temp] == "������") {
                cout << "�� �������� ����� �������� � �� ����\n" << endl;
                win = true;
                houseofcultists();

            }
            else {
                cout << "�� ���������. �������� ��� ���\n";

            }

        }
        else {
            cout << "�� ���������\n";
        }

    }

}
// ���� � ���
void houseofcultists() {
    cout << "����� ��������� ��������� ����� ����." << endl;
    cout << "������ ����� � �������, � ������� ������ ��������" << endl;
    cout << "�� ������ ��������� ��� ��������������? (��/���)" << endl;
    string choice;
    cin >> choice;
    if (choice == "��") {
        cout << "�� ������ ������, ��� ����� ������, ��������� �������� ���� � ������� ����� �� ������" << endl;
        floorone();
    }
    else if (choice == "���") {
        cout << "�� ���������� �� ������ �������." << endl;
        cout << "��� �� ���������� ����������������, � ��� �� ������ �������� ���." << endl;
        cout << "����� ����� �� ��������� ��� ����� �������� ���� �������� ������\n" << endl;
        floorone();
    }

}
// ������ �����
// ������ ����
void floorone() {
    cout << "�����, ������������ �������� ������� ������������, ����������� �������." << endl;
    cout << "�� ����� ��������, ��� ����� �� ��� ����� � ����� ������� ����������, ��� ����� �� ��������� ��� ����� ����������." << endl;
    cout << "����� ������ ��������� ����� � ���� ����� �� �������." << endl;
    hall();

}
void hall() {
    cout << "����� ������� � ������� �������." << endl;
    cout << "�� ������ ������ ������ ����������, ������� ������������ �����, ����� ������ � ���� ����, �� ��������� ��� �������� �������." << endl;
    artifact();
}
void artifact() {
    cout << "����� ��������� ���� �� ������ � ������� � �������, ��� ��������� �������� ������, ���������� ���������� ����������� ����������.\n " << endl;
    cout << "������ ����� �������� � ������ (��/���)" << endl;
    string choice;
    cin >> choice;
    if (choice == "��") {
        cout << "�� ������� ��������, �� ����� ������������ � ����������.\n" << endl;
        firstcontact();
    }
    else if (choice == "���") {
        cout << "�� ������ �� ����� ��������.\n" << endl;
    }
}
void firstcontact() {
    cout << "���� ����� ������� �������, ���������� � ����� ���������� �������� � ������� ������ ������� � ���������." << endl;
    cout << "�� ���� ���� �������, � ��� ����� ������ ��� �����: ��� �� ������ ����� ����...� " << endl;
    fight();
    
}
void fight() {
    cout << "�� ������ ������� ����� �������� ��� �������." << endl;
    cout << "1 - �������, 2 - ������� �� ����." << endl;
    user.hp = 150;
    user.attack = 40;
    enemy.hp = 90;
    enemy.attack = 35;
    int a;
    bool win = false;
    int flag = 0;
    cin >> a;
    switch (a)
    {
    case 1 : 
        
        while (!win) {
            if (enemy.hp <= 0) {
                cout << "�� �������� ���������.\n" << endl;
                win = true;
                escaperoom();
            }
            else
            {
                cout << "�� �������� ���� ���������.\n" << endl;
                enemy.hp -= user.attack;
                cout << "�������� ���������� ������� ���.\n" << endl;
                user.hp -= enemy.attack;
                
            }
        }
        break;
    case 2 :
        cout << "�� �������� �� ����.";
        break;
    }
    
}


void escaperoom() {
    cout << "����� ���������� �� �������. �� ��������� ����������� ����, ������������� �� ����� ��������� � ����������� �� ������ ����." << endl;
    cout << "�� ������ ����� ����� ������������ � ���������, ������������ � ��� ��������. �� ����� ������ � ��� �������, ��� ������." << endl;
    // ������� ����� ���������� ����� ��������� � �������.
}



int main() {
    system("chcp 1251");
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    // chouse_weapon();
    introduction();
    car();
    road();
    delivery();
    fight();
    return 0;
}