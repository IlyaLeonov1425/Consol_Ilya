#pragma once
#include <string>
#include <iostream>
#include <Windows.h>
#include <time.h>
#include <cstdlib>
#include <vector>
#include <thread>
#include <chrono>

using namespace std;

enum class item_ {

    axe,
    scrap,
    key


};

struct player_ {
    int hp;
    int attack;
    int weapon;
    int current_loc = 0;
    vector <item_> item_p;
};

string item_lib[3]{ "axe","scrap","key" };

player_ user;
player_ enemy;

void introduction();
void road();
void delivery();
void houseofcultists();
void floorone();
void hall();
void artifact();
void firstcontact();
void fight();
void car();
void whisper();
void attic();
void map();

void typeText(string text, int ms) {
    for (int i = 0; i < text.size(); i++) {

        cout << text[i] << flush;
        this_thread::sleep_for(chrono::milliseconds(ms));
    }


}


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
        car();
    }
    else if (choice == "���") {
        std::cout << "�� ������ � ���� �� ������������ � ���������." << endl;
        std::cout << "�� ��������� � ���� � ���������� �������� ������� ������, ������� ����� �� �����.\n" << endl;
        car();
    }
    else {
        cout << "�� ���������. ������� ������ �� ��� ���.\n";
    }
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
    else if (choice == "���") {
        cout << "�� �������� ��� ������� � ��������." << endl;
        cout << "Game OVER\n" << endl;
        return;
    }
    else {
        cout << "�� ���������. ������� ������ �� ��� ���.\n";
    }
}

// ���� � ����
void road() {
    string situation[5];
    situation[0] = "�� ������� ����� ������ � ����� ����� � �������.\n";
    situation[1] = "���������� ��� ��� �������� ����������, ������� ������.\n";
    situation[2] = "���� ����� ������ �������� �����.\n";
    situation[3] = "�� ������� �������� ������� �� ��������,������� �� �� ���������.\n";
    situation[4] = "�� ������� �������������� � ������ ����, �� �������� ��� ��� ����������/\n";
    // ��������, ���������, ��������� ����   ����!!! � �������
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
    else {
        cout << "�� ���������. ������� ������ �� ��� ���.\n";
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
        user.weapon = 40;
        firstcontact();
    }
    else if (choice == "���") {
        cout << "�� ������ �� ����� ��������.\n" << endl;
        firstcontact();
    }
    else {
        cout << "�� ���������. ������� ������ �� ��� ���.\n";
    }
}
void firstcontact() {
    cout << "���� ����� ������� �������, ���������� � ����� ���������� �������� � ������� ������ ������� � ���������." << endl;
    cout << "�� ���� ���� �������, � ��� ����� ������ ��� �����: ��� �� ������ ����� ����...� " << endl;
    fight();
    //� ����������� �� ������ ������, ����� ����� ������������ ����������� ���������:
    //-�������: ����� �������� ������� ������� � �������, �� �� �������.
    //- ������� ��������� : �� ����� ����������� ������� ���������, ��� ��� ����� ����� ������ � ���� � ��������.��� ����� �������� � ��������� ����� �������� ����������.
    //- �����
}
void fight() {
    cout << "�� ������ ������� ����� �������� ��� �������." << endl;
    cout << "1 - �������, 2 - ������� �� ����." << endl;
    user.hp = 110;
    user.attack = 40;
    enemy.hp = 90;
    enemy.attack = 54;

    int a;
    bool win = false;
    int flag = 0;

    while (!win) {
        cin >> a;
        switch (a)
        {
        case 1:
            if (enemy.hp <= 0) {
                cout << "�� ����� ���������.\n" << endl;
                win = true;
                whisper();
            }
            else if (user.hp <= 0) {
                cout << "�� ���� ����� ����������.\n" << endl;
                win = true;
                break;
            }

            else
            {
                cout << "�� �������� ���� ���������.\n" << endl;
                enemy.hp -= user.attack + user.weapon;
                cout << "�������� ���������� ������� ���.\n" << endl;
                user.hp -= enemy.attack;
            }
            break;

        case 2:
            cout << "�� �������� �� ����.";
            win = true;
            break;
        }

    }
}

void whisper() {
    cout << "����� ��������� �������� ���������� ����� � �����. � ���� ������ �������� ������� ������ � �������� � ������� � �������� ������." << endl;
    cout << "����� ������ ������� �������� �� ������ ���� � �������� ���" << endl;
    cout << "�� ������ ����� ����� ������������ � ���������, ������������ � ��� ��������. �� ����� ������ �� ��� �������.\n" << endl;
    //������� ����� ���������� ����� ��������� � �������.
}

void attic() {
    cout << "���� ���������� �����, � ����� ��������� ��� ������, ����� ������� ��� �� ������." << endl;
    cout << "�� ������� �� ������� ��� ������ ���������� ���������� � ��������� ����, ������� �������� ������� �����." << endl;
    cout << "����� ��������� ���������, ������� ������� ������� � �������� ����� ������. �� ������������ � ���, ��� �� �� �������� � ��� � ��� � ������ ���� ����������� �������, ���� �� ������������ � ���." << endl;
    cout << "����� � ��������-��������� ��� ��������� �� ������� �������, ������ ��������� ���� � ��������� ����������. ��������� ����� �����������, � ���� ������� ��������, ������ ��� ������ �����." << endl;
    cout << "����� ������� ��������� ���������� ����, �� ������� ����� ����������� ������� � ���������.\n" << endl;
    cout << "������ ��������� �����? (��/���).\n" << endl;
    string choice;
    cin >> choice;
    if (choice == "��") {
        cout << "������ ����� ������������� ���������� � ��������, ������� ��������� ���������, ������� �������� ���������������� � �������� ����������.\n" << endl;
        //map();
    }
    else if (choice == "���") {
        //map();
    }
    else {
        cout << "�� ���������. ������� ������ �� ��� ���.\n";
    }
}