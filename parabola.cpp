#include <iostream>
#include <cmath>

float quadraticCoefficient;
float secondCoefficient;
float constantCoefficient;
float discriminant;
float root1;
float root2;
float imgroot1;
float imgroot2;
int event;

void startUp() {
    std::cout <<"                       _           _       "<< "\n";
    std::cout <<"                      | |         | |      "<< "\n";
    std::cout <<" _ __   __ _ _ __ __ _| |__   ___ | | __ _ "<< "\n";
    std::cout <<"| '_ \\ / _` | '__/ _` | '_ \\ / _ \\| |/ _` |"<< "\n";
    std::cout <<"| |_) | (_| | | | (_| | |_) | (_) | | (_| |"<< "\n";
    std::cout <<"| .__/ \\__,_|_|  \\__,_|_.__/ \\___/|_|\\__,_|"<< "\n";
    std::cout <<"| |                                        "<< "\n";
    std::cout <<"|_|                                        "<< "\n";
    std::cout <<"\n";
    int ran = rand() % 2;
    switch (ran)
    {
        case 1:
            std::cout << "+-----------------------------+\n";
            std::cout << "|             |               |\n";
            std::cout << "|            # #              |\n";
            std::cout << "|          #  |  #            |\n";
            std::cout << "|         #   |   #           |\n";
            std::cout << "|--------#---------#----------|\n";
            std::cout << "|       #     |     #         |\n";
            std::cout << "|      #      |      #        |\n";
            std::cout << "|     #       |       #       |\n";
            std::cout << "|    #        |        #      |\n";
            std::cout << "+-----------------------------+\n" << "\n";
            break;
        case 2:
            std::cout << " __________ \n";
            std::cout << "| ________ |\n";
            std::cout << "||12345678||\n";
            std::cout << "|\"\"\"\"\"\"\"\"\"\"|\n";
            std::cout << "|[M|#|C][-]|\n";
            std::cout << "|[7|8|9][+]|\n";
            std::cout << "|[4|5|6][x]|\n";
            std::cout << "|[1|2|3][%]|\n";
            std::cout << "|[.|O|:][=]|\n";
            std::cout << "\"----------\"\n \n";
            break;
    }
    std::cout << "Welcome to use parabola!\n" << "\n";
    std::cout << "Parabola is a quadratic equation solver. a is the quadratic coefficient, \n";
    std::cout << "b is the second coefficient and c is the constant coeffiient. \n" << "\n"; 
    std::cout << "Have fun calculating!\n" << "\n";
}

void checkInputA(float x) {
    bool valid = false;
    while (!valid)
    {
        valid = true;
        std::cout << "Enter a: \n";
        std::cin >> quadraticCoefficient;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "ERROR input not valid \n";
            std::cout << "\n";
            valid = false;
        }
    }
    
}

void checkInputB(float x) {
    bool valid = false;
    while (!valid) {
        valid = true;
        std::cout << "Enter b: \n";
        std::cin >> secondCoefficient;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "ERROR input not valid \n";
            std::cout << "\n";
            valid = false;
        }
    }
}

void checkInputC(float x) {
    bool valid = false;
    while (!valid) {
        valid = true;
        std::cout << "Enter c: \n";
        std::cin >> constantCoefficient;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "ERROR input not valid \n";
            std::cout << "\n";
            valid = false;
        }
    }
}

void discriminantCalculation(float x, float y, float z) {
    discriminant = y*y-4*x*z;
    std::cout << "Discriminant: " << discriminant << "\n" << "\n";
}

void calculation(float x, float y, float z) {
    root1 = (-y+std::sqrt(y*y-4*x*z))/(2*x);
    root2 = (-y-std::sqrt(y*y-4*x*z))/(2*x);
    if(floor(std::sqrt(y*y-4*x*z)) == std::sqrt(y*y-4*x*z)){
        std::cout << "roots: \n" << "\n";
        std::cout << root1 << " and ";
        std::cout << root2 << "\n \n"; 
    } else {
        std::cout << "roots: \n" << "\n";
        std::cout << "-" << y << "+sqrt(" << y*y-4*x*z << ")/(" << 2*x << ")" << " and ";
        std::cout << "-" << y << "-sqrt(" << y*y-4*x*z << ")/(" << 2*x << ")" << "\n";
        std::cout << "approximation: " << root1 << " and " << root2 << "\n \n";
    }
    
    if (discriminant < 0)
    {
        int event = 0;
    }

    switch (event) {
    case 0:
        imgroot1 = (-y+std::sqrt(-1*(y*y-4*x*z)))/(2*x);
        imgroot2 = (-y-std::sqrt(-1*(y*y-4*x*z)))/(2*x);
        std::cout << "imaginary roots: " << imgroot1 << " and " << imgroot2 << "\n" << "\n";
        break;
    default:
        break;
    }
}   

int main() {
startUp();
    while(true){  
        checkInputA(quadraticCoefficient);
        checkInputB(secondCoefficient);
        checkInputC(constantCoefficient);
        discriminantCalculation(quadraticCoefficient, secondCoefficient, constantCoefficient);
        calculation(quadraticCoefficient, secondCoefficient, constantCoefficient);
    }    
}