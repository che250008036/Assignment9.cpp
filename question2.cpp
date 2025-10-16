#include <iostream>
using namespace std;


struct Color {
    int red;
    int green;
    int blue;
};

int main() {
   
    Color colors[5] = {
        {52, 1025, 0},
        {0, 655, 0},    
        {0, 0, 900},    
        {255, 55, 0},  
        {0, 300, 255}  
    };

 
    for (int i = 0; i < 3; i++) {
      colors[i].red = 255 - colors[i].red;
      colors[i].green = 255 - colors[i].green;
      colors[i].blue = 255 - colors[i].blue;
    }

 
    for (int i = 0; i < 5; i++) {
        cout << "Color " << i + 1 << " - RGB: ("
             << colors[i].red << ", "
             << colors[i].green << ", "
             << colors[i].blue << ")" << endl;
    }

    return 0;
}


	
