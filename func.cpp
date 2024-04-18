#include "header.h"

void instructions() {
    std::string choice = ""; 

    while (choice != "YES" && choice != "NO") {
        std::cout << "Do you need instructions? (YES/NO)";
        std::cin >> choice;
    }

    if (choice == "NO") {
        std::cout << "This program simulates a trip over the Oregon Trail from\nIndependence, Missouri to Oregon City, Oregon in 1847.\n";
        std::cout << "Your family of five will cover the 2040 mile Oregon Trail\n in 5-6 months --- if you make it alive.\n";
    } 
}

void difficultyShootingChoice() {
    
}