
#include <iostream>
#include <Windows.h>
using namespace std;

//Създаване на функция
void My_function() {
    cout << "Функцията е изпълнена\n";
}
void function3(string f_name, int fage)
{
    cout << f_name << " Петрова." << fage << "години\n";
}
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    My_function();//Извикване на функцията 
    //Извежда функцията е изпълнена
    function3("Gosho", 44);
    //Извежда cout << f_name << " Петрова." << fage << "години\n";


    

    int day = 5;
    //Оператора break прекратява изпълнението на останалия код и проверката на следващите случаи

    //Оператора default
    switch (day) {
        case 6:
            cout << "Днес е събота\n";
        case 7:
            cout << "Днес е неделя\n";
        default:
            cout << "В очакване на уикенда\n";
       //Извежда в учакване на уикенда
    }
    //Цикли в C++
    //Цикъл while 
    int i = 0;
    while (i < 5)
    {
        cout << i << "Е по-малко от 5\n";
        i++;
    }
    //Пример за обратно броене
    int countdown = 3;
    while (countdown > 0)
    {
        cout << countdown <<"\n";
        countdown--;
    }
    cout << "ЧНГ";

    //Цикъл do/while 
    int i2 = 0;
    do {
        cout << i2 << "\n";
        i2++;
    } while (i2 < 5);
    //извежда 10

    //Пример: Въвеждане на данни от потребителя 
    //Многократно подканва потребителя да въведе положително число
    int number = 0;
    do {
        cout << "Въведете положително число:";
        cin >> number;
    } while (number < 0);

    //Извеждане на четните числа от 0 до 10 вкл.
    int i4 = 0;
    while (i4 <= 10) {
        cout << i4 << "\n";
        i4 += 2;
    }

    //Цикъл while в комбинация с if... else
    int dice = 1;
    while (dice <= 6) {
        if (dice < 6) {
            cout << "Няма шестица\n";
        }
        else {
            cout << "Шестица! Победа\n";
        }
        dice += 1;
    }
    //Цикъл for в C++
    //Израз 1 се изпълнява еднократно, преди да започне изпълнението на тялото на цикъла.
    //Израз 2 определя условието за изпълнение на тялото на цикъла.
    //Израз 3 се изпълнява след всяко изпълнение на тялото на цикъла.

    for (int i = 0; i < 5;i++) {
        cout << i << "\n";
    }

    //Извеждане на четни числа от 0 до 10 
    for (int i = 0; i <= 10;i += 2)
    {
        cout << i << "\n";
    }
    
    //Извеждане на нечетните числа от 1 до 9
    for (int i = 1;i <= 10;i += 2) {
        cout << i << "\n";
    }

    //Обратно броене
    for (int i = 5; i > 0;i--) {
        cout << i << "\n";
    }

    //Програма,която брои от 10 до 100 през 10
    for (int i = 10;i <= 100;i += 10)
    {
        cout << i << "\n";
    }
    //Извеждаме степените на числото 2 до 512 влл.
    for (int i = 2;i <= 512;i *= 2)
    {
        cout << i << "\n";
    }

    //Програма, която извежда таблицата за умножение на зададено число
    int number1 = 2;
    int i5;
    for (i5 = 1;i5 <= 10;i5++) {
        cout << number1 << "x" << i5 << "=" << number * i5 << "\n";
    }
    

    //Цикъл for-each в C++
    //обхождане на елементите от масив
    int myNumbers[5] = { 10,20,30,40,50 };
    for (int num : myNumbers) {
        cout << num << "\n";
    }
    //оператори break и continue 
    for (int i = 0; i < 10;i++) {
        if (i == 4) {
            break;
        }
        cout << "\n";
    }
    for (int i = 0;i < 10;i++) {
        if (i == 4) {
            continue;
        }
        cout << "\n";
    }
    
    return 0;
}

