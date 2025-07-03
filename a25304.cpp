#include <iostream>
using namespace std;

void a25304() {

    int x, t, a, b;

    cin >> x;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        x -= a * b;
    }

    if (x == 0) cout << "Yes";
    else cout << "No";


}