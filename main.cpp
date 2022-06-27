#include <iostream>
#include <vector>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    vector<int> numbers;
    int k, n;
    vector<int> result;

    cout << "Enter quantity of number:";
    cin >> k;

    if (k == 0) {
        cout << "Vector is empty.";
    } else {
        cout << "\nEnter numbers:\n";

        for (int i = 0; i < k; i++) {
            cin >> n;
            numbers.push_back(n);
        }

        for (int i = 0; i < k; i++) {
            cout << numbers[i];
        }

        cout << " -> ";

        for (int i = 1; i <= k - (k % 3); i++) {
            if (i % 3 == 1) {
                int *a = &numbers[i - 1];
                int *b = &numbers[i];
                int *c = &numbers[i + 1];

                result.push_back(*a);
                result.push_back(*b);
                result.push_back(*c);
                result.push_back(*a);
                result.push_back(*b);
                result.push_back(*c);
            }
        }

        if (numbers.size() % 3 == 2) {
            int *a = &numbers[numbers.size() - 2];
            int *b = &numbers[numbers.size() - 1];
            result.push_back(*a);
            result.push_back(*b);
            result.push_back(*a);
            result.push_back(*b);

        } else if (numbers.size() % 3 == 1) {
            int *a = &numbers[numbers.size() - 1];
            result.push_back(*a);
            result.push_back(*a);
        }

        for (int i = 0; i < result.size(); i++) {
            cout << result[i];
        }
    }

    return 0;
}
