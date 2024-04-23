#include "header.h"

void instructions() {
    std::string choice = ""; 

    while (choice != "YES" && choice != "NO") {
        std::cout << "Do you need instructions? (YES/NO): ";
        std::cin >> choice;
        transform(choice.begin(), choice.end(), choice.begin(), ::toupper);
    }

    if (choice == "YES") {
        std::cout << "\nThis program simulates a trip over the Oregon Trail from\nIndependence, Missouri to Oregon City, Oregon in 1847.\n";
        std::cout << "Your family of five will cover the 2040 mile Oregon Trail\nin 5-6 months --- if you make it alive.\n\n";
        std::cout << "You had saved $900 to spend for the trip, and you've just paid $200 for a wagon.\n";
        std::cout << "You will need to spend the rest of yur money on the following items:\n\n";
        
        std::cout << "\tOxen - You can spend $200-$300 on your team\n";
        std::cout << "\t\tThe more you spend, the faster you'll go because you'll have\n\t\tbetter animals\n\n";
        
        std::cout << "\tFood - The more you have, the less change there is of getting sick\n\n";
        
        std::cout << "\tAmmunition - $1 buys a belt of 50 bullets\n";
        std::cout << "\t\tYou will need bullets for attacks by animals and bandits, \n\t\tand for hunting food\n\n";
        
        std::cout << "\tClothing - This is especially important for the cold weather\n\t\t you will encounter when crossing the mountains\n\n";
        
        std::cout << "\tMiscellaneus supplies - This includes medicine and other things \n\t\tyou will need for sickness and emergency repairs\n\n\n";
        std::cout << "You can spend all of your money before you start your trip, or you can save some of yur cash to spend at forts along the way when you run low.\n";
        std::cout << "However, items cost more at the forts. You can also go hunting along the way to get more food.\n";
        std::cout << "Whenever you have to use your trusty rifle along the way, you will be told to type in a word";
        std::cout << "(one that sounds like a gun shot). The faster you type in that word and hit the"; 
        std::cout << "'Enter' key, the better luck you'll have with your gun.\n\n";
        std::cout << "At each turn, all items are shown in dollar amounts except bullets. When asked to enter money amounts, don't use a '$'.\n\n";
        std::cout << "Good luck!!!\n\n\n";
    }
}

void difficultyShootingChoice(settings& Settings) {
    std::string inputString = "";
    int choice = 0;

    std::cout << "How good a shot are you with your rifle?\n\t- (1) Ace marksman \n\t- (2) Good shot \n\t- (3) Fair to middlin'\n\t- (4) Need more practice\n\t- (5) Shaky knees\n";
    
    while (choice < 1 || choice > 5) {
        std::cout << "Enter one of the above: the better you claim you are, the faster you'll have to be with your gun to be successful: ";
        std::cin >> inputString;
        if (isdigit(inputString[0]))
            choice = stoi(inputString.substr(0,1));
    }

    Settings.difficultyChoice = choice;
}