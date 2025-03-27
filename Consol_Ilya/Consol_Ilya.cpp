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




//Глава первая
//ВВедение
void introduction() {
    std::cout << "Вы — Алекс, молодой курьер." << std::endl;
    std::cout << "Вы собираетесь к себе на работу." << endl;
    std::cout << "Хотите осмотреть квартиру? (да/нет)" << endl;
    string choice;
    cin >> choice;
    if (choice == "да") {
        cout << "Квартира выглядит старой\n" << endl;
    }
    std::cout << "По презду в офис вы встречаетесь сколлегами." << endl;
    std::cout << "Вы общаетесь с ними и обсуждаете странные далекие заказы, которые никто не любит.\n" << endl;
}

// Новый заказ
void car() {
    std::cout << "Как раз после этого разговора к вам пришел такой заказ." << std::endl;
    std::cout << "Нехотя вы выезжаете на своей машине в дорогу." << endl;
    std::cout << "По пути у вас начинает кончатся топливо, хотите заехать на ближайшую заправку? (да/нет)" << endl;
    string choice;
    cin >> choice;
    if (choice == "да") {
        cout << "Вы заехали на заправку и заправили полный бак. Можете продолжать дорогу." << endl;
        road();
    }
    else {
        cout << "Вы проехали еще немного и заглохли." << endl;
        cout << "Game OVER\n" << endl;
        exit (1);
    }
}

// Путь к дому
void road() {
    string situation[5];
    situation[0] = "Внезапно произошел обвал камней рядом с дорогой, но вас не задело.\n";
    situation[1] = "Вас остановили ДПС для проверки документов. С ними все в порядке, едьте дальше.\n";
    situation[2] = "Мимо вашей машины пробежал олень.\n";
    situation[3] = "Вы увидели странные символы на деревьях, они похожи на руны нарисованные красной краской.\n";
    situation[4] = "Вы увидели промелькнувшую в кустах тень неведомого существа.\n";
    // ДОПИСАТЬ, РАСПИСАТЬ, НОРМАЛЬНО ЧТОБ   БЫЛО!!! с Николай
    // Дело сделано... с Илья
    int temp = 0 + rand() % 4;
    cout << situation[temp] << endl;
    delivery();

}
// Прибытие
void delivery() {
    cout << "Вы приближаетесь к адресу доставки." << endl;
    cout << "Это старый большой особняк на окраине города." << endl;
    cout << "Рядом с домом стоит странный человек и подзывает тебя к себе." << endl;
    cout << "'Ты должен победить меня в 'камень ножницы бумага'- говорит он." << endl;
    cout << "Вы подходите и игра начинается\n" << endl;

    bool win = false;
    int flag = 0;
    string rps[3] = { "камень", "ножницы", "бумага" };
    string choice;
    int temp;

    while (!win) {
        cin >> choice;
        temp = 0 + rand() % 2;
        if (choice == "камень" || choice == "ножницы" || choice == "бумага") {

            if (choice == "камень" && rps[temp] == "ножницы" || choice == "ножницы" && rps[temp] == "бумага" || choice == "бумага" && rps[temp] == "камень") {
                cout << "Вы победили этого человека и он ушел\n" << endl;
                win = true;
                houseofcultists();

            }
            else {
                cout << "Вы проиграли. Попробуй еще раз\n";

            }

        }
        else {
            cout << "Не правильно\n";
        }

    }

}
// Вход в дом
void houseofcultists() {
    cout << "Алекс открывает скрипучую дверь дома." << endl;
    cout << "Внутри темно и холодно, в воздухе пахнет сыростью" << endl;
    cout << "Вы хотите осмотреть дом повнимательнее? (да/нет)" << endl;
    string choice;
    cin >> choice;
    if (choice == "да") {
        cout << "Вы видите старую, еле живую мебель, затянутые паутиной окна и пыльные книги на полках" << endl;
        floorone();
    }
    else if (choice == "нет") {
        cout << "Вы отвлеклись на старое зеркало." << endl;
        cout << "Оно не отображает действительность, в нем вы видите красивый зал." << endl;
        cout << "Краем глаза вы замечаете как некто проходит мимо дверного проема\n" << endl;
        floorone();
    }

}
// Вторая глава
// Первый этаж
void floorone() {
    cout << "Алекс, испытывающий растущее чувство беспокойства, осматривает комнату." << endl;
    cout << "Он вдруг осознает, как долго он уже здесь — время кажется искаженным, как будто он находится вне своей реальности." << endl;
    cout << "Алекс делает несколько шагов и ищет выход из комнаты." << endl;
    hall();

}
void hall() {
    cout << "Алекс выходит в длинный коридор." << endl;
    cout << "На стенах висели старые фотографии, которые представляют людей, ранее живших в этом доме, их выражения лиц выглядят зловеще." << endl;
    artifact();
}
void artifact() {
    cout << "Алекс открывает одну из дверей и попадая в комнату, где находится странный алтарь, окруженный различными оккультными предметами.\n " << endl;
    cout << "Хотите взять артефакт с алтаря (да/нет)" << endl;
    string choice;
    cin >> choice;
    if (choice == "да") {
        cout << "Вы подняли артефакт, он легко завибрировал и засветился.\n" << endl;
        firstcontact();
    }
    else if (choice == "нет") {
        cout << "Вы решили не брать артефакт.\n" << endl;
    }
}
void firstcontact() {
    cout << "Пока Алекс изучает комнату, неожиданно в двери появляется культист в длинном темном одеянии с капюшоном." << endl;
    cout << "Он ведёт себя странно, и его голос звучит как шепот: “Ты не должен здесь быть...” " << endl;
    fight();
    
}
void fight() {
    cout << "Вы можете ударить этого человека или убежать." << endl;
    cout << "1 - ударить, 2 - убежать из дома." << endl;
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
                cout << "Вы вырубили культиста.\n" << endl;
                win = true;
                escaperoom();
            }
            else
            {
                cout << "Вы наносите урон культисту.\n" << endl;
                enemy.hp -= user.attack;
                cout << "Культист собирается ударить вас.\n" << endl;
                user.hp -= enemy.attack;
                
            }
        }
        break;
    case 2 :
        cout << "Вы убегаете из дома.";
        break;
    }
    
}


void escaperoom() {
    cout << "Алекс выбирается из комнаты. Он исследует непривычные пути, прогуливается по узким коридорам и поднимается на второй этаж." << endl;
    cout << "На втором этаже Алекс сталкивается с видениями, относящимися к его прошлому. Он видит образы — его детство, его страхи." << endl;
    // Видение может напоминать нечто связанное с культом.
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