#include <map>
#include <string>
#include <functional>
#include <iostream>

using namespace std;

void enter_a() {
    cout << "Введите a: " << endl;
    cin >> a;
}

void enter_b() {
    cout << "Введите b: " << endl;
    cin >> b;
}

void get_modulo() {}

void get_division() {}


struct MenuItem
{
    string title;
    function<void(void)> action;
};

int a, b;


int main() {
    map<int, MenuItem> menu = {
      {1, {"Ввести число A", enter_a}},
      {2, {"Ввести число B", enter_b}},
      {3, {"Получить остаток от деления", get_modulo}},
      {4, {"Получить целую часть от деления", get_division}},
    };

    while (true)
    {
        int select;
        cout << "Menu: " << endl;
        for (const auto &[index, item] : menu) {
            cout << index << ": " << item.title << endl;
        }

        if (select == 0) {
            
        }

        cin >> select;
        if (menu.find(select) != menu.end()) {
            menu[select].action();
        } else {
            cout << "Такой пункт не найден" << endl;
        }
    }
    

    return 0;
}