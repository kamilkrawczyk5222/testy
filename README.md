#include <iostream>

int main()
{

    int a1, a2, b1, b2;
    std::cout << "Podaj zmienne" << std::endl;
    std::cin >> a1 >> a2 >> b1 >> b2;
    int i = 3;
    std::cout << std::endl << std::endl;
    std::cout << "*" << "\t";


    if(a1<a2 && b1<b2){
    for (int a = a1; a <= a2; a++) {
        std::cout <<a << "\t";
        i = i + 2;
    }
    std::cout << std::endl;
    
    for (int b = b1; b <= b2; b++)
    {
        std::cout << b << "\t";
        for (int a = a1; a <= a2; a++)
        {
            
            std::cout << a * b << "\t";
            
        }
        std::cout << std::endl;
    }
    }
    else if (a1 > a2 && b1 < b2) {
        for (int a = a2; a <= a1; a++) {
            std::cout << a << "\t";
            i = i + 2;
        }
        std::cout << std::endl;

        for (int b = b1; b <= b2; b++)
        {
            std::cout << b << "\t";
            for (int a = a2; a <= a1; a++)
            {

                std::cout << a * b << "\t";

            }
            std::cout << std::endl;
        }
    }
    else if (a1 > a2 && b1 > b2) {
        for (int a = a2; a <= a1; a++) {
            std::cout << a << "\t";
            i = i + 2;
        }
        std::cout << std::endl;

        for (int b = b2; b <= b1; b++)
        {
            std::cout << b << "\t";
            for (int a = a2; a <= a1; a++)
            {

                std::cout << a * b << "\t";

            }
            std::cout << std::endl;
        }
    }
    else if (a1 < a2 && b1 > b2) {
        for (int a = a1; a <= a2; a++) {
            std::cout << a << "\t";
            i = i + 2;
        }
        std::cout << std::endl;

        for (int b = b2; b <= b1; b++)
        {
            std::cout << b << "\t";
            for (int a = a1; a <= a2; a++)
            {

                std::cout << a * b << "\t";

            }
            std::cout << std::endl;
        }
    }
    
    
}

# testy
