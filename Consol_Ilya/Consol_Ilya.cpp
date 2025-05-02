#include "NOVEL.h"




struct portal_ {
    string portal_name;
    int target;
};

struct location_ {

    string text;
    string location_name;
    vector <portal_> p;
    vector <item_> item_l;
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
}


int main() {
    system("chcp 1251");
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    //introduction();

    initgame();
        string ch;

    while (user.hp <= 0) {
        
        cin >> ch;

        if (ch == "go") {

            for (int i = 0; i < location[user.current_loc].p.size();i++) {

                //cout << location[user.current_loc].p[i].portal_name << endl;
                typeText(location[user.current_loc].p[i].portal_name, 100);
                cout << "\n";
                

            }

            cin >> ch;


            for (int i = 0; i < location[user.current_loc].p.size(); i++) {
                if (ch == location[user.current_loc].p[i].portal_name) {

                    user.current_loc = location[user.current_loc].p[i].target;

                    cout << "Вы переместились в " << location[user.current_loc].location_name << endl;

                }
            }
       
        }

        if (ch == "item") {
            for (int i = 0; i < user.item_p.size(); i++) {

               typeText(item_lib[(int)user.item_p[i]],100);
            }
                
        }

        if (ch == "m") {
            typeText(location[user.current_loc].location_name, 100);
            cout << "\n";
        }

        if (ch == "search") {
            for (int i = 0; i < location[user.current_loc].item_l.size(); i++) {
                typeText(item_lib[(int)location[user.current_loc].item_l[i]], 100);
            }
        }


        if (ch == "q") break;
    }
}
    