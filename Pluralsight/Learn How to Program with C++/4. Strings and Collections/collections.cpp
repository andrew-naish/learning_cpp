#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vi;

    for (int i = 0; i < 12; i++) {
        vi.push_back(i);
    }

    for (auto item : vi) {
        cout << item << " ";
    }
    cout << endl;

    // --
    cout << endl;

    vector<string> vs;

    cout << "Enter 3 Words";
    cout << endl;
    for (int i = 0; i < 3; i++) {
        string s;

        cout << " " << i + 1 << ": ";
        cin >> s;

        vs.push_back(s);
    }
    cout << endl;

    for (auto item : vs) {
        cout << item << " ";
    }
    cout << endl;

    cout << "int vector vi has " << vi.size() << " items" << endl;

    vi[0] = 55;

    for (auto item : vi) {
        cout << item << " ";
    }
    cout << endl;

    sort(begin(vs), end(vs));
    for (auto item : vs) {
        cout << item << " ";
    }
    cout << endl;

    int threes = count(begin(vi), end(vi), 3);
    cout << "vector has " << threes << " 3's" << endl;

    int tees = count(begin(vs[0]), end(vs[0]), 't');
    cout << "first word has " << tees << " letter t's" << endl;

    return 0;
}