#include <iostream>
#include <string>


class Counter {

    int number = 1;
    std::string command;
public:
    void setNumber(int number) { this->number = number; }
    void setCommand(std::string q) { command = q; }
    std::string getCommand() { return command; }
    int getNumber() { return number; }

    void change() { 
    if (command == "+")
        ++number;
    if (command == "-")
        --number;
    
    }
    

};


int main() {
    setlocale(LC_ALL, "Russian");

    Counter z;
    std::string answer;
    std::string q;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
    std::cin >> answer;

    if (answer == "yes") {
        int number;
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> number;
        z.setNumber(number);
    }
    
    do  {
        
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> q;

        z.setCommand(q);
        
        z.change();
        if ((z.getCommand()) == "=") {
            std::cout << z.getNumber() << std::endl;
        }
        

    } while ((z.getCommand()) != "x");

    std::cout << "До свидания!";

    return 0;
}