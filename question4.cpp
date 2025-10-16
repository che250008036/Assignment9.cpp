#include <iostream>
#include <string>
using namespace std;


struct SalesRecord {
    string month;
    float amount;  
};

int main() {
   
    SalesRecord sales[12];
   
   
    for (int i = 0; i < 12; ++i) {
        cout << "Enter the month name (e.g., January, February, etc.) for month " << i + 1 << ": ";
        cin >> sales[i].month;
        cout << "Enter the sales amount for " << sales[i].month << ": ";
        cin >> sales[i].amount;
    }

   
    int maxIndex = 0, minIndex = 0;

   
    for (int i = 1; i < 12; ++i) {
        if (sales[i].amount > sales[maxIndex].amount) {
            maxIndex = i;  
        }
        if (sales[i].amount < sales[minIndex].amount) {
            minIndex = i; 
        }
    }

   
    cout << "\nThe month with the highest sales is " << sales[maxIndex].month
         << " with an amount of $" << sales[maxIndex].amount << endl;
    cout << "The month with the lowest sales is " << sales[minIndex].month
         << " with an amount of $" << sales[minIndex].amount << endl;

    return 0;
}


