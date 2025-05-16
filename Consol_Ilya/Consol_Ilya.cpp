#include "NOVEL.h"




struct portal_ {
    string portal_name;
    int target;
};

struct objects_ {

    string name;
    string description;


};

struct location_ {

    string text;
    string location_name;
    vector <portal_> p;
    vector <item_> item_l;
    vector <objects_> object;

};


location_ location[3];






void initgame() {
    location[0].location_name = "start";
    location[0].p.push_back({ "door",1 });
    location[0].p.push_back({ "d2",2 });

    location[1].location_name = "room1";
    location[1].p.push_back({ "start",0 });
    location[1].item_l.push_back(item_::scrap);

    location[2].location_name = "room2";
    location[2].p.push_back({ "start",0 });
    location[2].item_l.push_back(item_::axe);

    user.item_p.push_back(item_::key);

    location[0].object.push_back({ "picture", "На стене висит картина изображающая ваш портрет." });
    location[0].object.push_back({ "compas", "Сас" });




}




int main() {
    system("chcp 1251");
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    //introduction();

    initgame();
        string chouse;

    while (user.hp <= 0) {
        
        cin >> chouse;

        if (chouse == "go") {
            for (int i = 0; i < location[user.current_loc].p.size();i++) {
                typeText(location[user.current_loc].p[i].portal_name, 100);
                cout << "\n";
            }

            cin >> chouse;

            for (int i = 0; i < location[user.current_loc].p.size();i++) {
                if (chouse == location[user.current_loc].p[i].portal_name) {
                    user.current_loc = location[user.current_loc].p[i].target;
                    cout << location[user.current_loc].location_name<< endl;
                }
            }
        }

        if (chouse == "item") {
            for (int i = 0; i < user.item_p.size(); i++) {

               typeText(item_lib[(int)user.item_p[i]],100);
               cout << "\n";
            }
                
        }

        if (chouse == "m") {
            typeText(location[user.current_loc].location_name, 100);
            cout << "\n";
        }

        if (chouse == "search") {
            for (int i = 0; i < location[user.current_loc].item_l.size(); i++) {
                typeText(item_lib[(int)location[user.current_loc].item_l[i]], 100);
                cout << "\n";
            }
        }

        if (chouse == "pick") {
            for (int i = 0; i < location[user.current_loc].item_l.size(); i++) {

                cout << "Введите название предмета\n";

                cin >> chouse;
                if (chouse == item_lib[(int)location[user.current_loc].item_l[i]]) {
                    user.item_p.push_back(location[user.current_loc].item_l[i]);
                    location[user.current_loc].item_l.erase(location[user.current_loc].item_l.cbegin() + i);

                }

            }
        }

        if (chouse == "look") {

            int a;
            int dir;

            cout << "Введите 1 чтобы осмотреть объекты вокруг себя или 2 чтобы осмотреть предметы в инвентаре\n";

            cin >> a;

            switch (a)
            {
            case 1:
                for (int i = 0; i < location[user.current_loc].object.size(); i++)
                {
                    cout << i + 1 << ". " << location[user.current_loc].object[i].name << endl;
                }

                cin >> dir;
                cout << location[user.current_loc].object[dir - 1].description << endl;

                break;
            case 2:
                for (int i = 0; i < user.item_p.size(); i++) {

                    cout << i + 1<< ". " << item_lib[(int)user.item_p[i]] << endl;

                }

                int a;

                cin >> a;
                switch ((int)user.item_p[a - 1])
                {
                case 0:
                    cout << "У вас в рюкзаке ржавый топорик с потрескавшимся топорищем.\n";
                    break;
                case 1:
                    cout << "ЛОМ\n";
                    break;
                case 2:
                    cout << "Железный ключ\n";
                    break;

                }
                
            }
            

            /*int dir;

            for (int i = 0; i < location[user.current_loc].object.size(); i++) {

                for (int j = 0; j < user.item_p.size(); j++) {


                cout << i +1 << ". " << location[user.current_loc].object[i].name << endl;

                }
            }

            cin >> dir;

            cout << location[user.current_loc].object[dir - 1].description<<endl;*/


        }
        

        if (chouse == "q") break;
    }
}
    