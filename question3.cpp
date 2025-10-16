#include <iostream>
using namespace std;


struct Point {
    float x;
    float y;
};

int main() {
   
    Point points[7];

   
    for (int i = 0; i < 7; i++) {
        cout << "Enter coordinates for Point " << i + 1 << " (x y): ";
        cin >> points[i].x >> points[i].y;
    }


    int count = 0;
    for (int i = 0; i < 7; i++) {
        if (points[i].x > 0 && points[i].y > 0) {
            count++;
        }
    }


    cout << "Number of points in the first quadrant: " << count << endl;

    return 0;
}


	
