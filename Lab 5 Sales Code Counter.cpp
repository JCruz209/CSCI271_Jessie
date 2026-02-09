#include <iostream>
#include <cassert>
using namespace std;

int main () {
    // 1 = Phone, 2 = Headphones, 3 = Charger
    int record1 = 1, record2 = 2, record3 = 1, record4 = 3, record5 = 2, record6 = 2;

    // Counters for each task type
    int phoneCount = 0, headphoneCount = 0, chargerCount = 0;

    // For loop: process of all 6 records
    for (int i = 1; i <= 6; i++) {
        int saleType = 0;
        if (i == 1) {
            saleType = record1;
        } else if (i == 2) {
            saleType = record2;
        } else if (i == 3) {
            saleType = record3;
        } else if (i == 4) {
            saleType = record4;
        } else if (i == 5) {
            saleType = record5;
        } else if (i == 6) {
            saleType = record6;
        }
        switch (saleType) {
            case 1:
                phoneCount++;
                break;
            case 2:
                headphoneCount++;
                break;
            case 3:
                chargerCount++;
                break;
            default:
                cout << "Sales Error" << endl;

        }
    }

    // Print Summary
    cout << "Phone: " << phoneCount << endl;
    cout << "Headphones: " << headphoneCount << endl;
    cout << "Charger: " << chargerCount << endl;
    return 0;
}

// Created by Jessie Cruz on 2/9/26.
