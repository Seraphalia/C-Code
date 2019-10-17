#include <iostream>

int main() {

    int enter = 0;
    int cont1  = 0;
    int cont2 = 0;
    int cont3 = 0;
    int cont4 = 0;
    int cont5 = 0;
    int cont6 = 0;
    int cont7 = 0;
    int cont8 = 0;
    int cont9 = 0;
    int cont10 = 0;
    int choice1 = 0;
    int choice2 = 0;

    std::cout << "Welcome to the game!\n";
    std::cout << "Enter 1 to continue.\n";
    std::cin >> enter;

    while (enter != 1) {
        std::cout << "Wrong input!\n";
        std::cin >> enter;
    }
    if (enter == 1) {
        std::cout << "You wake up to a beautiful sight, your wife's sleeping face. You lean in for a kiss on her forehead\n" << "before standing up and head to the window. You see a man on the entrance of your mansion but disregarded him.\n" << "Your wife wakes up and asks for you to get her some coffee. 'Sure, my Princess.' you happily said, then left.";
    }
    
    std::cout << "\n" << "\n";
    std::cout << "Enter 1 to continue.\n";
    std::cin >> cont1;

    while (cont1 != 1) {
        std::cout << "Wrong input!\n";
        std::cin >> cont1;
    }
    if (cont1 == 1) {
        std::cout << "You got her some coffee that the maids prepared and walked back to the room, only to discover that the room has been ransacked.\n" << "And your wife, the Princess of the land, is gone.\n";
        std::cout << "\n";
        std::cout << "You panic and try to make sense of the situation. You see a piece of paper on the bed, looks like a note.\n";
    }

    std::cout << "\n" << "\n";
    std::cout << "Do you want to look at it?" << "\n" << "1 for Yes / 2 for No\n";
    std::cin >> choice1;

    while (choice1 != 1 and choice1 != 2) {
        std::cout << "Wrong input!\n";
        std::cin >> choice1;
    }
    if (choice1 == 1) {
        std::cout << "You look at the bed and approach it, grabbed the note and examined it. The handwriting is so ugly that you can barely read it.\n" << "Hang on, you can't read! After closer inspection you notice that it was not a note but a map to an area with the words 'Bandit Cave'.\n" << "You don't know what that means but that doesn't stop you.\n";
        std::cout << "\n" << "Enter 1 to continue.\n" << "\n";
        std::cin >> cont2;
        while (cont2 != 1) {
            std::cout << "Wrong input!";
            std::cin >> cont2;
        } 
        if (cont2 == 1) {
            std::cout << "You plan a siege for the area on the map, you think about alerting the King for aid in order to secure a victory, but you think about \n" << "the amount of time it would take to prepare a platoon.\n" << "\n";
            std::cout << "What do you do?\n" << "1 for Alert the King / 2 for Go Alone.\n" << "\n";
            std::cin >> choice2;

            while (choice2 != 1 and choice2 != 2) {
                std::cout << "Wrong input!";
                std::cin >> choice2;
            }
            if (choice2 == 1) {
                std::cout << "You tell your butlet to prepare a carriage to the King's castle and prepare yourself. You grab some food and a few other items and head off \n" << "for the King\n" << "\n";
                std::cout << "Enter 1 to continue.";
                std::cin >> cont3;
                std::cout << "\n";

                while (cont3 != 1) {
                    std::cout << "Wrong input!\n";
                    std::cin >> cont3;
                }
                if (cont3 == 1) {
                    std::cout << "You arrive at the front of the castle and enter into the throne room and kneel. You ask for help as your wife, the Princess, has been kidnapped.\n" << "The King, alerted, called for a platoon to prepare, you hand over the map to an attendant.\n" << "You ask how long it will take and the King assures you they will act as soon as possible.\n" << "You seem relieved\n" << "\n";
                    std::cout << "Enter 1 to continue.\n";
                    std::cin >> cont4;
                    std::cout << "\n";

                    while (cont4 != 1) {
                        std::cout << "Wrong input!\n";
                        std::cin >> cont4;
                        std::cout << "\n";
                    }
                    if (cont4 == 1) {
                        std::cout << "A month has passed now since the platoon went for the cave with nothing heard heard back from them. You started losing hope as days go by.\n" << "You hear a knock on the door so you answer it, it's a messenger from the King. He slowly and painfully \n" << "tells you that they found the Princess dead in the cave, says he's sorry and leaves.\n" << "You lost all your energy and fall faint.\n" << "\n";
                        std::cout << "Enter 1 to continue.\n";
                        std::cin >> cont5;
                        std::cout << "\n";

                        while (cont5 != 1) {
                            std::cout << "Wrong input!\n";
                            std::cin >> cont5;
                            std::cout << "\n";
                        }
                        if (cont5 == 1) {
                            std::cout << "You later died of a head injury from the fall.\n" << "\n";
                            std::cout << "Enter 1 to continue.\n";
                            std::cin >> cont6;
                            std::cout << "\n";

                            while (cont6 != 1) {
                                std::cout << "Wrong input!\n";
                                std::cin >> cont6;
                            }
                            if (cont6 == 1) {
                                std::cout << "End of story.";
                                exit;
                            }
                        }
                    }
                }
            }
            else if (choice2 == 2) {
                std::cout << "You tell your butlet to keep the house safe and head off, supplies in a bag and a sword in your hand. You follow the map and prepare a plan.\n" << "\n";
                std::cout << "Enter 1 to continue.\n" << "\n";
                std::cin >> cont7;

                while (cont7 != 1) {
                    std::cout << "Wrong input!\n";
                    std::cin >> cont7;
                    std::cout << "\n";
                }
                if (cont7 == 1) {
                    std::cout << "Weeks later you find the cave and see no one, so you enter. You find your wife in a cage, unconscious and with bruises so you rush to her aid.\n" << "You try to wake her up and she does. Your face lights up to see her face once again, before getting hit at the back of the head and going unconscious.\n" << "\n";
                    std::cout << "Enter 1 to continue.\n";
                    std::cin >> cont8;

                    while (cont8 != 1) {
                        std::cout << "Wrong input!\n";
                        std::cin >> cont8;
                        std::cout << "\n";
                    }
                    if (cont8 == 1) {
                        std::cout << "You wake up inside the very cage you tried to free your wife from, with her treating you.\n" << "Weeks go by without any signs of rescue but you ar ehappy to be with your wife.\n" << "\n" << "You both succumb to starvation.\n" << "\n" << "End of story." << exit;
                    }
                }
            }   
        }   
    }
    else if (choice1 == 2) {
        std::cout << "You ignore the piece of paper, thinking it as useless and alert the King of his daughter's kidnapping. The whole kingdom\n" << "is alerted of a possible bandit and stays alert and prepared for suspicious persons.\n" << "\n" << "They found nothing.\n";
        std::cout << "Years go by without any news of your wife and eventually lose hope. Falling into depression.\n" << "\n";
        std::cout << "Enter 1 to continue.\n";
        std::cin >> cont9;

        while (cont9 != 1) {
            std::cout << "Wrong input!\n";
            std::cin >> cont9;
            std::cout << "\n"; 
        }
        if (cont9 == 1) {
            std::cout << "You succumb to your sadness months later.\n";
            std::cout << "\n" << "End of story.";
        }
    }


}
