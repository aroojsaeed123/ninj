#include <iostream>
#include<iomanip>
#include<string>
#include<cstdio>
using namespace std;

int main() {
    int hrs;
    int mins;
    int clock_12;
    int clock_24;

    char input;

    hrs = clock_24 / 100;
    mins = clock_24 % 100;
    bool Button_pressed;
    cout << "clear screen" << endl;

    while (Button_pressed == true)
    {
        cin >> Button_pressed;
        if (Button_pressed == 'N') {
            hrs = hrs + 1;
            cout << "Clear screen" << endl;
        }
        else if (Button_pressed == 'Y') {
            std::cout << "Menu:" << std::endl;
            std::cout << "User input:" << std::endl;
            cin >> input;
            if (input = 'Y') {
                break;
            }
            else if (input = 'N') {
                std::cout << "Do you want to add an hour?" << std::endl;
                cin >> input;
                if (input == 'Y') {
                    mins = mins + 1;
                    break;
                }
                else if (input == 'N') {
                    std::cout << "Do you want to add a minute?" << std::endl;
                    std::cin >> input;
                    if (input == 'Y') {

                        break;
                    }
                    else if (input == 'N') {
                        std::cout << "Do you want to add a second?" << std::endl;
                        std::cin >> input;
                        if (input == 'Y') {

                            break;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
            }
        }
    }
     std::cout << std::string(23, '*') << "          " << std::string(23, '*') << std::endl;
     std::cout << "*    12-hour Clock    *" << "          " << "*    24-hour Clock    *" << std::endl;
     std::cout << "*     " << clock_12 << "    *" << "          " << "*     " << clock_24 << "    *" << std::endl;
     std::cout << std::string(23, '*') << "          " << std::string(23, '*') << std::endl;



     system("pause");
   return 0;
 }