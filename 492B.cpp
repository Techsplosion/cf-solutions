#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using std::cin, std::cout, std::endl, std::ios_base, std::set, std::vector, std::find, std::sort, std::max_element;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, l;
    cin >> n >> l;
    set<int> lamps_;
    vector<int> lamps;
    vector<double> diff;

    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        lamps_.insert(input);
    }

    bool leftEnd = find(lamps_.begin(), lamps_.end(), 0) != lamps_.end(), rightEnd = find(lamps_.begin(), lamps_.end(), l) != lamps_.end();
    lamps_.insert(0);
    lamps_.insert(l);

    for (int lamp : lamps_) lamps.push_back(lamp);

    for (int i = 1; i < lamps.size(); i++) {
        if (i == 1) {
            if (leftEnd) diff.push_back((lamps[i] - lamps[i - 1]) / 2.0);
            else diff.push_back((double)(lamps[i] - lamps[i - 1]));
        } else if (i == lamps.size() - 1) {
            if (rightEnd) diff.push_back((lamps[i] - lamps[i - 1]) / 2.0);
            else diff.push_back((double)(lamps[i] - lamps[i - 1]));
        } else {
            if (rightEnd) diff.push_back((lamps[i] - lamps[i - 1]) / 2.0);
        }
    }

    cout << *max_element(diff.begin(), diff.end()) << endl;
}
