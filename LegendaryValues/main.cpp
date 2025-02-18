#include <iostream>
#include "LegendaryValue.h"

using namespace std;

void printResults(std::vector<int> input, int lv) {
    LegendaryValue legendaryValue;
    vector<int> outputs = legendaryValue.run(move(input), lv);
    cout << "outputs are: ";
    for (int i : outputs) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    printResults({1, 3, 4, 2, 9, 5, 9}, 10);
    printResults({1, 2, 3, 4, 5, 6}, 7);
    return 0;
}
