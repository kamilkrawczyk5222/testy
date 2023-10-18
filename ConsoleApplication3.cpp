#include <iostream>

int main()
{
    /*int i = 0;
    while(i++, i < 100) {
        std::cout << "Hello World!\n";
    }*/


       /*int a;
       int b;
       std::cout << "Podaj liczbę A\n";
       std::cin >> a;
       std::cout << "Podaj liczbę B\n";
       std::cin >> b;
       if (a > b) {
           while (a != b) {

               std::cout << b << std::endl;
                   b++;
           }
       }
       else if (a < b) {
           while (a != b) {

               std::cout << a << std::endl;
               a++;
           }
       }
       else {
           exit;
       }*/
   /* int x = 0;
    while (x++, x < 100) {
        
        std::cout << rand() << std::endl;
    }*/
    
    /*int px,py;
    std::cout << "==========================================================" << std::endl << std::endl;
    std::cout << "Podaj x i y" << std::endl;
    std::cin >> px;
    std::cout << "X=";
    std::cout << px << std::endl;
    std::cin >> py;
    std::cout << "Y=";
    std::cout << py << std::endl;
    
    int qa,qb;
    int i = 0;
    while (i++, i < 1000) {
        qa = rand()%100;
        qb = rand()%100;
            
        std::cout <<"Punkt X= ";
        std::cout << qa  << std::endl;
        std::cout << "Punkt Y= ";
        std::cout << qb << std::endl << std::endl;
        int dlg;
        dlg = (qa - px) * (qa - px) + (qb - py) * (qb - py);
        dlg = sqrt(dlg);
        std::cout << "Odleglosc punktu = ";
        std::cout << dlg << std::endl << std::endl;
        if (dlg < 20) {
            std::cout << "Znajduje sie w okregu" << std::endl << std::endl;
        }
        else {
            std::cout << "Nie znajduje sie na okregu" << std::endl << std::endl;
        }
        
    }*/

    int a1, a2, b1, b2;
    std::cout << "Podaj zmienne" << std::endl;
    std::cin >> a1>>a2>> b1>> b2;
    
    while (a1 < a2) { 
        std::cout << a1;
    }

    for(int b=b1;b<=b2;b++)
    {
        for (int a = a1; a <= a2; a++)
        {
            std::cout << a * b1 << "\t";
            std::cout << std::endl;
        }
    }





    //if (a1 < a2 && b1 < b2) {
    //    std::cout << 0 << "|" << a1 << "|";
    //    while (a1 <= a2) {
    //        a1++;
    //        std::cout << a1 << "|";
    //        

    //    }
    //    std::cout <<a2;
    //    std::cout << std::endl;
    //    std::cout << "----------------------------------------" << std::endl;

    //    std::cout << b1 << "|" << (b1 * a1) << "|" << (b1 * a2) << std::endl;
    //    while (b1 <= b2) {
    //        b1++;
    //        std::cout << b1 << "|" << (b1 * a1) << "|" << (b1 * a2) << std::endl;
    //    }
    //    std::cout << "----------------------------------------" << std::endl;
    //    std::cout << b2 << "|" << (b2 * a1) << "|" << (b2 * a2);
    //}
    //else if (a1 > a2 && b1 < b2) {
    //    std::cout << 0 << "|" << a2 << "|" << a1 << std::endl;
    //    std::cout << "----------------------------------------" << std::endl;
    //    std::cout << b1 << "|" << (b1 * a2) << "|" << (b1 * a1) << std::endl;
    //    std::cout << "----------------------------------------" << std::endl;
    //    std::cout << b2 << "|" << (b2 * a2) << "|" << (b2 * a1);
    //}
    //else if (a1 > a2 && b1 > b2) {
    //    std::cout << 0 << "|" << a2 << "|" << a1 << std::endl;
    //    std::cout << "----------------------------------------" << std::endl;
    //    std::cout << b2 << "|" << (b2 * a2) << "|" << (b2 * a1) << std::endl;
    //    std::cout << "----------------------------------------" << std::endl;
    //    std::cout << b1 << "|" << (b1 * a2) << "|" << (b1 * a1);
    //}
    //else if (a1 < a2 && b1 > b2) {

    //    std::cout << 0 << "|" << a1 << "|" << a2 << std::endl;
    //    std::cout << "----------------------------------------" << std::endl;
    //    std::cout << b2 << "|" << (b2 * a1) << "|" << (b2 * a2) << std::endl;
    //    std::cout << "----------------------------------------" << std::endl;
    //    std::cout << b1 << "|" << (b1 * a1) << "|" << (b1 * a2);
    //}
    


}
