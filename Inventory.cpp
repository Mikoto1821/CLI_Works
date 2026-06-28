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

std::string categoryToString(Category cat) {
    switch(cat) {
        case Category::WEAPON: return "Weapon";
        case Category::FOOD:   return "Food";
        case Category::LOOT:   return "Food";
        case Category::ARMOR:  return "Armor";
        case Category::POTION: return "Potion";
        case Category::MISC:   return "Misc";
    }
}

Category stringToCategory(const std::string& s) {
    std::string lower = s;
    std::transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
    if (lower == "weapon") return Category::WEAPON;
    if (lower == "food") return Category::FOOD;
    if (lower == "loot") return Category::LOOT;
    if (lower == "armor") return Category::ARMOR;
    if (lower == "potion") return Category::POTION;
    return Category::MISC;
}

int main() {
    cout << "Unfinished works, BRB! " << endl;
}