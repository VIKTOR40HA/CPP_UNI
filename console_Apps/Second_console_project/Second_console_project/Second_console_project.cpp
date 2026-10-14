
#include <iostream>
using namespace std;
int main()
{
   //Аритметични оператори 
    int x = 10;
    int y = 3;
    cout << x + y << "\n";
    cout << x - y << "\n";
    cout << x / y << "\n";
    cout << x % y << "\n";

    double a = 10.0;
    double b = 3.0;
    //Инкрементиране и декрементиране
    int x1 = 5;
    ++x1; //увеличава стойноста на x1 с 1 (x1 е 6)
    
    int y1 = 5;
    --y1; // намалява стойността на у със 1 (y1 e 4)
   
    //Пример: преброяване на хора в стая
    int peopleInRoom = 0;
    peopleInRoom++;
    peopleInRoom++;
    peopleInRoom++;

    cout << peopleInRoom<<"\n";// 3

    //Излиза един човек
    peopleInRoom--;

    //Оператори за присвояване
    int x2 = 10;

    //Комбинирани оператори за присвояване
    x2 += 5;//еквивалентно на x2= x2+5
    cout << x2 << "\n";//50

    int x3 = 5;
    int y3 = 3;
    cout << (x3 > y3);// Връща 1 (true), защото 5 е по-голямо

    int age = 18;
    cout << (age >= 18) << "\n";//1(true) Може да гласува
    cout << (age < 18) << "\n";//0(false) Не може да гласува
      
    //Приоритет на операторите
    int result1 = 2 + 3 * 4;//14
    int result2 = (2 + 3) * 4;//24
    int result3 = 10 - 2 + 5;//13
    int result4 = 10 - (2 + 5);//3

    //Работа с низове
    string greeting = "Hello and welcome";
    cout << greeting << "\n";

    //Конкатенация на низове
    string firstName = "John";
    string secondName = "Doe";

    string fullName = firstName + secondName;
    cout << fullName << "\n";

    //Добавяне към низ (метод append)
    string fullName2 = firstName.append(secondName);
    cout << fullName2 << "\n";

    return 0;
}


