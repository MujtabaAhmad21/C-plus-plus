//#include <iostream>
//#include <map>
//#include <string>
//#include <string>
//using namespace std;
//
//class InvalidMovementException {};
//class ObjectNotFoundException {};
//class InvalidCommandException {};
//
//class Item
//{
//public:
//    string name;
//    string description;
//};
//
//class Location
//{
//public:
//    string description;
//    map<string, Location*> exits;
//    map<string, Item> items;
//};
//
//class Player 
//{
//public:
//    Location* currentLocation;
//    map<string, Item> inventory;
//};
//
//class Game 
//{
//public:
//    Player player;
//    map<string, Location> locations;
//
//    void run()
//    {
//        cout << "Welcome to the adventure game!" << endl;
//
//        while (true) {
//            cout << "\nPlease choose an action:" << endl;
//            cout << "1. Move" << endl;
//            cout << "2. Look around" << endl;
//            cout << "3. Take an item" << endl;
//            cout << "4. Check inventory" << endl;
//            cout << "5. Quit game" << endl;
//
//            int choice;
//            cin >> choice;
//
//            try
//            {
//                if (choice == 1)
//                {
//                    cout << "Enter direction (north, south, east, west): ";
//                    string direction;
//                    cin >> direction;
//                    movePlayer(direction);
//                }
//                else if (choice == 2)
//                {
//                    lookAround();
//                }
//                else if (choice == 3) 
//                {
//                    cout << "Enter item name: ";
//                    string itemName;
//                    cin >> itemName;
//                    takeItem(itemName);
//                }
//                else if (choice == 4)
//                {
//                    showInventory();
//                }
//                else if (choice == 5)
//                {
//                    cout << "Thank you for playing. Goodbye!" << endl;
//                    break;
//                }
//                else
//                {
//                    throw InvalidCommandException();
//                }
//            }
//            catch (InvalidMovementException&)
//            {
//                cout << "You can't go that way." << endl;
//            }
//            catch (ObjectNotFoundException&) 
//            {
//                cout << "There's no such object here." << endl;
//            }
//            catch (InvalidCommandException&) 
//            {
//                cout << "I don't understand that command." << endl;
//            }
//        }
//    }
//
//
//    void movePlayer(const string& direction) 
//    {
//        if (player.currentLocation->exits.count(direction) == 0) 
//        {
//            throw InvalidMovementException();
//        }
//        player.currentLocation = player.currentLocation->exits[direction];
//    }
//
//    void lookAround() 
//    {
//        cout << player.currentLocation->description << endl;
//    }
//
//    void takeItem(const string& itemName)
//    {
//        if (player.currentLocation->items.count(itemName) == 0)
//        {
//            throw ObjectNotFoundException();
//        }
//        player.inventory[itemName] = player.currentLocation->items[itemName];
//        player.currentLocation->items.erase(itemName);
//    }
//
//    void showInventory() 
//    {
//        for (const auto& item : player.inventory) 
//        {
//            cout << item.first << endl;
//        }
//    }
//};
//
//int main()
//{
//    Game game;
//    Location location1;
//    location1.description = "You are in a small room. There is a door to the north.";
//
//    Location location2;
//    location2.description = "You are in a large hall. There is a door to the south.";
//
//    location1.exits["north"] = &location2;
//    location2.exits["south"] = &location1;
//
//    Item item;
//    item.name = "key";
//    item.description = "A small rusty key.";
//    location1.items[item.name] = item;
//
//    game.locations["small room"] = location1;
//    game.locations["large hall"] = location2;
//
//    game.player.currentLocation = &game.locations["small room"];
//
//    game.run();
//
//    system("pause");
//    return 0;
//}
