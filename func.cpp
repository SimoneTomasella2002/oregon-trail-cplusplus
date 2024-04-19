#include "header.h"

void instructions() {
    std::string choice = ""; 

    while (choice != "YES" && choice != "NO") {
        std::cout << "Do you need instructions? (YES/NO)";
        std::cin >> choice;
    }

    if (choice == "NO") {
        std::cout << "This program simulates a trip over the Oregon Trail from\nIndependence, Missouri to Oregon City, Oregon in 1847.\n";
        std::cout << "Your family of five will cover the 2040 mile Oregon Trail\n in 5-6 months --- if you make it alive.\n\n";
        std::cout << "You had saved $900 to spend for the trip, and you've just paid $200 for a wagon.\n";
        std::cout << "You will need to spend the rest of yur money on the following items:\n\n";
        std::cout << "\tOxen - You can spend $200-$300 on your team\n";
        std::cout << "\t\tThe more you spend, the faster you'll go because you'll have better animals\n\n";
    } 
}

void difficultyShootingChoice() {
    
}