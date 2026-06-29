#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <algorithm>
#include <iomanip>
#include <sstream>
using namespace std;

enum class Category {
    WEAPON,
    LOOT,
    FOOD,
    ARMOR,
    POTION,
    MISC
};

string categoryToString(Category cat) {
    switch(cat) {
        case Category::WEAPON: return "Weapon";
        case Category::FOOD:   return "Food";
        case Category::LOOT:   return "Food";
        case Category::ARMOR:  return "Armor";
        case Category::POTION: return "Potion";
        case Category::MISC:   return "Misc";
    }
}

Category stringToCategory(const string& s) {
    string lower = s;
    transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
    if (lower == "weapon") return Category::WEAPON;
    if (lower == "food") return Category::FOOD;
    if (lower == "loot") return Category::LOOT;
    if (lower == "armor") return Category::ARMOR;
    if (lower == "potion") return Category::POTION;
    return Category::MISC;
}

struct item {
    int id;
    string name;
    Category category;
    int quantity;
    string description;
};

class Inventory {
    public: 
        static const int MAX_SLOTS = 20;
        static const int MAX_STACKS = 99;

        Inventory() : nextID(1) {}

        void printHeader() const {
            cout << "\n";
            cout << "  ╔══════════════════════════════════════════════════════════════╗\n";
            cout << "  ║              ⚔  ADVENTURER'S INVENTORY  ⚔                  ║\n";
            cout << "  ╚══════════════════════════════════════════════════════════════╝\n";
        }
};

int main() {
    cout << "Unfinished works, BRB! " << endl;
    return 0;
}