#include <iostream>
using namespace std;

int main() {
    int height = 10;
    int width = 10;

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            if ((i <= height / 2 && (j == 0 || j == width - 1 - i)) || // left side of the heart
                (i <= height / 2 && (j == i || j == width - 1))) {    // right side of the heart
                cout << "*";
            } else if (i > height / 2 && (j == i - height / 2 || j == width - i + height / 2 - 1)) { // bottom part of the heart
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

