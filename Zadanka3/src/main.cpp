#include <iostream>
#include <vector>
#include <list>
#include "Stop.h"
#include "Line.h"

using namespace std;

int main() {
    list<Stop> stops;
    list<Stop>::iterator x;
    stops.emplace_back(1, "Politechnika", 50.1, 50.2);
    stops.emplace_back(2, "Nowy Kleparz", 50.2, 50.2);
    stops.emplace_back(3, "Plac Inwalidów", 50.2, 50.2);
    stops.emplace_back(4, "Urzędnicza", 50.2, 50.2);
    stops.emplace_back(5, "Biprostal", 50.2, 50.2);
    stops.emplace_back(6, "Uniwersytet Pedagogiczny", 50.2, 50.2);

    Line l1("P", "Podchorążych");
    for (x = stops.begin(); x != stops.end(); x++) {
        l1.addStop(&(*x));
    }

    l1.print();

    cout << "---------------------------------------" << endl;
    stops.emplace_back(7, "Bratysławska", 50.2, 50.2);
    stops.emplace_back(8, "Teatr Bagatela", 50.2, 50.2);
    stops.emplace_back(9, "Stary Kleparz", 50.2, 50.2);
    stops.emplace_back(10, "Teatr Słowackiego", 50.2, 50.2);
    stops.emplace_back(11, "Teatr Słowackiego1", 50.2, 50.2);
    stops.emplace_back(12, "Teatr Słowackiego2", 50.2, 50.2);
    stops.emplace_back(13, "Teatr Słowackiego3", 50.2, 50.2);

    l1.print();

    cout << "---------------------------------------" << endl;
    int i=0;
    for (x = stops.begin(); x != stops.end() && i < 3; x++, i++) {
        (*x).print();
    }

    return 0;
}